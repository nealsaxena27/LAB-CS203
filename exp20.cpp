#include <iostream>
using namespace std;

class MyClass {
    private:
    int a, b, c;
    public:
    MyClass(int x, int y, int z) : a(x), b(y), c(z) {}
    void showData() const {
        cout << "a = " << a << ", b = " << b << ", c = " << c << endl;
    }
    
    bool operator!() {
        return !(a || b || c);
    }
};

int main() {
    MyClass obj1(0, 0, 0);
    MyClass obj2(1, 2, 3);
    cout << "Object 1 values: ";
    obj1.showData();
    if (!obj1) {
        cout << "All data members are zero!" << endl;
    } else {
        cout << "Not all data members are zero." << endl;
    }
    cout << "\nObject 2 values: ";
    obj2.showData();
    if (!obj2) {
        cout << "All data members are zero!" << endl;
    } else {
        cout << "Not all data members are zero." << endl;
    }
}
