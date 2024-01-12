#include<iostream>
using namespace std;

class Human {
    
    string state, color;
    protected:
    string name;
    int age , weight;

};

class Student: public Human{
    private:
    int roll , fee;

    public:

    Student(string name, int age , int weight, int roll , int fee){
        this->name = name;
        this->age = age;
        this->weight = weight;
        this->roll = roll;
        this->fee = fee;

    }

    void display(){
        cout<<name<<" "<<" age is "<<age<<" weight is "<<weight<<" roll is "<<roll<<" fee is " <<fee<<endl;
    }

};
   

int main()
{
    Student A("Rohit" , 18 ,50,23, 200000 );    //accessible;
    
    A.display();
} 