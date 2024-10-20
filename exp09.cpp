#include <iostream>
#include <cstring>
using namespace std;

class String {
private:
    char* str;
public:
    String(char* s) {
        str = new char[strlen(s) + 1];
        strcpy(str, s);
    }

    String(String& s) {
        str = new char[strlen(s.str) + 1];
        strcpy(str, s.str);
    }

    String& operator =(String& s) {
        if (this == &s) {
            return *this;
        }
        delete[] str;
        str = new char[strlen(s.str) + 1];
        strcpy(str, s.str);
        return *this;
    }

    bool operator ==(String& s){
        return strcmp(str, s.str) == 0;
    }

    String operator +(String& s){
        char* temp = new char[strlen(str) + strlen(s.str) + 1];
        strcpy(temp, str);
        strcat(temp, s.str);
        String result(temp);
        delete[] temp;
        return result;
    }

    ~String() {
        delete[] str;
    }

    void display(){
        cout << str << endl;
    }
};

int main() {
    String str1("Hello, ");
    String str2("World!");
    cout<<"Copying str1 to str3"<<endl;
    String str3 = str1;
    str3.display();
    cout<<"Comparing strings str1, str2 for equality"<<endl;
    if (str1 == str2) {
        cout << "Strings are equal" << endl;
    } else {
        cout << "Strings are not equal" << endl;
    }
    String str4 = str1 + str2;
    cout<<"Concatenating str1 and str2"<<endl;
    str4.display();
}
