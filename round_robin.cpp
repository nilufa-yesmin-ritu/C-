#include <iostream>
using namespace std;

int main() {

    int n, q;
    cout << "Enter processes no: ";
    cin >> n;

    int bt[n], rem[n], wt[n], tt[n];

    cout << "Enter time quantum: ";
    cin >> q;

    for (int i = 0; i < n; i++) {
        cout << "Burst time of Process " << i + 1 << ": ";
        cin >> bt[i];
        rem[i] = bt[i];
        wt[i] = 0;
        tt[i] = 0;
    }


    int t = 0, done = 0;
    int rq[100], f = 0, r = 0;

    for (int i = 0; i < n; i++) {
        rq[r++] = i;
    }

    while (done < n) {

        if (f == r) break; 

        int id = rq[f++];  

        int run = (rem[id] > q) ? q : rem[id];
        rem[id] -= run;
        t += run;

        if (rem[id] > 0) {
            rq[r++] = id;  
        } else {
            done++;
            tt[id] = t;
            wt[id] = tt[id] - bt[id];
        }
    }

    float totalWt = 0, totalTt = 0;

    cout << "\nPID\tBT\tWT\tTAT\n";
    for (int i = 0; i < n; i++) {
        cout << "P" << i + 1 << "\t" << bt[i] << "\t" << wt[i] << "\t" << tt[i] << endl;
        totalWt += wt[i];
        totalTt += tt[i];
    }

    cout << "\nAvg. Waiting Time = " << totalWt / n << " ms\n";
    cout << "Avg. Turnaround Time = " << totalTt / n << " ms\n";

    return 0;
}