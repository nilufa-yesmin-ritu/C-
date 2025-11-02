#include <iostream>
using namespace std;
int main(){
    cout << "Enter a value: ";
    int a;
    cin >> a;

    cout << "Enter b value: ";
    int b;
    cin >> b;
    
    int bitwise_and  = a & b;
    int bitwise_or = a | b;
    int bitwise_xor = a ^ b;
    int bitwise_not_a = ~a;
    int bitwise_not_b = ~b;
    int bitwise_left_shift = a << 2;
    int bitwise_right_shift = b >> 3;

    cout << "Bitwise AND :" <<bitwise_and <<endl;
    cout << "Bitwise OR :" <<bitwise_or <<endl;
    cout << "Bitwise XOR :" <<bitwise_xor <<endl;
    cout << "Bitwise NOT A :" <<bitwise_not_a <<endl;
    cout << "Bitwise NOT B :" <<bitwise_not_b <<endl;
    cout << "Bitwise Left Shift :" <<bitwise_left_shift <<endl;
    cout << "Bitwise Right Shift :" <<bitwise_right_shift <<endl;

    return 0;
}