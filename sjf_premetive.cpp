#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of processes: ";
    cin >> n;

    int proid[99], a_t[99], b_t[99], r_t[99];
    int c_t[99], w_t[99], ta_t[99];

    // Input  At and Bt
    for(int i = 0; i < n; i++) {
        cout << "ArivalTime for Process " << i+1 << ": ";
        cin >> a_t[i];

        cout << "BurstTime for Process " << i+1 << ": ";
        cin >> b_t[i];

        r_t[i] = b_t[i];
        proid[i] = i + 1;
    }

    
    int complete = 0;
    int time = 0;



    while(complete != n) {

        int ind = -1;
        int min = 9999;

        
        for(int i = 0; i < n; i++) {
            if(a_t[i] <= time && r_t[i] > 0 && r_t[i] < min) {
                min = r_t[i];
                ind = i;
            }
        }

        if(ind == -1) {
            time++; // 
            continue;
        }

        r_t[ind]--; 

        if(r_t[ind] == 0) {
            complete++;
            c_t[ind] = time + 1;
        }

        time++;
    }


    float totalWT = 0, totalTAT = 0;
    float avg_wt,avg_tat;
    

    for(int i = 0; i < n; i++) {
        ta_t[i] = c_t[i] - a_t[i];
        w_t[i] = ta_t[i] - b_t[i];
        totalWT += w_t[i];
        totalTAT += ta_t[i];
    }

    avg_wt = totalWT/n;
    avg_tat = totalTAT/n;

    cout << "\nProcess\tAT\tBT\tCT\tTAT\tWT\n";
    for(int i = 0; i < n; i++) {
        cout << proid[i] << "\t" << a_t[i] << "\t" << b_t[i] << "\t"
             << c_t[i] << "\t" << ta_t[i] << "\t" << w_t[i] << endl;
    }


    cout << "Average Waiting Time = " << avg_wt <<" ms\n" ;
    cout << "Average Turnaround Time = " << avg_tat << " ms\n";

    return 0;
}