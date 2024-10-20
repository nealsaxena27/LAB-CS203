# include <iostream>
using namespace std;

class friendfunc2;

class friendfunc1{
    int a, b;

    public:
        void get_data(){
            cout<<"Enter a: "; cin>>a;
            cout<<"Enter b: "; cin>>b;
        }

        friend void average(friendfunc1 &o1, friendfunc2 &o2);
};

class friendfunc2{
    int c, d, e;

    public:
        void get_data(){
            cout<<"Enter c: "; cin>>c;
            cout<<"Enter d: "; cin>>d;
            cout<<"Enter e: "; cin>>e;
        }

        friend void average(friendfunc1 &o1, friendfunc2 &o2);
};

void average(friendfunc1 &o1, friendfunc2 &o2){
    double avg = (o1.a + o1.b + o2.c + o2.d + o2.e)/5.0;
    cout<<"Average of the five numbers = "<<avg<<endl;
}

int main(){
    friendfunc1 f1; friendfunc2 f2;
    f1.get_data(); f2.get_data();
    average(f1, f2);
}
