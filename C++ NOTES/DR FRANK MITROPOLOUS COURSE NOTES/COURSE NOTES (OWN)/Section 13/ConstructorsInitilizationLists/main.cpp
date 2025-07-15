
#include <iostream>
#include <string>


using namespace std;

class Player{
    
private:
    string name;
    int age;
    int xp;

public:
//Constructor 
Player (string n, int a, int x) 
: name{n}, age{a}, xp{x} {
    cout << "Parameterized Constructor" << endl;
}


~Player(){
    cout << "Player Destructor Called" << endl;
}
    
};

int main(){
    
    Player obj1 {"Shahid", 19, 6};
    
    
    return 0;
}