#include <iostream>
using namespace std;

class Number {
protected:
    int num;

public:
    virtual void getData() = 0;
    virtual void showData() = 0;
    virtual void showResult() = 0;
};

class Square : public Number {
public:
    void getData(){
        cout << "Enter a number to find its square: ";
        cin >> num;
    }

    void showData(){
        cout << "Number: " << num << endl;
    }

    void showResult(){
        cout << "Square of " << num << " is: " << num * num << endl;
    }
};

class Cube : public Number {
public:
    void getData(){
        cout << "Enter a number to find its cube: ";
        cin >> num;
    }

    void showData(){
        cout << "Number: " << num << endl;
    }

    void showResult(){
        cout << "Cube of " << num << " is: " << num * num * num << endl;
    }
};

int main() {
    Number *ptr;
    Square sq;
    ptr = &sq;
    ptr->getData();
    ptr->showData();
    ptr->showResult();
    cout<<endl;
    Cube cb;
    ptr = &cb;
    ptr->getData();
    ptr->showData();
    ptr->showResult();
}
