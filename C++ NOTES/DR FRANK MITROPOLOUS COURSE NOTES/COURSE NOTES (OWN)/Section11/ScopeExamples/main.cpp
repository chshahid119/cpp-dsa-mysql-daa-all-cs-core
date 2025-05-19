#include <iostream>

using namespace std;

void local_example(int x){
    int num {1000}; // local to local_example
    cout << "\nlocal example is: " << num << " in local_example - start" << endl;
    num=x;
    cout << "Local num is: " << num << " in local example - end" << endl;
}

int main(){
    
    int num {100}; // local to main
    int num1 {500}; // local to main
    
    cout << "Local num is: " << num << " in main" << endl;
    
    {  // Creates a new level of Scope
        int num {200};  // local to this inner block
        cout << "Local num is: " << num << " in inner block in main" << endl;
        cout << "Inner block in main can see out - num1 is: " << num1 << endl;
    }
    
    cout << "Local num is: " << num << " in main" << endl;
    
    local_example(10);
    return 0;
}