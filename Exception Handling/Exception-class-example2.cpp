#include<iostream>
#include<exception>
using namespace std;


int main()
{
    try{
    int *p = new int[100000000000000];
    cout<<"memory allocation is successfull \n";

    delete[]p;
    }

    catch(const bad_alloc &e){
        cout<<"Exception occurred due to line 9 "<<e.what()<<endl;
    }

}