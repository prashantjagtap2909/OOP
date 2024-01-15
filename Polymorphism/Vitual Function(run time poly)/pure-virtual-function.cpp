#include<bits/stdc++.h>
using namespace std;

class Animal
{
    public:

    virtual void speak()=0;  // abstract class , object can't be created
    
};
class Dog : public Animal
{
    public:

    void speak()
    {
        cout<<"bark"<<endl;
    }
    
};
class Cat : public Animal
{
    public:

    void speak()
    {
        cout<<"meow"<<endl;
    }
    
};


int main()
{
   // Animal *p;
  //  p = new Dog(); 
   // p->speak();   ///bark because of virtual
    

    Animal *p;
    vector<Animal*>animals;
    animals.push_back(new Dog());
    animals.push_back(new Cat());
   
    animals.push_back(new Dog());
    animals.push_back(new Cat());



    for(int i = 0 ; i < animals.size() ;i++){
        p = animals[i];
        p->speak();
    }
}