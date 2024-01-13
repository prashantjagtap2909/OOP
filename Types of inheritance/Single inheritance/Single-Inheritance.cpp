#include<iostream>
using namespace std;

class Human{
    protected:
    string name;
    int age;

    public:

    Human(){
        cout<<"I am not robot"<<endl;
    }

    void work(){
        cout<<"work is in progress"<<endl;
    }
};

class Student: public Human
{
    int roll , fee;

    public:
    Student(string name ,int age , int roll, int fee)
    {
        this->name = name;
        this->age = age;
        this->roll = roll;
        this->fee = fee;
    }
};



int main(){
    Student A1("Prashant" , 23 , 24, 100000);
    A1.work();
}
