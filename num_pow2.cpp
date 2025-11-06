#include <iostream>
using namespace std;
int main(){
    cout << "Enter the num: ";
    int n;
  // reading value of n from user
  cin >> n;

  if (n > 0) {
    // & operation between n and n - 1
    int i = n & (n - 1);

    // check if n is a power of 2
    if (i == 0) {
      cout << n << " is a power of 2" <<endl;
    } else {
      cout << n << " is not a power of 2" <<endl;
    }
  } else {
    cout << "Enter a valid positive number" <<endl;
  }
    
    return 0;
}