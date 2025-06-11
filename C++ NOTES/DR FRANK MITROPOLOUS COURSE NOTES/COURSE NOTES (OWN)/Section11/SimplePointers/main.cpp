#include <iostream>
#include <vector>

using namespace std;

int main(){
    
    int num{10};
    cout << "Value of num is: " << num << endl;
    cout << "Size of num is: " << sizeof num << endl;
    cout << "Address of num is: " << &num << endl;
    
    
    int *p;
    cout << "\nValue of p is: " << p << endl; // Garbage Value
    cout << "Address of p is: " << &p << endl;
    cout << "Size of p is: " << sizeof p << endl;
    
    p = nullptr;
    cout << "\nValue of p is: " << p << endl;
    
    
    int *p1 {nullptr};
    double *p2 {nullptr};
    unsigned long long *p3 {nullptr};
    vector<string> *p4 {nullptr};
    string *p5 {nullptr};
    
    cout << "\nsize of p1 is: " << sizeof p1 << endl; 
    cout << "\nsize of p2 is: " << sizeof p2 << endl; 
    cout << "\nsize of p3 is: " << sizeof p3 << endl; 
    cout << "\nsize of p4 is: " << sizeof p4 << endl;    
    cout << "\nsize of p5 is: " << sizeof p5 << endl; 


    
    
    
    return 0;
}