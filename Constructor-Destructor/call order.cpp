// Constructor - Destructor call order

#include<iostream>
using namespace std;

class Customer
{
    string name;
    int *data;
   
    public:

    Customer(string name){
        this->name = name;
        
        cout<<"Constructor is "<< name<<endl;
    }
    // Destructor
    ~Customer(){
        
        cout<<"Destructor is"<<name<<endl;
    }

};

int main(){
    Customer A1("1"), A2("2") , A3("3");


}   

