#include <iostream>
using namespace std;

class Employee {
protected:
    string name;
    int id;

public:
    Employee(string empName, int empID) : name(empName), id(empID) {
        cout << "Employee Constructor Called" << endl;
    }

    void displayEmployee() {
        cout << "Name: " << name << ", ID: " << id << endl;
    }
};

class Faculty : public Employee {
private:
    float basicSalary, bonus;

public:
    Faculty(string facName, int facID, float basic, float bon)
        : Employee(facName, facID), basicSalary(basic), bonus(bon) {
        cout << "Faculty Constructor Called" << endl;
    }

    void calculateSalary() {
        float salary = basicSalary + bonus;
        displayEmployee();
        cout << "Faculty Salary: " << salary << endl;
    }
};

class Staff : public Employee {
private:
    float hourlyWage;
    int hoursWorked;

public:
    Staff(string staffName, int staffID, float wage, int hours)
        : Employee(staffName, staffID), hourlyWage(wage), hoursWorked(hours) {
        cout << "Staff Constructor Called" << endl;
    }

    void calculateSalary() {
        float salary = hourlyWage * hoursWorked;
        displayEmployee();
        cout << "Staff Salary: " << salary << endl;
    }
};

int main() {
    Faculty facultyMember("Alice", 101, 5000, 800);
    facultyMember.calculateSalary();
    Staff staffMember("Bob", 202, 20, 160);
    staffMember.calculateSalary();
}
