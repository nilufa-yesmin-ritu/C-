#include <iostream>
using namespace std;
int main(){

    cout << "Enter the array length: ";
    int size;
    cin >> size;

    cout << "Enter the index of array number: \n";

    int num[size];
    for (int i=0; i<size; i++){
        cin >> num[i];
    }

    int large_num = INT_MIN;

    for ( int i=0; i<size; i++){
        large_num = max (num[i],large_num);
    }

    cout << "Smallest value is "  << large_num <<endl;
    return 0;
}