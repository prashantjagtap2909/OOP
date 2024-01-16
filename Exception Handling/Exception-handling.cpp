#include<iostream>
using namespace std;


class Customer
{
    string name;
    int balance, ac;

    public:
    Customer(string name , int balance, int ac){
        this->name = name;
        this->balance = balance;
        this->ac = ac;
    };

    void deposit(int amount )
    {
        if(amount <= 0)
            throw "amount should be grater than 0";
            
        balance += amount;
        cout<<amount<<" is credited successfully"<<endl;

    }

    void withdraw(int amount){
        if(amount > 0 && amount <= balance){
            balance -= amount;
            cout<<amount<<" is debited successfully"<<endl;
        }
        else if(amount < 0){
            throw "should be greater than 0";
        }else{
            throw "balance is low";
        }
    }


};


int main()
{
    Customer C1("Prashant" , 5000, 10);
    try{
    C1.deposit(100);
    C1.withdraw(6000);
    C1.deposit(100);
    }
    catch(const char *e){
        cout<<"exception occured : "<<e<<endl;
    }
    
}