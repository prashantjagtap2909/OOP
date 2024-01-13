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
    ~Human(){
        cout<<"I am not robot destructor"<<endl;
    }

    void work(){
        cout<<"work is in progress"<<endl;
    }
};

class Student: public Human
{
    int roll , fee;

    public:
 /*   Student(string name ,int age , int roll, int fee)
    {
        this->name = name;
        this->age = age;
        this->roll = roll;
        this->fee = fee;
    }
*/
    Student()
    {
        cout<<"hello student"<<endl;
    }
    ~Student()
    {
        cout<<"hello student destructor"<<endl;
    }
};



int main(){
    Student A1;
    
}
