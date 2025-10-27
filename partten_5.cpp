#include <iostream>
using namespace std;
int main(){
    int n = 4;
    int num = 1;
    for(int i=0; i<n; i++){
        

        for(int k =0; k <i; k++)
        {
            cout << "  ";
        }
        
        for(int j=i; j<n; j++){
            cout<<" ";
            cout<< num;
        }
        num++;
        cout << endl;
    }
    return 0;
} 