// Section 14
// MyString - startin point

#include <iostream>
#include "MyString.h"

using namespace std;


int main(){
    
    Mystring empty;    // no-args constructor
    Mystring larry("Larry");  // Overloaded Constructor
    Mystring stooge {larry};  // copy constructor
    
    
    empty.display();
    larry.display();
    stooge.display();
    
    return 0;
}