#include<iostream>
#include<exception>
using namespace std;

class exception
{
    protected:
    string msg;


    public:
    exception(string msg){
        this->msg = msg;
    }

    string what(){
        return msg;
    }
};

int main()
{
    try{
    int *p = new int[100000000000000];
    cout<<"memory allocation is successfull \n";

    delete[]p;
    }

    catch(const exception &e){
        cout<<"Exception occurred due to line 9 "<<e.what()<<endl;
    }

}