// Section 12
// Dynamic Memory

#include <iostream>

using namespace std;

int main(){
    
    int *int_ptr {nullptr};
    int_ptr = new int;
    cout << "Address of int_ptr: " << int_ptr << endl;
    delete int_ptr;
    
    
    
    size_t size{0};
    double *temp_ptr;   
    cout << "How Many temps? ";
    cin >> size;
    
    temp_ptr = new double[size];
    cout << "Address of First Index of Temp_Ptr: " << temp_ptr << endl;
    delete [] temp_ptr;
    
    
    cout << endl;
    return 0;
}