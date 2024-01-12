#include<iostream>
using namespace std;

class Human {
    

    string name;
    int age , weight;

};

class Student: public Human{
    int roll , fee;
};
   

int main()
{
    Student A;
    
    A.name = "Prashant";  //inaccessible
   
} 