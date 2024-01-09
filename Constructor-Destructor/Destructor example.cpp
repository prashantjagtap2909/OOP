#include<iostream>
using namespace std;

class Customer
{
    string name;
    int *data;
   
    public:

    Customer(){
        name = "Prashant";
        data = new int;
        *data = 10;
        cout<<"constructor is called"<<endl;
    }
    // Destructor
    ~Customer(){
        delete data;
        cout<<"Destructor is called"<<endl;
    }

};

int main(){
    Customer A1;
}   

