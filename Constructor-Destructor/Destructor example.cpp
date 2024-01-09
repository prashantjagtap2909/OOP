#include<iostream>
using namespace std;

class Customer
{
    string name;
    int *data;
   
    public:

    Customer(){
        cout<<"constructor is called"<<endl;
    }
    // Destructor
    ~Customer(){
        cout<<"Destructor is called"<<endl;
    }

};

int main(){
    Customer A1;
}   

