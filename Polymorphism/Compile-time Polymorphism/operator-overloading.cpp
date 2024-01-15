#include<iostream>
using namespace std;

class Complex
{
    int real , img;

    public:

    Complex()
    {

    };
    
    Complex(int real ,int img){
        this->real = real;
        this->img = img;
    };

    void display()
    {
        cout<<real<<" +i"<<img<<endl;
    }

    Complex operator +(Complex &C)
    {
        Complex res;
        res.real = real + C.real;
        res.img = img + C.img;

        return res;
    }
};




int main()
{
    Complex C1(3,4);
    Complex C2(4,6);

   Complex C3 = C1 + C2;

   C3.display();
};

// within the class same type private member can be access