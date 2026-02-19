#include <iostream>
using namespace std;
int main(){
    float total_tt = 0, total_wt = 0;
    int n,i;
    cout << "Enter the number of process: ";
    cin >> n;

    int bt[n], ct[n], tt[n], wt[n];
    for(i=0; i<n; i++){
        cout << "P" << i+1 <<" = ";
        cin >> bt[i];   // 3 5 4
        
    }

    ct[0] = bt[0]; // 3
    for(i=1; i<n; i++){
        ct[i] = ct[i-1] + bt[i];  //3+5=8   8+4=12
    }

    for(i=0; i<n; i++){
        tt[i] = ct[i];   // 3  8  12
        total_tt = total_tt + tt[i]; // 11+12=23
        
    }

    for(i=0; i<n; i++){
        wt[i] = tt[i] - bt[i];    // 3-3=0. 8-5=3. 12-4=8
        total_wt = total_wt + wt[i]; //  3+8=11
    }

    cout << "Process"  << "  BT" << "      TT" << "      WT" << endl;
    for(i=0; i<n; i++){
        cout << "  P" << i+1 << "   \t " << bt[i] << "  \t " << tt[i] << "  \t " << wt[i] << endl;
    }



    float avg_tt = total_tt / n;
    float avg_wt = total_wt / n;
    cout << "Avarage numumber of turnaround time: " << avg_tt << endl;
    cout << "Avarage numumber of waitting time: " << avg_wt << endl;
    return 0;
}
