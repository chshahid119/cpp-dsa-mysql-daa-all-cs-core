#include <iostream>

using namespace std;


// This program will calculate the area of a room in square feet

int main(){
    
    int room_width {0};
    cout << "Enter the Width of the room: ";
    cin >> room_width;
    
    int room_length {0};
    cout << "Enter the Length of the room: ";
    cin >> room_length;
    
    cout << "The length & width of room is (L-W): (" << room_length << "-" << room_width << ")" << endl;
    cout << "The Area of the room is: " << room_width * room_length << "Square feet" << endl;
    
    return 0;
}