#include <iostream>

using namespace std;


struct Date {
    int day;
    int month;
    int year;

    void initDate() {
        day = 1;
        month = 1;
        year = 1900;
    }

    void printDateOnConsole() {
        cout << day << "/" << month << "/" << year << endl;
    }

    void acceptDateFromConsole() {
        cout << "Enter day: ";
        cin >> day;
        cout << "Enter month: ";
        cin >> month;
        cout << "Enter year: ";
        cin >> year;
    }

    bool isLeapYear() {
        return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
    }
};


class DateClass {
public:
    int day;
    int month;
    int year;

    void initDate() {
        day = 1;
        month = 1;
        year = 1900;
    }

    void printDateOnConsole() {
        cout << day << "/" << month << "/" << year << endl;
    }

    void acceptDateFromConsole() {
        cout << "Enter day: ";
        cin >> day;
        cout << "Enter month: ";
        cin >> month;
        cout << "Enter year: ";
        cin >> year;
    }

    bool isLeapYear() {
        return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
    }
};

int main() {
    int choice;
    Date myDate;
    DateClass myDateClass;

    do {
        cout << "\nMenu:\n";
        cout << "1. Using Structure\n";
        cout << "2. Using Class\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                myDate.initDate();
                myDate.printDateOnConsole();
                myDate.acceptDateFromConsole();
                myDate.printDateOnConsole();
                cout << "Is leap year: " << (myDate.isLeapYear() ? "Yes" : "No") << endl;
                break;
            case 2:
                myDateClass.initDate();
                myDateClass.printDateOnConsole();
                myDateClass.acceptDateFromConsole();
                myDateClass.printDateOnConsole();
                cout << "Is leap year: " << (myDateClass.isLeapYear() ? "Yes" : "No") << endl;
                break;
            case 3:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 3);

    return 0;
}