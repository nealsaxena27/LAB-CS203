# include <iostream>
using namespace std;

int absolute(int x){
    if(x >= 0) return x;
    else return -x;
}

float absolute(float x){
    if(x >= 0.0) return x;
    else return -x;
}

int main(){
    int x, y;
    cout<<"Enter integer x: "; cin>>x;
    cout<<"Absolute value of x: "<<absolute(x)<<endl;
    cout<<"Enter integer y: "; cin>>y;
    cout<<"Absolute value of y: "<<absolute(y)<<endl;
    float a, b;
    cout<<"Enter integer a: "; cin>>a;
    cout<<"Absolute value of a: "<<absolute(a)<<endl;
    cout<<"Enter integer b: "; cin>>b;
    cout<<"Absolute value of b: "<<absolute(b)<<endl;
}