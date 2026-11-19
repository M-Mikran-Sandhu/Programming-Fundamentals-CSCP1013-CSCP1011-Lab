#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    int count;
    cout << "How many students (1 to 10)? ";
    cin >> count;

     
    if (cin.fail() || count < 1 || count > 10) {
        cout << "Invalid input. Enter a whole number from 1 to 10." << endl;
        return 1;
    }

    ofstream outFile("students.txt");
    if (!outFile.is_open()) {
        cout << "Error: could not open students.txt for writing." << endl;
        return 1;
    }

    for (int i = 0; i < count; i++) {
        string name;
        int marks;

        cout << "Student " << (i + 1) << " name (one word): ";
        cin >> name;
        cout << "Student " << (i + 1) << " marks (0 to 100): ";
        cin >> marks;

        if (cin.fail() || marks < 0 || marks > 100) {
            cout << "Invalid marks. Enter a whole number from 0 to 100." << endl;
            outFile.close();
            return 1;
        }

        
        outFile << name << " " << marks << endl;
    }

    outFile.close();                   
    cout << endl << count << " student(s) saved in students.txt" << endl;

    return 0;
}