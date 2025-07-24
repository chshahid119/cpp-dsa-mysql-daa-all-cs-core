// Section 13 
// Implement member methods 2

#include <iostream>
#include "Account.h"

using namespace std;

int main(){
    
    Account frank_account;
    frank_account.set_name("Frank's Account");
    frank_account.set_balance(1000.0);
    
    if(frank_account.deposit(200.0))
        cout << "Deposit OK" << endl;
    else
        cout << "Deposit not Allowed!" << endl;
        
    if(frank_account.withdraw(500.0))
        cout << "Deposit OK" << endl;
    else
        cout << "Not Sufficient Funds!" << endl;
        
    if(frank_account.withdraw(1500.0))
        cout << "Deposit OK" << endl;
    else
        cout << "Not Sufficient Funds!" << endl;
    
    return 0;
}