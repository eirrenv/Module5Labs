#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

// Movie vector size
const int SIZE = 4;

// Movie class
class Movie {
    private: // private parts of class containing protected writer name, year released, movie title
        string writer;
        int year;
        string title;
    public: // public getters and setters for privates, cleaner formatting
        void setWriter(string w) { writer = w; }
        string getWriter() { return writer; }
        void setYear(int y) { year = y; }
        int getYear() { return year; }
        void setTitle(string t) { title = t; }
        string getTitle() { return title; }

        // fixed formatting, right aligned values
        void Print() {
            cout << setw(3) << "Red value: " << right << setw(3) << red << " Green value: " << right << setw(3) << green << " Blue value " << right << setw(3) << blue << endl;
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
        // creating temporary Color object, storing values from 0 to 256 in red, green, blue private ints
        Color tmpColor;
        tmpColor.setRed(rand() % 255 + 0);
        tmpColor.setGreen(rand() % 255 + 0);
        tmpColor.setBlue(rand() % 255 + 0);
        colorVector.push_back(tmpColor);
    }

    // print code from Sample OOP
    int j = 1;
    for (auto val : colorVector) {
        cout << "Color #" << j << ": ";
        val.Print();
        ++j;
    }
    cout << endl;
    return 0;
}