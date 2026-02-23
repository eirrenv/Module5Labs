#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

// Color vector size
const int SIZE = 5;

// Color class
class Color {
    private: // private parts of class containing protected red, green, blue values
        int red;
        int green;
        int blue;
    public: // public getters and setters for red, green, blue privates
        void setRed(int r) {
            red = r;
        }
        int getRed() {
            return red;
        }
        void setGreen(int g) {
            green = g;
        }
        int getGreen() {
            return green;
        }
        void setBlue(int b) {
            blue = b;
        }
        int getBlue() {
            return blue;
        }
        // forgot to make the print in previous commit
        void Print() {
            cout << setw(3) << "Red value: " << red << " Green value: " << green << " Blue value " << blue << endl;
        }
};

int main() {

    // borrowed from Lab 4A
    srand(time(0));
    int n;
    n = rand() % 26 + 25;
    // vector to store Color objects
    vector<Color> colorVector;
    for (int i = 0; i < SIZE; ++i) {
        Color tmpColor;

    }

    // borrowing from Lab 4A for rand
    /*
        int n; // initialize new random int n
   
    // cout << n; test cout

    // create and push color structs into vector
    for (int i = 0; i < n; ++i) {
        Color tmpColor;
        // create random values from 0 to 256 for temp struct
        tmpColor.red = rand() % 255 + 0;
        */

    return 0;
}