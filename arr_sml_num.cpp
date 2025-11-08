#include <iostream>
using namespace std;
int main(){
    int num[] ={5, 15, 22, 1, -15, 24};
    int size = sizeof(num)/sizeof(int);

    int small_num = INT_MAX;

    for ( int i=0; i<size; i++){
        if (num[i] < small_num){
            small_num = num[i];
        }
    }

    cout << "Smallest value is "  << small_num <<endl;
    return 0;
}