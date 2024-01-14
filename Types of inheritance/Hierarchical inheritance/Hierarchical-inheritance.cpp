#include<iostream>
using namespace std;

class Human{
    protected:
    string name;
    int age;

    public:

    Human()
    {

    }

    Human(string name , int age){
        this->name = name;
        this->age = age;
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
    Student(string name ,int age , int roll, int fee): Human(name, age)
    {
        this->name = name;
        this->age = age;
        this->roll = roll;
        this->fee = fee;
    }
   

    void display()
    {
        cout<<name<<" "<<age<<" "<<roll<<" "<<fee<<" ";
    }
};

class Teacher: public Human{

    public:
    int salary;
    Teacher(int salary , string name ,int age){
        this->salary = salary;
        this->name = name;
        this->age = age;
    }
    void display()
    {
        cout<<name<<" "<<age<<" "<<salary<<" "<<endl;
    }

};

int main(){
    Student A1("Prashant" , 23 , 24, 100000);
    A1.display();

    Teacher A2(90000, "Aditya", 26);
    A2.display();
}
