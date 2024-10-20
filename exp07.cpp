#include <iostream>
using namespace std;

inline void add(int a, int b) {
    cout<<a + b<< endl;
}

inline void subtract(int a, int b) {
    cout<<a - b<<endl;
}

inline void multiply(int a, int b) {
    cout<<a * b<<endl;
}

inline void divide(double a, double b) {
    if(b != 0) {
        cout<<(double)a / b<<endl;
    } else {
        cout<<"Error: Division by zero!"<<endl;
    }
}

inline void mod(int a, int b) {
    cout<<a % b<<endl;
}

int main() {
    int num1, num2;
    cout<<"Enter two numbers: ";
    cin>>num1>>num2;
    cout<<"Addition: "; add(num1, num2);
    cout<<"Subtraction: "; subtract(num1, num2);
    cout<<"Multiplication: "; multiply(num1, num2);
    cout<<"Division: "; divide(num1, num2);
    cout<<"Modulus: "; mod(num1, num2);
}