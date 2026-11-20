#include <iostream>
using namespace std;

int main() {
    const int SIZE = 5;
    int marks[SIZE];

    for (int i = 0; i < SIZE; i++) {
        cout << "Enter marks of student " << (i + 1) << " (0 to 100): ";
        cin >> marks[i];

        
        if (cin.fail() || marks[i] < 0 || marks[i] > 100) {
            cout << "Invalid input. Enter a whole number from 0 to 100." << endl;
            return 1;
        }
    }

   
    int* ptr = marks;

    cout << endl << "Marks using *(ptr + i):" << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << "Student " << (i + 1) << " = " << *(ptr + i) << endl;
    }

    
    int total = 0;
    int highest = *ptr;                 
    int* walker = marks;
    for (int i = 0; i < SIZE; i++) {
        total = total + *walker;
        if (*walker > highest) {
            highest = *walker;
        }
        walker++;                       
    }

    cout << endl;
    cout << "Total   : " << total << endl;
    cout << "Highest : " << highest << endl;

    return 0;
}