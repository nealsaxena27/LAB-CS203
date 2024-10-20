# include <iostream>
using namespace std;

class Employee{
    int Empnumber;
    string Empname;
    
    public:
    void getdata(){
        int no; cout<<"Enter Empnumber: "; cin>>no;
        string name; cout<<"Enter Empname: "; cin>>name;
        Empnumber = no; Empname = name;
    };

    void display(){
        cout<<"Empnumber: "<<Empnumber<<endl;
        cout<<"Empname: "<<Empname<<endl;
    }
};

int main(){
    int n; cout<<"Number of Employees: "<<endl; cin>>n;
    Employee arr[n];
    for(int i = 0; i < n; i++){
        cout<<"Enter details of Employee "<<i+1<<endl;
        arr[i].getdata();
    }
    for(int i = 0; i < n; i++){
        arr[i].display();
    }
}