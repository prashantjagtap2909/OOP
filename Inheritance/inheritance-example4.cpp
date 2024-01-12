#include<iostream>
using namespace std;

class Human {
    
    public:
    string name;
    int age , weight;

};

class Student: public Human{
    int roll , fee;
};
   

int main()
{
    Student A;
    
    A.name = "Prashant";  //accessible
   
} 