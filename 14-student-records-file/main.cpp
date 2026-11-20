#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
using namespace std;

const string FILE_NAME = "records.txt";


bool addStudent() {
    string name;
    int marks;

    cout << "Name (one word): ";
    cin >> name;
    cout << "Marks (0 to 100): ";
    cin >> marks;

    if (cin.fail()) {
        cout << "Invalid input. Marks must be a whole number." << endl;
        return false;
    }
    if (marks < 0 || marks > 100) {
        cout << "Marks must be from 0 to 100. Student not saved." << endl;
        return true;
    }

    ofstream outFile(FILE_NAME.c_str(), ios::app);
    if (!outFile.is_open()) {
        cout << "Error: could not open " << FILE_NAME << " for writing." << endl;
        return true;
    }
    outFile << name << " " << marks << endl;
    outFile.close();

    cout << name << " saved." << endl;
    return true;
}


void viewAll() {
    ifstream inFile(FILE_NAME.c_str());
    if (!inFile.is_open()) {
        cout << "No records yet. Add a student first." << endl;
        return;
    }

    string name;
    int marks;
    int count = 0;

    cout << endl << left << setw(12) << "Name" << "Marks" << endl;
    cout << "-----------------" << endl;
    while (inFile >> name >> marks) {
        cout << left << setw(12) << name << marks << endl;
        count++;
    }
    inFile.close();

    cout << "Total records: " << count << endl;
}


void searchStudent() {
    string target;
    cout << "Name to search: ";
    cin >> target;

    ifstream inFile(FILE_NAME.c_str());
    if (!inFile.is_open()) {
        cout << "No records yet. Add a student first." << endl;
        return;
    }

    string name;
    int marks;
    bool found = false;

    while (inFile >> name >> marks) {
        if (name == target) {
            cout << name << " has " << marks << " marks." << endl;
            found = true;
        }
    }
    inFile.close();

    if (!found) {
        cout << target << " was not found." << endl;
    }
}

int main() {
    int choice = 0;

    while (choice != 4) {
        cout << endl;
        cout << "1. Add student" << endl;
        cout << "2. View all students" << endl;
        cout << "3. Search by name" << endl;
        cout << "4. Exit" << endl;
        cout << "Choose (1 to 4): ";
        cin >> choice;

        if (cin.fail()) {
            cout << "Invalid input. Enter a number from 1 to 4." << endl;
            return 1;
        }

        switch (choice) {
            case 1:
                if (!addStudent()) {
                    return 1;
                }
                break;
            case 2:
                viewAll();
                break;
            case 3:
                searchStudent();
                break;
            case 4:
                cout << "Goodbye." << endl;
                break;
            default:
                cout << "Invalid choice. Enter a number from 1 to 4." << endl;
        }
    }

    return 0;
}