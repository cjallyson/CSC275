#include <iostream>
#include <string>
using namespace std;

// Define the Date structure
struct Date {
    int month;
    int day;
    int year;
};

// Define the Department structure
struct Department {
    string name;  // Department name
    int id;       // Department ID
};

// Define the Employee structure
struct Employee {
    string name;         // First name
    string lastname;     // Last name
    Date dob;            // Date of Birth (Date type)
    Date startDate;      // Start date (Date type)
    Department dept;     // Department information (Department type)
};

int main() {
    // Creating an Employee object e1 and initializing it with values
    Employee e1 = {
        "John",               // First name
        "Doe",                // Last name
        {10, 15, 1990},       // Date of Birth: 15th October 1990
        {6, 1, 2015},         // Start date: 1st June 2015
        {"IT", 101}           // Department: IT, ID: 101
    };

    // Display Employee e1 details
    cout << "Employee 1 Details:" << endl;
    cout << "Name: " << e1.name << " " << e1.lastname << endl;
    cout << "Date of Birth: " << e1.dob.month << "/" << e1.dob.day << "/" << e1.dob.year << endl;
    cout << "Start Date: " << e1.startDate.month << "/" << e1.startDate.day << "/" << e1.startDate.year << endl;
    cout << "Department: " << e1.dept.name << ", ID: " << e1.dept.id << endl;

    // Creating an Employee object e2 and filling its values from user input
    Employee e2;

    // Input employee details for e2
    cout << "\nEnter details for Employee 2:" << endl;
    cout << "Enter first name: ";
    cin >> e2.name;
    cout << "Enter last name: ";
    cin >> e2.lastname;
    cout << "Enter date of birth (month day year): ";
    cin >> e2.dob.month >> e2.dob.day >> e2.dob.year;
    cout << "Enter start date (month day year): ";
    cin >> e2.startDate.month >> e2.startDate.day >> e2.startDate.year;
    cout << "Enter department name: ";
    cin >> e2.dept.name;
    cout << "Enter department ID: ";
    cin >> e2.dept.id;

    // Display Employee e2 details
    cout << "\nEmployee 2 Details:" << endl;
    cout << "Name: " << e2.name << " " << e2.lastname << endl;
    cout << "Date of Birth: " << e2.dob.month << "/" << e2.dob.day << "/" << e2.dob.year << endl;
    cout << "Start Date: " << e2.startDate.month << "/" << e2.startDate.day << "/" << e2.startDate.year << endl;
    cout << "Department: " << e2.dept.name << ", ID: " << e2.dept.id << endl;

    return 0;
}
