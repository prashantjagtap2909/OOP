#include<iostream>
using namespace std;

class Student
{   
    public:
    string name;
    int age , roll_number;
    string grade;
};

int main(){
    Student S1;
    S1.name = "Prashant";
    S1.age = 22;
    S1.roll_number = 23;
    S1.grade = "A";

    cout<<S1.age<<" ";
}