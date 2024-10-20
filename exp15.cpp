# include <iostream>
using namespace std;

class Employee{
    static int total_salary;
    int id;
    int salary;

    public:
    Employee(){
        id = -1; salary = 0;
    }

    void get_data(){
        cout<<"Enter id: "; cin>>id;
        cout<<"Enter salary: "; cin>>salary;
        total_salary += salary;
    }

    static int get_total_salary(){
        return total_salary;
    }
};

int Employee::total_salary;

int main(){
    Employee emp[10];
    for(int i = 0; i < 10; i++){
        emp[i].get_data();
    }
    cout<<"Total Salary = "<<Employee::get_total_salary()<<endl;
}