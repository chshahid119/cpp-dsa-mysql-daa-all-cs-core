#include <iostream>

using namespace std;


int main(){
    
    bool equal_result {false};
    bool not_equal_result {false};
    
    int num1 {}, num2 {};
    
    cout << boolalpha; // Will display true/false instead of 1/10 for booleans
    
    cout << "Enter two integers separated by space: ";
    cin >> num1 >> num2;
    equal_result = (num1 == num2);
    not_equal_result = (num1 != num2);
    cout << "Comparison Result (Equal): " << equal_result << endl;
    cout << "Comparison Result (Not-Equal): " << not_equal_result << endl;
    return 0;
}