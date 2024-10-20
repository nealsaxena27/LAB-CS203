#include <iostream>
using namespace std;

// Template function to sort an array
template <typename T>
void sortArray(T arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                T temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

template <typename T>
void printArray(T arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int n = 5;
    int intArr[n] = {12, 4, 15, 2, 8};
    cout << "Integer array before sorting: ";
    for (int i = 0; i < n; i++) cout << intArr[i] << " ";
    cout << endl;
    sortArray(intArr, n);
    cout << "Integer array after sorting: ";
    for (int i = 0; i < n; i++) cout << intArr[i] << " ";
    cout << endl;
    long long llArr[n] = {10000000007LL, 5000000001LL, 3000000000LL, 8000000009LL, 9000000002LL};
    cout << "\nLong long array before sorting: ";
    for (int i = 0; i < n; i++) cout << llArr[i] << " ";
    cout << endl;
    sortArray(llArr, n);
    cout << "Long long array after sorting: ";
    for (int i = 0; i < n; i++) cout << llArr[i] << " ";
    cout << endl;
    float floatArr[n] = {5.5f, 3.3f, 4.4f, 2.2f, 1.1f};
    cout << "\nFloat array before sorting: ";
    for (int i = 0; i < n; i++) cout << floatArr[i] << " ";
    cout << endl;
    sortArray(floatArr, n);
    cout << "Float array after sorting: ";
    for (int i = 0; i < n; i++) cout << floatArr[i] << " ";
    cout << endl;
    double doubleArr[n] = {3.14159, 2.71828, 1.41421, 0.57721, 2.23606};
    cout << "\nDouble array before sorting: ";
    for (int i = 0; i < n; i++) cout << doubleArr[i] << " ";
    cout << endl;
    sortArray(doubleArr, n);
    cout << "Double array after sorting: ";
    for (int i = 0; i < n; i++) cout << doubleArr[i] << " ";
    cout << endl;
    int a = 50, b = 20, c = 70, d = 10, e = 40;
    int* ptrArr[n] = {&a, &b, &c, &d, &e};
    cout << "\nPointer to integer array before sorting: ";
    printArray(ptrArr, n);
    sortArray(ptrArr, n);
    cout << "Pointer to integer array after sorting: ";
    printArray(ptrArr, n);
}
