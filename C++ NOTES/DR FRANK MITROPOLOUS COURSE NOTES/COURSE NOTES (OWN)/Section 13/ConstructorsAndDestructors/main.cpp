// Section 13 
// Constructors & Destructors

#include <iostream>
#include <string>

using namespace std;

class Player{
    
private:
    std::string name;
    int health;
    int xp;
public:
    void set_name(std::string name_val){
        name = name_val;
    }
    
    // Overloaded Constructors
    Player() {
        cout << "No Args constructor Called" << endl;
    }
    
    Player(std::string name){
        cout << "String Arg Constructor Called" << endl;
    }
    
    Player(std::string name, int health, int xp){
        cout << "Three Args Constructor Called" << endl;
    }
    
    ~Player(){
        cout << "Destructor Called for " << name << endl;
    }
        
}


int main(){
    
    {
        Player slayer;
        slayer.set_name("Slayer");
    }
    
    {
        Player frank;
        frank.set_name("Frank");
        Player hero("Hero");
        hero.set_name("Hero");
        Player villain("Villain", 100, 12);
        villain.set_name("Villain");
    }
    
    
    Player *enemy = new Player;
    enemy->set_name("Enemy");
    
    return 0;
}