#include <iostream>
using namespace std;
#include <vector>

int main(){
    // vector <int> vec = {1,2,3};
    // cout << vec[0] <<endl;

    vector <int> vec = {45,12,67};
    cout << "Size of vector: " << vec.size() << endl;

    vec.pop_back();     //delete element
    cout << "After deletetion size of vector: " << vec.size() << endl;

    vec.push_back(78);      //insert element
    vec.push_back(24);
    cout << "After insertion size of vector: " << vec.size() << endl;

    cout << "All the element: \n";
    for(int i : vec){
        cout<< i <<endl;
    }

    cout <<"Capacity of vector: " << vec.capacity() << endl;
    return 0;
}