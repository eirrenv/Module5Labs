#include <iostream>
#include <iomanip>
using namespace std;

class Color {
    private:
        int red;
        int green;
        int blue;
    public:
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

};

int main() {
    return 0;
}