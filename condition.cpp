#include <iostream>
using namespace std;
int main()
{
    cout << "Enter the a number:";
    int a;
    cin >> a;
    cout << "Enter the b number:";
    int b;
    cin >> b;

    if (a > b)
    {
        cout << "The biggest number is:" << a << endl;
    }
    else
    {
        cout << "The biggest number is:" << b << endl;
    }
    return 0;
}