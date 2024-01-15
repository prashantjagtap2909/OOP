//Function Overloading
#include<iostream>
using namespace std;

class Area
{
    public:

    int calculateArea(int r){  //circle
        return 3.14*r*r;
    }

    int calculateArea(int l , int b){  //Rectangle
        return l*b;
    }
};



int main()
{
    Area A1, A2;
    cout<<A1.calculateArea(4)<<endl;   //calculates area of circle according to parameter which decides at compile time

    cout<<A2.calculateArea(3,4)<<endl;   //calculate area of rectangle


    
}