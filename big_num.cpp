#include <iostream>
using namespace std;

int main()
{
    int a, b, c;

    cout << "A : ";
    cin >> a;

    cout << "B : ";
    cin >> b;

    cout << "C : ";
    cin >> c;

    if (a >= b && a >= c)
    {
        cout << "Biggest number is A\n";
    }
    else if (b >= a && b >= c)
    {
        cout << "Biggest number is B\n";
    }
    else
    {
        cout << "Biggest number is C\n";
    }

    return 0;
}