#include <iostream>
using namespace std;

void reverseArray(int arr[], int size)
{
    int start = 0, end = size - 1;

    while (start < end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}
int main()
{
    int arr[] = {3, 5, 2, 8, 4, 9};
    int size = sizeof(arr) / sizeof(int);

    cout << "After reversing the array: ";

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    

    reverseArray(arr, size);

    cout << "Before reversing the array: ";

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}