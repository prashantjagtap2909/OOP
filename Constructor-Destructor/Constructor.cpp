#include<iostream>
using namespace std;

class Customer
{
    string name;
    int ac;
    int balance;


    public:
    // Default Constructor
    Customer()                
    {       
        cout<<"Constructor called"<<endl;
    }
    Customer()                
    {       
        name = "Prashant";
        ac = 4;
        balance = 100;
    }
    void display(){
        cout<<name<<" "<<ac<<" "<<balance<<" "<<endl;
    }

};

int main(){
    Customer A1, A2, A3;
    A1.display();
    A2.display();
    A3.display();
}   

