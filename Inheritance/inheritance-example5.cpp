#include<iostream>
using namespace std;

class Human {
    
    public:
    string name;
    int age , weight;

};

class Student: protected Human{
    private:
    int roll , fee;


    public:
    
    fun(string n , int a , int w)
    {
        name = a;
        age = a;
        weight = w;
    }
};
   

int main()
{
    Student A;
    
    A.name = "Prashant";  //inaccessible
    A.fun("Rohit" , 18 , 50);    //accessible
} 