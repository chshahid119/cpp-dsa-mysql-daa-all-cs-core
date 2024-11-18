#include <iostream>  // For std::cout
#include <string>    // For std::string

class Player {
private:
    std::string name;
    int health;
    int xp;

public:
    // Getter
    std::string get_name() const {  // Marked as const
        return name;
    }

    // Setter
    void set_name(std::string name_val) {
        name = name_val;
    }

    // Overloaded Constructors
    Player();                                      // Default constructor
    Player(std::string name_val);                  // Constructor with name
    Player(std::string name_val, int health_val, int xp_val);  // Constructor with all values
};

// Default constructor
Player::Player() : Player{"None", 0, 0} {}

// Constructor with name
Player::Player(std::string name_val) : Player{name_val, 0, 0} {}

// Constructor with all values
Player::Player(std::string name_val, int health_val, int xp_val) 
    : name{name_val}, health{health_val}, xp{xp_val} {}

// Function to display player name
void display_player_name(const Player& p) {
    std::cout << p.get_name() << std::endl;
}

int main() {
    const Player villain{"Villain", 100, 55};
    Player hero{"Hero", 100, 15};              // Non-const Player

    display_player_name(villain);
    display_player_name(hero);

    return 0;
}

