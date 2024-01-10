#include<iostream>
using namespace std;

class Customer{
    string name;
    int ac, balance;
    static int total_customer;
    public:

    Customer(string name , int ac , int balance){
        this->name = name;
        this->ac = ac;
        this->balance = balance;
        total_customer++;
    }

    void display(){

        cout<<name<<" "<<ac<<" "<<balance<<" "<<total_customer<<" "<<endl;


    }

    void display_total(){
        cout<<total_customer<<endl;
    }

   

};


int Customer:: total_customer = 0;


int main(){

    Customer A1("Prashant" , 1 , 1000);
    Customer A2("Navnath" , 2 , 2000);
    Customer A3("Rohit" , 3,3000);
    
    A2.display_total();
    

}