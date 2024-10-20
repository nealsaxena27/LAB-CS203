# include <iostream>
using namespace std;

class complex;

class sum_calculator{
    public:
    complex sum(complex c1, complex c2);
};

class complex{
    float re, im;

    public:
    void get_data(){
        cout<<"Enter real: "; cin>>re;
        cout<<"Enter imaginary: "; cin>>im;
    }

    void display(){
        cout<<re<<" + "<<im<<"j";
    }

    friend complex sum_calculator::sum(complex, complex);
};

complex sum_calculator::sum(complex c1, complex c2){
    complex temp;
    temp.re = c1.re + c2.re;
    temp.im = c1.im + c2.im;
    return temp;
}

int main(){
    complex c1, c2;
    cout<<"Enter two complex number 1:"<<endl;
    c1.get_data();
    cout<<"Enter two complex number 2:"<<endl;
    c2.get_data();
    sum_calculator s1;
    complex c3 = s1.sum(c1, c2);
    cout<<"( "; c1.display(); cout<<" ) + ( ";
    c2.display(); cout<<" ) = ( "; c3.display(); cout<<" )"<<endl;
}