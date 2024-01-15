#include<bits/stdc++.h>
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
    
};


int main()
{
    Animal *p;
    p = new Dog(); 
    p->speak();   ///bark because of virtual
    




}