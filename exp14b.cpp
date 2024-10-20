#include<iostream>
using namespace std;

void calculate(int &a, int &b, int &sum, int &prod, int &diff, float &div) {
    sum = a + b;
    prod = a * b;
    diff = a - b;
    div = (b != 0) ? (float)a / b : 0;
}

int main() {
    int num1, num2, sumResult, prodResult, diffResult;
    float divResult;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    calculate(num1, num2, sumResult, prodResult, diffResult, divResult);
    cout << "Sum: " << sumResult << endl;
    cout << "Product: " << prodResult << endl;
    cout << "Difference: " << diffResult << endl;
    cout << "Division: " << divResult << endl;
}
