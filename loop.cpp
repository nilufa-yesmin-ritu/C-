#include <iostream>
using namespace std;
int main()
{
    // while loop
    int n;
    cout << "Enter the number:";
    cin >> n;

    int i = 1;
    while (i <= n)
    {
        cout << i << " ";
        i++;
    }
    cout << endl;

    // for loop
    int m;
    cout << "Enter the number:";
    cin >> m;

    for (int i = 1; i <= m; i++)
    {
        cout << i << " ";
    }
    cout << endl;

    // do while loop
    int p;
    cout << "Enter the number:";
    cin >> p;

    int j = 1;
    do
    {
        cout << j << " ";
        i++;
    } while (j <= p);

    return 0;
}