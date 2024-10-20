#include <iostream>
using namespace std;

class pntr_obj {
    private:
    int roll_no;
    string name;

    public:
    void set_data(int r, string n) {
        roll_no = r;
        name = n;
    }

    void print() {
        cout<<"Object with roll_no: "<<this->roll_no;
        cout<<" and name: "<<this->name<< " invoked this function."<<endl;
        cout<<"Address of invoking object: "<<this<<endl;
    }
};

int main() {
    pntr_obj obj1, obj2, obj3;
    obj1.set_data(101, "Alice");
    obj2.set_data(102, "Bob");
    obj3.set_data(103, "Charlie");
    obj1.print();
    obj2.print();
    obj3.print();
}
