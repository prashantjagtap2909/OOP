#include<iostream>
using namespace std;

class Student
{   
    public:
    string name;
    int age , roll_number;
    string grade;
};


// allocating memory dynamically


int main(){
    Student *S = new Student;

    (*S).name = "Prashant";
    (*S).age = 22;
    (*S).roll_number = 23;
    (*S).grade = "A";

    cout<<S->name<<" ";


}