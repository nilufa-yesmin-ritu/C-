#include <iostream>
using namespace std;
int main(){
    cout << "Enter number: ";
    int num;
    cin >> num;

    int rem, rev_num=0;
    while(num > 0){
        rem = num%10;
        rev_num = rev_num *10 +rem;
        num = num / 10;
    }
    cout << "Reverse number is: " << rev_num << endl;
    
    return 0;
}