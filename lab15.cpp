#include <iostream>
#include <iomanip>
#include <vector>
#include <fstream>
#include <string>
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

        // print title, year, writer in proper formatting
        void Print() {
            cout << "Movie: " << title << endl
            << "\tYear released: " << year << endl 
            << "\tScreenwriter: " << writer << endl
            << endl;
        }
};

int main() {

    // vector to store Movie objects
    vector<Movie> movieVector;

    // edited from Sample OOP code
    ifstream fin ("input.txt");
    string w;  // holds temporary writer
    int y;     // holds temporary year
    string t;  // holds temporary title
    int i = 0; // temporary index

    if (fin.good()) {
        while (getline(fin, t)) {
            fin >> y; // get year
            fin.ignore();
            getline(fin, w); // get writer, changed to fit data from lab instructions
            Movie tmp;
            tmp.setWriter(w);
            tmp.setYear(y);
            tmp.setTitle(t);
            movieVector.push_back(tmp);
            ++i;
        }
        fin.close();
    }
    else
        cout << "Input file not found.\n";

    // from Lab 14
    for (auto val : movieVector) {
        val.Print();
    }
   
    return 0;
}