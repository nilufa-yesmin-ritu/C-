#include <iostream>
using namespace std;

int digitSum(int num){
    int sum=0;
    while(num>0){
       int last_digit = num%10;
       num = num/10;
       sum+=last_digit;
    } 
    return sum;
}
int main(){
    cout <<"Sum of digit: " << digitSum(123) <<endl;
    return 0;
}