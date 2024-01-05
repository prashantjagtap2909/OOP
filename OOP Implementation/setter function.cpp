#include<iostream>
using namespace std;

class Student
{   
    private:
    string name;
    int age , roll_number;
    string grade;


    public:
    void setname(string s){
        name = s;
    }
    void setage(int a){
        age = a;
    }
    void setroll_number(int r){
        roll_number = r;
    }
    void setgrade(string g){
        grade = g;
    }
    
    
};

int main(){
    Student S1;
    S1.setname ("Prashant");
    S1.setage(22);
    S1.setroll_number(23);
    S1.setgrade("A");

    
  

    
}