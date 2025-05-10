#include <iostream>
using namespace std;

int main() {
    int width = 5;  // Width of the rectangle
    int height = 5;  // Height of the rectangle

    // Loop through each row
    for (int i = 0; i < height; ++i) {
        // Loop through each column
        for (int j = 0; j < width; ++j) {
            // Print '*' for the borders and empty spaces for the inner part
            if (i == 0 || i == height - 1 || j == 0 || j == width - 1) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;  // Move to the next row
    }

    return 0;
}
