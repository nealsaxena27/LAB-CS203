# include <iostream>
using namespace std;

void swap_value(int a, int b){
    int temp = a;
    a = b;
    b = temp;
    cout<<"a inside function: "<<a<<endl;
    cout<<"b inside function: "<<b<<endl;
}

void swap_reference(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
    cout<<"a inside function: "<<a<<endl;
    cout<<"b inside function: "<<b<<endl;
}

int main(){
    int x = -1;
    int a, b;
    cout<<"Enter a: "; cin>>a;
    cout<<"Enter b: "; cin>>b;
    while(x != 3){
        cout<<"Enter choice (1 - value, 2 - reference): "; cin>>x;
        switch(x){
            case 1:
                swap_value(a, b);
                cout<<"a outside function: "<<a<<endl;
                cout<<"b outside function: "<<b<<endl;
                break;
            case 2:
                swap_reference(a, b);
                cout<<"a outside function: "<<a<<endl;
                cout<<"b outside function: "<<b<<endl;
                break;
            case 3:
                cout<<"Program terminated"<<endl;
                break;
            default:
                cout<<"Invalid choice, try again"<<endl;
                break;
        }
    }
}