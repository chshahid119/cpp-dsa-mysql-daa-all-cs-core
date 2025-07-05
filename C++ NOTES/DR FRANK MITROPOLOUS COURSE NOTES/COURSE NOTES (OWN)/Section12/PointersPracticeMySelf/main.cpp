#include <iostream>
using namespace std;


void UpdatePtr(int*);
void swap(int *a, int *b);


int main(){
    
    int a = 10;
    int *ptr = &a;
    
    
    cout << "The Value of a is: " << a << endl;
    cout << "The Address of a is: " << ptr << endl;
    cout << "The Value at the Address is: " << *ptr << endl; // dereferencing it here 
    
    
    cout << "---------------------------------------------" << endl;
    
    *ptr = 20; 
    
    cout << "\nThe Value of a after change is: " << a << endl;
    cout << "The Address of a is: " << ptr << endl;
    cout << "The Value at the Address is: " << *ptr << endl; // dereferencing it here 
    
    
    cout << "---------------------------------------------" << endl;

    UpdatePtr(&a);
    cout << "\nValue of a after updating from Pointer Update Function: " << a << endl;
    
    
    cout << "---------------------------------------------" << endl;
    cout << endl;
    
    int var1=10;
    int var2=20;
    swap(&var1, &var2);
    cout << "The Values of var1 (After Swaping): " << var1 << endl;
    cout << "The Values of var2 (After Swaping): " << var2 << endl;

    
    

    cout << endl;
    return 0;
}



void UpdatePtr(int *ptr){
    *ptr = 30;
}

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}