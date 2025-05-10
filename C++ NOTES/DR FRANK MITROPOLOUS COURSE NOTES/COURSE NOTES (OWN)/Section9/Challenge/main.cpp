// Section 9 Challenge 


#include <iostream>
#include <vector>
using namespace std;

int main(){
    cout << "Welcome, Here!" << endl;
     char option;
     vector <int> vec {};
     double mean {};
    
    do{
        
        cout << "=================================================" << endl;
        cout << endl;
        cout << "P - Print Numbers" << endl;
        cout << "A - Add a Number"<< endl;
        cout << "M - Display Mean of Numbers" << endl;
        cout << "S - Display the smallest number" << endl;
        cout << "L - Display the Largest Number" << endl;
        cout << "Q- Quit" << endl;
        cout << "Choose Your Option: ";
        cin >> option;
        
        
         if(option == 'p' || option == 'P'){
             if(!vec.empty()){ // (!true)   means when there is something it becomes true
             cout << "[";
                for (auto v: vec){
                cout << " "  << v << " ";
                }
                cout << "]" << endl;
             }
             else {
                  cout << "[] - the list is empty" << endl;
             }
         }
        if(option == 'A' || option == 'a'){
    int input_number;
    cout <<"Enter Your Number to add in List: ";
    cin >> input_number;

    if(cin.fail()) {
        cin.clear(); // Clear error flags
        cin.ignore(10000, '\n'); // Discard invalid input
        cout << "Invalid input! Please enter an integer number." << endl;
    } else {
        vec.push_back(input_number);
        cout << input_number << " Added Successfully" << endl;
    }
}
        
        if(option == 'M' || option == 'm'){
            if(!vec.empty()){
                int sum_of_list_values {0};
                for(auto v: vec){
                    sum_of_list_values += v;
                }
                cout << "The Sum of All List Values is: " << sum_of_list_values << endl;
                mean = static_cast<double>(sum_of_list_values)/vec.size();
                cout << "Mean or Average: " << mean << endl;
            }
            else {
                cout << "Unable to calculate the mean - no data" << endl;
            }
        }
        
        if(option == 'S' || option == 's'){
            if(!vec.empty()){
                int smallest {vec.at(0)};  // Add Intial Value of Vector in variable
                for(auto v: vec){
                    if(v < smallest){
                        smallest = v;
                    }
                }
                
                cout << "Smallest Integer in List: " << smallest << endl;
            }
            else{
                cout << "Unable to show smallest - no data in list" << endl;
            }
        }
        
        if(option == 'L' || option == 'l'){
            if(!vec.empty()){
                int largest {vec.at(0)};  // Add Intial Value of Vector in variable
                for(auto v: vec){
                    if(v > largest){
                        largest = v;
                    }
                }
                
                cout << "Largest Integer in List: " << largest << endl;
            }
            else{
                cout << "Unable to show largest - no data in list" << endl;
            }
        }
           

    if((option != 'p' && option != 'P') && (option != 'a' && option != 'A') && (option != 'm' && option != 'M')
 && (option != 's' && option != 'S') && (option != 'l' && option != 'L') && (option != 'Q' && option != 'q')){
        cout << "\nUnkown Selection, Please Try Again" << endl;
    }
        
    
    
        
    }while(option != 'Q' && option != 'q');
    
   
    
    
    cout << endl;
    return 0;
}