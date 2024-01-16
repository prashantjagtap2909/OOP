#include<iostream>
#include<exception>
using namespace std;




class InvalidAmountError : public runtime_error
{
    public:

    InvalidAmountError(const string &msg): runtime_error(msg)
    {};
};

class InsufficientBalanceError : public runtime_error
{
    public:
    InsufficientBalanceError(const string &msg): runtime_error(msg)
    {};
};

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
            throw InvalidAmountError("amount should be grater than 0");
            
        balance += amount;
        cout<<amount<<" is credited successfully"<<endl;

    }

    void withdraw(int amount){
        if(amount > 0 && amount <= balance){
            balance -= amount;
            cout<<amount<<" is debited successfully"<<endl;
        }
        else if(amount < 0){
            throw InvalidAmountError("should be greater than 0");
        }else{
            throw InsufficientBalanceError ("balance is low");
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
    catch(const InvalidAmountError &e){
        cout<<"exception occured : "<<e.what()<<endl;
    }
    catch(const InsufficientBalanceError &e)
    {
        cout<<"exception occured : "<<e.what()<<endl;
    }
    catch(...)
    {
        cout<<"Exception occured"<<endl;
    }
    
}