#include<iostream>
using namespace std;


class Student
{
    public:

    void print()
    {
        cout<<"I am a student"<<endl;
    }
};

class Male
{
    public:
    void MalePrint()
    {
        cout<<"I am a Male"<<endl;
    };
};

class Female
{
    public:
    void FemalePrint()
    {
        cout<<"I am a Female"<<endl;
    }
};


class Boy: public Student, public Male
{
    public:
    void BoyPrint()
    {
        cout<<" I am a boy "<<endl;
    };
};
class Girl: public Student, public Female
{
    public:
    void GirlPrint()
    {
        cout<<" I am a girl "<<endl;
    };
};




int main()
{
    Girl G1;
    G1.GirlPrint();    // can inherit

    Boy B1;
    B1.MalePrint();   // can inherit due to public 
}