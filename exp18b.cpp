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

class Salary {
protected:
    float basicSalary, bonus;

public:
    Salary(float basic, float bon) : basicSalary(basic), bonus(bon) {
        cout << "Salary Constructor Called" << endl;
    }

    float getTotalSalary() {
        return basicSalary + bonus;
    }
};

class Faculty : public Employee, public Salary {
public:
    Faculty(string facName, int facID, float basic, float bon)
        : Employee(facName, facID), Salary(basic, bon) {
        cout << "Faculty Constructor Called" << endl;
    }

    void calculateSalary() {
        displayEmployee();
        float salary = getTotalSalary();
        cout << "Faculty Salary: " << salary << endl;
    }
};

int main() {
    Faculty facultyMember("Alice", 103, 4500, 700);
    facultyMember.calculateSalary();
}
