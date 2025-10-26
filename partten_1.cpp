#include <iostream>
using namespace std;
int main() {
    cout << "Enter number:";
    int n;
    cin >> n;

    // int num = 1;
    // for (int i = 0; i < n; i++){
    //     for (int j = 0; j < n; j++){
    //         cout << num;                   
    //         num++;
    //     }
    //     cout << endl;
    // }



    char ch = 'A';
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cout << ch;
            ch++;
        }
        cout << endl;
    }



    return 0;
}