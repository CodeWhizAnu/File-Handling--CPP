#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void addStudent() {
    ofstream outfile("students.txt", ios::app);
    string name;
    string rollNumber;
    string grade;

    cout << "Enter student name: ";
    cin >> name;
    cout << "Enter roll number: ";
    cin >> rollNumber;
    cout << "Enter student grade: ";
    cin >> grade;

    // Write to file
    outfile << name << " " << rollNumber << " " << grade << endl;
    outfile.close();
    cout << "Student record added!" << endl;
}

void displayStudents() {
    ifstream infile("students.txt");
    string name;
    string rollNumber;
    string grade;

    cout << "Student Records:" << endl;
    while (infile >> name >> rollNumber >> grade) {
        cout << "Name: " << name << ", Roll Number: " << rollNumber << ", Grade: " << grade << endl;
    }
    infile.close();
}

void searchStudents() {
    ifstream infile("students.txt");
    string name, searchName;
    string rollNumber;
    string grade;
    bool found = false;

    cout << "Enter the student name to search: ";
    cin >> searchName;

    while (infile >> name >> rollNumber >> grade) {
        if (name == searchName) {
            cout << "Student found! Name: " << name << ", Roll Number: " << rollNumber << ", Grade: " << grade << endl;
            found = true;
            break;
        }
    }
    
    if (!found) {
        cout << "Student not found." << endl;
    }
    infile.close();
}

int main() {
    int choice;
    do {
        cout << "1. Add Student" << endl;
        cout << "2. Display All Students" << endl;
        cout << "3. Search for Student" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            addStudent();
        } else if (choice == 2) {
            displayStudents();
        } else if (choice == 3) {
            searchStudents();
        }
    } while (choice != 4);

    cout << "Program exited." << endl;
    return 0;
}