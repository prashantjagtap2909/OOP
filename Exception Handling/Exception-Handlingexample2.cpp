#include<iostream>
using namespace std;



int main()
{
    int a, b;
    cin>>a>>b;

    if(b == 0){
        cout<<"Divide by zero is not possible \n";
        return 0;
    }   
    int c = a/b;

    cout<<c<<endl;
}