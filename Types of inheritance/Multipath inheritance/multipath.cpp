#include<iostream>
using namespace std;

class Human
{
    public:
    string name;

    void display()
    {
        cout<<"My name is "<<name<<endl;
    }
};


class Engineer : public virtual Human
{
    
    public:
    string specilization;

    
    void work()
    {
        cout<<"I have specilization in "<<specilization<<endl;
    }

};

class Youtuber: public virtual Human
{
    public:
    int subscriber;

    void contentCreator()
    {
        cout<<"I have a subscriber base of "<<subscriber<<endl;
    }
};

class CodeTeacher: public Engineer, public Youtuber
{
    public:
    int salary;

    CodeTeacher()
    {

    }

    CodeTeacher(string name , string specilization, int subscriber, int salary)
    {
        this->name = name;
        this->specilization = specilization;
        this->subscriber = subscriber;
        this->salary = salary;

    }
    
    
};

int main()
{
    CodeTeacher A1("Aditya", "CSE" , 100 , 400000);
    A1.display();
    
};