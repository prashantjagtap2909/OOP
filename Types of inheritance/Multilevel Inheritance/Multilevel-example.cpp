#include<iostream>
using namespace std;

class Person{
    protected:
    string name;

    public:

    void introduce(){
        cout<<"Hello my name is "<<name<<endl;
    }
};

class Employee: public Person
{
    protected:
    int salary;

    public:
    void monthly_salary(){
        cout<<"My monthly salary is "<<salary<<endl;
    }
};


class Manager : public Employee{
    
    public:
    string department;


    Manager(string name , int salary , string department){
        this->name = name;
        this->salary = salary;
        this->department = department;
    };

    void work(){
        cout<<"I am leading the department of "<<department<<endl;
    }


};

int main(){
    Manager A1("Prashant" , 20000, "Finanace");
    A1.work();  //accessible
    A1.monthly_salary();  // accessible
    A1.introduce();   // accessible
    A1.department = "R&D";  // public accessible 
    A1.work();            
}
