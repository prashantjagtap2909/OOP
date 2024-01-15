#include<iostream>
using namespace std;

class Animal
{
    public:

    virtual void speak()
    {
        cout<<"Hoo hoo"<<endl;
    }
};
class Dog : public Animal
{
    public:

    void speak()
    {
        cout<<"bark"<<endl;
    }
    void roti()
    {
        cout<<"hello"<<endl;
    }
};


int main()
{
    Animal *p;
    p = new Dog(); 
    p->speak();   ///bark because of virtual
    // p->roti();         // not accessible

    


}