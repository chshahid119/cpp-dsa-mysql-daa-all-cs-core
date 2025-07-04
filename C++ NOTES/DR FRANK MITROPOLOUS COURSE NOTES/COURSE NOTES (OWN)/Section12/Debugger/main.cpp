//Section 12
//Debugger


#include <iostream>
using namespace std;


void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
    
}

int main(){
    
    int i{5};
    while (i>0){
        cout << i << endl;
        i--;
    }
    
    
    int x{100}, y{200};
    cout << "\n x: " << x << endl;
    cout << "\n y: " << y <<  endl;
    
    
    swap(&x, &y);
    
    
    scout << "\n x: " << x << endl;
    cout << "\n y: " << y <<  endl;
    cout << endl;
    return 0;
}