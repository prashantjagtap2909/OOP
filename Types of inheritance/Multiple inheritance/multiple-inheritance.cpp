#include<iostream>
using namespace std;


class Engineer
{
    public:
    string specilization;


    void work()
    {
        cout<<"I have specilization in "<<specilization<<endl;
    }

};

class Youtuber
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
    string name;

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
    A1.showcase();

}