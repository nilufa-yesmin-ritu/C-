#include <iostream>
using namespace std;
int main(){

    cout << "Coulum digit:";
    int n;
    cin >> n;

    cout << "Row digit:";
    int m;
    cin >> m;

    for (int i = 1; i<= n; i++){ // partten with character
        char ch = 'A';
        for (int j = 1; j<=m; j++){
            cout << ch ;
            ch += 1;
        }
        cout << endl;
    } cout << endl;

    for (int i = 1; i <= n; i++){  // partten with digit
        for (int j = 1; j <= m; j++){
            cout << j;
        }
        cout << endl;
    }cout << endl;

    for (int i = 1; i <= n; i++){  // partten with digit
        for (int j = 1; j <= m; j++){
            cout << " * ";
        }
        cout << endl;
    }

    return 0;
}