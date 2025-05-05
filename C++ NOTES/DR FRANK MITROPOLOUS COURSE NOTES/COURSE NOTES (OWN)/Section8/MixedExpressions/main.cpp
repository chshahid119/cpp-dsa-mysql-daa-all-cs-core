// Section 8
// Mixed Expressions

#include <iostream>
using namespace std;
int main(){
    
    int total {};
    int num1 {}, num2 {}, num3 {};
    const int count {3};
    double average {0.0};
    
    cout << "Enter you 3 numbers with spaces: ";
    cin >> num1;
    cin >> num2; 
    cin >> num3;
    
    total = num1+num2+num3;
    
    average = static_cast<double> (total)/count ;
//  average = (double)total/count;  Old C-Style type cast
    
    cout << "The numbers were: " << num1 << "," << num2 << "," << num3 << endl;
    cout << "Total sum of those numbers were: " << total << endl;
    cout << "Total Numbers: " << count << endl;
    cout << "The average is: " << average << endl;
    
    
    
    
    
    return 0;
}