#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cout << "Enter the number a: ";
    cin >> a;

    cout << "Enter the number b: ";
    cin >> b;

    cout << "Enter the number c: ";
    cin >> c;

    if (a>b & a>c){
        cout << "Biggest number is a : " << a;
    }
    else if (b>c & b>a){
        cout << "Biggest number is b : " << b;
    }
    else cout << "Biggest number is c : " << c;
    
    cout << endl;

    return 0;
}