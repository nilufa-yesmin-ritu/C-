#include <iostream>
using namespace std;

int sum(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    return sum;
}
int main()
{
    int arr[] = {2, 4, 5, 6, 9};
    int size = 5;

    cout << "The sum of array: " << sum(arr, size);
    return 0;
}