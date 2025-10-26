#include <iostream>
using namespace std;                    //reverse triangle partten
int main(){
    int n = 4;
    char ch = 'A';
    for (int i = 0; i < n; i++){
        for(int j=i+1; j>0; j--){
            cout << ch <<" ";
            
        } 
        cout << endl;
        ch++;
    }

    // int n = 4;
    // for (int i = n-1; i > 0; i--){
    //     int num =1;
    //     for(int j=i+1; j>0; j--){
    //         cout << num <<" ";
    //         num++;
    //     }
    //     cout << endl;
    // }






    return 0;
}