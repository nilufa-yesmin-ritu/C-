#include <iostream>
using namespace std; 
int main(){
    int i, j, p, f;
    cout << "Enter the reference number of pages: ";
    cin >> p;

    cout << "Enter the frame size: ";
    cin>> f;

    int page[p], frame[f];
    for(i=0; i<p; i++){
        cin >> page[i];
    }

    for(i=0; i<f; i++){
        frame[i] = -1;
    }

    int found, fault = 0, k=0;
    for(i=0; i<p; i++){
        found = 0;
        for(j=0; j<f; j++){
            if(page[i] == frame[i]){
                found = 1;
                break;
            }
        }
        if(found == 0){
            frame[k] = page[i];
            k = k+1 % f;
            fault++;
        }
    }

    cout << "Fault in this program is: " << fault << endl;
    return 0; 
}









