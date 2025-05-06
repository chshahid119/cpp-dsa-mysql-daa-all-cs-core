// Section 8 Challenge

/* For this I will be using US Dollars and Cents.

Write a program that asks the user to enter the following:
An Integer representing the number of cents 

You may assume that the number of cents entered is greater than or equal to zero

The program should then display how to provide that change to the user.

In the US:
    1 Dollar is 100 cents
    1 Quarter is 25 Cents
    1 dime is 10 cents
    1 Nickel is 5 cents, and 
    1 penny is 1 cent.
    
*/

#include <iostream>
using namespace std;

int main(){
    int entered_amount {};
    int dollar_freq = 100;
    int quarter_freq = 25;
    int dime_freq = 10;
    int nickel_freq = 5;
    int penny_freq = 1;
    int remainder {};
    int total_dollars {};
    int total_quarters {};
    int total_dimes {};
    int total_nickels {};
    int total_pennies {};
    
    cout << "Enter Your amount here: ";
    cin >> entered_amount;
    
    if(entered_amount >= dollar_freq){
        remainder = entered_amount % dollar_freq;
        total_dollars = entered_amount/dollar_freq;
//        cout << "Reminder after dollar: " << remainder << endl;

    }
    
    if (total_dollars>0 && remainder > 0){
        total_quarters = remainder / quarter_freq;
        remainder = remainder % quarter_freq;
//        cout << "Reminder after quarter as well: " << remainder << endl;
    }
    
    
    if ( total_quarters > 0 && remainder > 0){
        total_dimes = remainder / dime_freq;
        remainder = remainder % dime_freq;
//        cout << "Reminder after dimes as well: " << remainder << endl;

    }
    
    if ( total_dimes > 0 && remainder > 0){
        total_nickels = remainder / nickel_freq;
        remainder = remainder % nickel_freq;
    }
    
    
    if (total_nickels > 0 && remainder > 0){
        total_pennies = remainder / penny_freq;
        remainder = remainder % penny_freq;
        cout << "At the End The remainder is: " << remainder << endl;
    }
    
    
    cout << "\n" << endl;
    cout << "Dollars: " << total_dollars << endl;
    cout << "Quarters: " << total_quarters << endl;
    cout << "Dimes: " << total_dimes << endl;
    cout << "Nickels: " << total_nickels << endl;
    cout << "Pennies: " << total_pennies << endl;
    
    return 0;
}