#include <iostream>
using namespace std;

int product(int arr[], int size)
{
    int product = 1;
    for (int i = 0; i < size; i++)
    {
        product *= arr[i];
    }
    return product;
}
int main()
{
    int arr[] = {2, 4, 5, 6, 9};
    int size = 5;

    cout << "The product of array: " << product(arr, size);
    return 0;
}