#include<iostream>
using namespace std;

#define sum(a, b) (a + b)
#define product(a, b) (a * b)
#define difference(a, b) (a - b)
#define division(a, b) ((b != 0) ? ((float)a / b) : 0)

int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    cout << "Sum: " << sum(num1, num2) << endl;
    cout << "Product: " << product(num1, num2) << endl;
    cout << "Difference: " << difference(num1, num2) << endl;
    cout << "Division: " << division(num1, num2) << endl;
}
