#include<iostream>
using namespace std;

class Customer{
    string name;
    int ac, balance;
    static int total_customer;
    static int total_balance;

    public:

    Customer(string name , int ac , int balance){
        this->name = name;
        this->ac = ac;
        this->balance = balance;
        total_customer++;
        total_balance +=balance;
    }

     static void accessStatic(){
        cout<<"total number of customer"<<total_customer<<endl;
        cout<<"total customer"<<total_balance<<endl;
    }

    void deposit(int amount){
        if(amount > 0){
            balance += amount;
            total_balance += amount;
        }
    }

    void withdraw(int amount){
        if(amount <= balance && amount > 0){
            balance -= amount;
            total_balance -= amount;
        }
    }

    void display(){

        cout<<name<<" "<<ac<<" "<<balance<<" "<<total_customer<<" "<<endl;


    }

   

    void display_total(){
        cout<<total_customer<<endl;
    }

   

};


int Customer:: total_customer = 0;
int Customer:: total_balance = 0;



int main(){

    Customer A1("Prashant" , 1 , 1000);
    Customer A2("Navnath" , 2 , 2000);
    Customer A3("Rohit" , 3,3000);
    A1.deposit(800);
    
    Customer::accessStatic();

    A2.withdraw(300);

    Customer::accessStatic();

    
    

}