#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    string fileName;
    cout << "Enter file name (for example students.txt): ";
    cin >> fileName;

    ifstream inFile(fileName.c_str());
    if (!inFile.is_open()) {
        cout << "Error: could not open " << fileName << "." << endl;
        cout << "Run program 04 first and copy students.txt next to this program." << endl;
        return 1;
    }

    string name;
    int marks;
    int count = 0;
    double total = 0;
    int highest = 0;
    string topper = "";

    cout << endl << left << setw(12) << "Name" << "Marks" << endl;
    cout << "-----------------" << endl;

    
    while (inFile >> name >> marks) {
        cout << left << setw(12) << name << marks << endl;

        count++;
        total = total + marks;
        if (count == 1 || marks > highest) {
            highest = marks;
            topper = name;
        }
    }

    
    if (!inFile.eof()) {
        cout << "Warning: stopped at a line that is not in the form: name marks" << endl;
    }

    inFile.close();

    if (count == 0) {
        cout << "No students found in the file." << endl;
        return 1;
    }

    cout << endl;
    cout << "Students : " << count << endl;
    cout << "Total    : " << total << endl;
    cout << fixed << setprecision(2);
    cout << "Average  : " << total / count << endl;
    cout << "Topper   : " << topper << " (" << highest << ")" << endl;

    return 0;
}