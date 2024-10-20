# include <iostream>
using namespace std;

class bank_system{
    double balance;
    double rate_of_interest;

    public:
        bank_system(){
            balance = 0;
            rate_of_interest = 0;
        }

        bank_system(double bal, double rate){
            balance = bal; 
            rate_of_interest = rate;
        }

        void display(){
            cout<<"Balance: "<<balance<<endl;
            cout<<"Rate of interest: "<<rate_of_interest<<endl;
        }

        void deposit(){
            double amt;
            cout<<"Enter amount deposited ";  cin>>amt;
            balance += amt;
        }

        void withdraw(){
            double amt;
            cout<<"Enter amount withdrawn ";  cin>>amt;
            balance -= amt;
        }

        void change_interest_rate(){
            double new_rate;
            cout<<"Enter new rate of interest: "; cin>>new_rate;
            rate_of_interest = new_rate;
        }

        ~bank_system(){
            cout<<"Object destroyed"<<endl;
        }
};

int main(){
    double initial_bal, initial_rate;
    cout<<"Enter initial balance: "; cin>>initial_bal;     
    cout<<"Enter initial rate of interest: "; cin>>initial_rate;  
    bank_system b1(initial_bal, initial_rate);
    b1.deposit();
    b1.display();
    b1.withdraw();
    b1.display();
    b1.change_interest_rate();
    b1.display();
}