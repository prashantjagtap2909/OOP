#include<iostream>
using namespace std;

class Customer
{
    string name;
    int ac;
    int balance;


    public:
    Customer()                
    {       
        name = "Prashant";
        ac = 4;
        balance = 100;
    }

    // Parameterized consructor

    // This pointer
    Customer(string name , int ac , int balance)                
    {       
        this->name = name ;
        this->ac = ac ;
        this->balance = balance;
    }
    // Construcor overloading
    Customer(string a , int b){
        name = a;
        ac = b;
    }
    void display(){
        cout<<name<<" "<<ac<<" "<<balance<<" "<<endl;
    }


    // inline constructor
    inline Customer(string a, int b , int c):name(a), ac(b),balance(c){

    }

};

int main(){
    Customer A1;
    Customer A2("PrashantJ" , 121, 100000);
    Customer A3("Navnath" ,  1);
    A1.display();
    A2.display();
    A3.display();
}   

