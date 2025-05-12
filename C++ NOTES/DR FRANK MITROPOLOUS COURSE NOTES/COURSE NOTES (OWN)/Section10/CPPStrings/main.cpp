#include <iostream>
#include <iomanip>
#include <string> // important

using namespace std;

int main(){
        
    string s0;
    string s1 {"Apple"};
    string s2 {"Banana"};
    string s3 {"Kiwi"};
    string s4 {"apple"};
    string s5 {s1};  // Apple
    string s6 {s1, 0, 3}; // App
    string s7 {10, 'X'}; // XXXXXXXXXX
    
    cout << s0 << endl; // No Garbage
    cout << s0.length() << endl;
    
    
    return 0;
}

