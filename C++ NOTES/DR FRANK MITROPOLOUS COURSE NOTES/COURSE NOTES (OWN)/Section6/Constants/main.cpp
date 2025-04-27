// Section 6
// Constants


#include <iostream>
using namespace std;


int main(){
    
    cout << "Hello, Shahid's Carpet Cleaning Services" << endl;
    cout << "\nHow many room you would like to cleaned? ";
    
    int number_of_rooms {0};
    cin >> number_of_rooms;
    
    const double price_per_room {30.0};
    const double sales_tax{0.06};
    const int estimate_expiry{30}; // days
    // use those const variables instead of hard coded values in the code but I am not doing it to save my time
    
    cout << "\nEstimate for Carpet Cleaning Service" << endl;
    cout << "Number of rooms: " << number_of_rooms << endl;
    cout << "Price Per room: $:"<< 30 << endl;
    cout << "Cost: $" << 30 * number_of_rooms << endl;
    cout << "Tax: $" << 30 * number_of_rooms * 0.06 << endl;
    cout << "===================================="<<endl;
    cout << "Total Estimate: $" << (30 * number_of_rooms) + (30 * number_of_rooms * 0.06) << endl;
    
    cout << "This estimate is valid for 30 days" << endl;
    cout << endl;
    return 0;
}


