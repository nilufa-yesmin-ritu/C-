#include <iostream>
using namespace std;

void waiting_Time (int brustTime[], int waitingTime[], int n){  
    waitingTime[0] = 0;
    for(int i=1; i<n; i++){
        waitingTime[i] = brustTime[i-1] + waitingTime[i-1];
    }

}

void turnaround_Time (int brustTime[], int waitingTime[],int turnaroundTime[], int n){
    for(int i=0; i<n; i++){
        turnaroundTime[i] = brustTime[i] + waitingTime[i];
    }

}

void average(int brustTime[], int n){
    int waitingTime[n], turnaroundTime [n];
    int total_WT = 0;
    int total_TT = 0;

    waiting_Time(brustTime,waitingTime,n);
    turnaround_Time(brustTime,waitingTime,turnaroundTime,n);

    cout << "Process    Brust_Time  Waiting_Time    Turnaround_Time" <<endl;

    for(int i=0; i<n; i++){
        total_WT = total_WT + waitingTime[i];
        total_TT = total_TT = turnaroundTime[i];
        cout << i+1 <<"\t\t" << brustTime[i] << "\t\t" << waitingTime[i] << "\t\t" << turnaroundTime[i] << "\t\t" << endl;
    }

    float avg_WT = float(total_WT)/float(n);
    float avg_TT = float(total_TT)/float(n);

    cout << "Average waiting time : " << avg_WT << endl;
    cout << "Average turnaround time : " << avg_TT << endl;
    

}

int main (){

    int process[] = {1,2,3,4,5};
    int n = sizeof(process)/sizeof(process[0]);

    int brustTime[n];
    for(int i=0; i<n; i++){
        cout << "Process " << i+1 << " for brust time: " ;
        cin >> brustTime[i];
    }
    average(brustTime,n);
    return 0;
}