// Section 11
// Default Arguments in Functions in C++

#include <iostream>
#include <iomanip>


using namespace std;

double calc_cost(double base_cost = 100, double tax_rate = 0.06, double shipping=3.50);

double calc_cost(double base_cost, double tax_rate, double shipping){
    return base_cost += (base_cost * tax_rate) + shipping;
}

int main(){
    double cost {0};
    cost = calc_cost(100.0, 0.08, 4.25); // Will use no defaults 100 + 8 + 4.25
    
    cout << fixed << setprecision(2);
    cout << "Cost is: " << cost << endl; // 112.25
    
    cost = calc_cost(100.0, 0.08); // Will use defaults shipping 200 + 12 + 3.50
    cout << "Cost is: " << cost << endl;
    
    cost = calc_cost(200.0); // Will use default tax and shipping 200 + 12 + 3.50
    cout << "Cost is: " << cost << endl; // 215.50
    
    cout << endl;
    return 0;
}