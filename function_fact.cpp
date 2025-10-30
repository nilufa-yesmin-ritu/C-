#include <iostream>
using namespace std;

int factCal(int n){
    int fact=1;
    for(int i=1; i<=n; i++){
        fact=fact*i;
    }
    return fact;
}


int main(){
    cout<< "Total factorial:" << factCal(4) <<endl;
    return 0;
}