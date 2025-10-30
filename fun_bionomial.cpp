#include <iostream>
using namespace std;

int factN(int n){
    int ftN=1;
    for(int i=1; i<=n; i++){
        ftN*=i;
    }
    return ftN;
}

int factR(int r){
    int ftR=1;
    for(int i=1; i<=r; i++){
        ftR*=i;
    }
    return ftR;
}

int factP(int n, int r){
    int p = n-r;
    int ftP=1;
    for(int i=1; i<=p; i++){
        ftP*=i;
    }
    return ftP;
   
}


int main(){
    cout << "Enter the value of n :";
    int n;
    cin >> n;
    cout << "Enter the value of r :";
    int r;
    cin >> r;

    int N = factN(n);
    int R =  factR(r);
    int P = factP(n,r);

    int bioC = N/(R*P);

    cout << "Ans: " << bioC  << endl;

    return 0;
}