# include <iostream>
using namespace std;

template <class T>
class Pair{
    T first;
    T second;

    public:
    Pair(){
        cout<<"Enter first: "; cin>>first;
        cout<<"Enter second: "; cin>>second;
    }

    T get_first(){
        return first;
    }

    T get_second(){
        return second;
    }

    T get_max(){
        return max(first, second);
    }
};

int main(){
    cout<<"Enter integer pair: ";
    Pair<int> p1;
    cout<<"Integer pair entered: ";
    cout<<"First value: "<<p1.get_first()<<endl;
    cout<<"Second value: "<<p1.get_second()<<endl;
    cout<<"Maximum value: "<<p1.get_max()<<endl;
    cout<<"Enter double pair: ";
    Pair<double> p2;
    cout<<"Double pair entered: ";
    cout<<"First value: "<<p2.get_first()<<endl;
    cout<<"Second value: "<<p2.get_second()<<endl;
    cout<<"Maximum value: "<<p2.get_max()<<endl;
}