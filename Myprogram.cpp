#include <iostream>
#include <string>

using namespace std;

namespace NStudent {
class Student {
public:
    int rollno;
    string name;
    int marks;

    void initStudent() {
        rollno = 0;
        name = "";
        marks = 0;
    }

    void printStudentOnConsole() {
        cout << "Roll Number: "<< rollno << endl;
        cout << "Name of: " << name << endl;
        cout << "total Marks : " << marks << endl;
    }

    void acceptStudentFromConsole() {
        cout << "Enter Roll No: ";
        cin >> rollno;
        cout << "Enter Name: ";
        cin.ignore(); 
        getline(cin, name);
        cout << "Enter Marks: ";
        cin >> marks;
    }
};
}

int main() 
{
    NStudent::Student student;
    student.acceptStudentFromConsole();
    student.printStudentOnConsole();

    return 0;
}