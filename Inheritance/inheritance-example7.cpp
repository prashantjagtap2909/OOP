#include<iostream>
using namespace std;

class Human {
    
    protected:
    string name;
    int age , weight;

};

class Student: protected Human{
    private:
    int roll , fee;


   
    public:
    void fun(string n , int a , int w)
    {
        name = n;
        age = a;
        weight = w;
    }
    
    void display()
    {
        cout<<name<<" "<<age<<" "<<weight<<" ";
    }

};
   

int main()
{
    Student A;
    
   
    A.fun("Rohit" , 18 , 50);    //accessible
    A.display();
} 