#include <iostream>
#include <string>

using namespace std;

class Student {
public:
    int rollNo;
    string name;
    int marks;

    void initStudent() {
        rollNo = 0;
        name = "";
        marks = 0;
    }

    void printStudentOnConsole() {
        cout << "Roll No: " << rollNo << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
    }

    void acceptStudentFromConsole() {
        cout << "Enter Roll No: ";
        cin >> rollNo;
        cout << "Enter Name: ";
        cin.ignore(); 
        getline(cin, name);
        cout << "Enter Marks: ";
        cin >> marks;
    }
};

int main() {
    Student student;
    int choice;

    do {
        cout << "\nMenu:\n";
        cout << "1. Initialize Student\n";
        cout << "2. Print Student\n";
        cout << "3. Accept Student\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                student.initStudent();
                cout << "Student initialized.\n";
                break;
            case 2:
                student.printStudentOnConsole();
                break;
            case 3:
                student.acceptStudentFromConsole();
                cout << "Student accepted.\n";
                break;
            case 4:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 4);

    return 0;
}