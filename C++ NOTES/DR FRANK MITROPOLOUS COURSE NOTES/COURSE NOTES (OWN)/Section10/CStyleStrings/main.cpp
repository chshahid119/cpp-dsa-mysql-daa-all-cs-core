#include <iostream>
#include <cstring> // for c-style string functions
#include <cctype>  // for character-based function
#include <limits>  // for numeric_limits


using namespace std;

int main(){
    
    char first_name[20] {};
    char last_name[20] {};
    char full_name[50] {};
    char temp[50] {};
    
//    cout << first_name;  will likely display garbage value 
    cout << "Enter you first name: ";
    cin >> first_name;
    
    cout << "Enter you last name: ";
    cin >> last_name;
    
    cout << "Hello " << first_name << " your first name has " << strlen(first_name) << " Characters" << endl;
    cout << "Hello " <<  last_name << " your last name has " << strlen(last_name) << " Characters" << endl;


    strcpy(full_name, first_name); // copy first name to full name
    strcat(full_name, " "); // concatenate space to full_name
    strcat(full_name, last_name); // concatenate last_name to full name
    
    cout << "Your full name is " << full_name << endl;
    
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // flush out '\n'

    cout << "Enter you full Name: ";
    cin.getline(full_name, 50);
    cout << "Your full name is: " << full_name << endl;
    
    
    
    
    
    
    
//    char my_name[] {'s','h','a','h','i','d'};
//    my_name[6] = 'a';
    
//    cout << "Hello\a";      May produce a beep
    
    cout << endl;
    return 0;
}


//#include <iostream>
//using namespace std;
//
//int main() {
//    cout << "Hello\a";     // May produce a beep
//    cout << "World\n";     // Newline
//    cout << "Test\b\b!!";  // Backspace 2 times, overwrite last 2 chars
//    return 0;
//}
