#include <iostream>
using namespace std;
int linearSearch(int arr[], int size, int target){
    for(int i=0; i<size; i++){
        if(arr[i] == target){
            return i;
        }
    }
    return -1;
}
int main(){
    int arr[] = {2,4,7,6,5,2};
    int size = sizeof(arr)/sizeof(int);
    int target = 6;


   cout << linearSearch(arr, size, target) <<endl;;
    return 0;
}