#include<iostream>
using namespace std;


class Engineer
{
    void money(){
        cout<<"Hello money"<<endl;
    }
    public:
    string specilization;

    Engineer()
    {
        cout<<"Hello engineer"<<endl;
    }


    void work()
    {
        cout<<"I have specilization in "<<specilization<<endl;
    }

};

class Youtuber
{
    public:
    int subscriber;

    
    Youtuber()
    {
        cout<<"Hello Youtuber"<<endl;
    }

    void contentCreator()
    {
        cout<<"I have a subscriber base of "<<subscriber<<endl;
    }
};

class CodeTeacher: public Engineer, public Youtuber
{
    public:
    string name;


    CodeTeacher()
    {
        cout<<"Hello coder"<<endl;
    }

    
    CodeTeacher(string name , string specilization, int subscriber)
    {
        this->name = name;
        this->specilization = specilization;
        this->subscriber = subscriber;

    }
    void showcase()
    {
        cout<<" My name is "<<name<<endl;
        work();
        contentCreator();
    }
    
};

int main()
{
    CodeTeacher A1("Aditya" , "CSE" , 400000);
    A1.showcase();  // accessible
   //  A1.money() ; // not accessible due to private not inherit

}