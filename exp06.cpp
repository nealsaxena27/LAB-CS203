# include <iostream>
using namespace std;

class student;

class avg_class{
    public:
        double mark_avg(student s1);
};

class student{
    string name;
    int marks1, marks2, marks3;

    public:

    void get_data(){
        string nm; cout<<"Enter student name: ";
        cin>>nm; name = nm;
        int mrk;
        cout<<"Enter marks in subject 1: ";
        cin>>mrk; marks1 = mrk;
        cout<<"Enter marks in subject 2: ";
        cin>>mrk; marks2 = mrk;
        cout<<"Enter marks in subject 3: ";
        cin>>mrk; marks3 = mrk;
    }

    friend class avg_class;

    void display(){
        avg_class a1;
        double avg = a1.mark_avg(*this);
        cout<<"Student Name: "<<name<<endl;
        cout<<"Average Marks: "<<avg<<endl;
    }
};

double avg_class::mark_avg(student s1){
    double avg = (s1.marks1 + s1.marks2 + s1.marks3)/3.0;
    return avg;
}

int main(){
    student s1;
    s1.get_data();
    s1.display();
}