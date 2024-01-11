#include<iostream>
using namespace std;

class Human {
    private:
    int a;

    protected:
    int b;

    public:
    int c;
}

int main()
{
    Human Prashant;
    Prashant.a = 10;  //not accessible
    Prashant.b = 10;  //not accessible
    Prashant.c = 10;  //accessible
}