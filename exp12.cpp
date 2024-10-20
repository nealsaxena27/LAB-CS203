# include <iostream>
# include <cmath>
using namespace std;

class c_polygon{
    public:
    virtual void area() = 0;
};

class c_rectangle : public c_polygon{
    int l, b;

    public:
    void get_dimensions(){
        cout<<"Enter Length: "; cin>>l;
        cout<<"Enter Breadth: "; cin>>b;
    }

    void area(){
        cout<<"Area of rectangle = "<<l*b<<endl;
    }
};
class c_triangle : public c_polygon{
    int a, b, c;

    public:
    void get_dimensions(){
        cout<<"Enter side1 : "; cin>>a;
        cout<<"Enter side2 : "; cin>>b;
        cout<<"Enter side3 : "; cin>>c;
    }

    void area(){
        double s = (a + b + c)/2;
        double area = sqrtl(s*(s - a)*(s - b)*(s - c));
        cout<<"Area of triangle = "<<area<<endl;
    }
};

int main(){
    c_polygon *ptr = NULL;
    c_rectangle rect;
    rect.get_dimensions();
    ptr = &rect;
    ptr->area();
    c_triangle tri;
    tri.get_dimensions();
    ptr = &tri;
    ptr->area();
}