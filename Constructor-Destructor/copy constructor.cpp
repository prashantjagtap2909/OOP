#include<iostream>
using namespace std;

class Customer
{
    string name;
    int ac;
    int balance;
    int *roi;


    public:
    Customer()                
    {       
        name = "Prashant";
        ac = 4;
        balance = 100;
        roi = new int[100];
    }

    // Parameterized consructor
    Customer(string a , int b , int c)                
    {       
        name = a;
        ac = b;
        balance = c;
    }
    Customer(string a , int b){
        name = a;
        ac = b;
    }
   
    void display(){
        cout<<name<<" "<<ac<<" "<<balance<<" "<<endl;
    }
    Customer(Customer &B){
        name = B.name;
        ac = B.ac;
        balance = B.balance;
    }
};

int main(){
    Customer A1;
    Customer A2("PrashantJ" , 121, 100000);
    Customer A3("Navnath" ,  1);
    A1.display();
    A2.display();
    A3.display();

    Customer A4(A3);
    A4.display();

    Customer A5;
    A5 = A3;     // using assignment operator
    A5.display();
   
}   

