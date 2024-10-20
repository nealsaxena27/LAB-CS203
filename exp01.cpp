# include <iostream>
using namespace std;

class user{
    string name;
    char surname;
    int totalmarks;
    char gender;
    char result;

    public:

    void set(){
        cout<<"Enter Name: ";
        cin>>name;
        cout<<"Enter Surname: ";
        cin>>surname;
        cout<<"Enter Total Marks: ";
        cin>>totalmarks;
        cout<<"Enter Gender: ";
        cin>>gender;
        cout<<"Result: ";
        cin>>result;
    }

    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Surname: "<<surname<<endl;
        cout<<"Total Marks: "<<totalmarks<<endl;
        cout<<"Gender: "<<gender<<endl;
        cout<<"Result: "<<result<<endl;
    }
};

int main(){
    user u;
    u.set();
    u.display();
}