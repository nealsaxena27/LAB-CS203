# include <iostream>
using namespace std;

class person{
    protected:
    int id; string name;

    public:
    void get_per(){
        cout<<"Enter id: "; cin>>id;
        cout<<"Enter name: "; cin>>name;
    }
};

class account : public virtual person{
    protected:
    int salary;

    public:
    void get_ac(){
        cout<<"Enter salary: "; cin>>salary;
    }
};

class admin : public virtual person{
    protected:
    string dept; string job;

    public:
    void get_adm(){
        cout<<"Enter department: "; cin>>dept;
        cout<<"Enter job: "; cin>>job;
    }
};

class master: public virtual account, public virtual admin{
    private:
    bool bonus;

    public:

    master(){
        id = 0; name = "NA"; salary = 0; dept = "NA"; job = "NA";
    }

    void check_bonus(){
        if(salary <= 5000000 && dept == "Engineering") bonus = true;
        else bonus = false;
    }
    
    void display(){
        cout<<"ID: "<<id<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Salary: "<<salary<<endl;
        cout<<"Department: "<<dept<<endl;
        cout<<"Job: "<<job<<endl;
        cout<<"Will get bonus this year? "<<(bonus ? "YES" : "NO")<<endl;
    }
};

int main(){
    master m1;
    m1.get_per();
    m1.get_ac();
    m1.get_adm();
    m1.check_bonus();
    m1.display();
}