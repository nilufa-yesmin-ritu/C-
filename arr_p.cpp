#include <iostream>
using namespace std;
int main (){
    cout << "Enter the lenth of array: ";
    int len;
    cin >> len;

    cout << "Enter the array element: ";
    int arr[len];
    for(int i=0; i<len; i++){
        cin >> arr[i];
    }

    for(int i=0; i<len; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}