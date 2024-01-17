#include<iostream>
#include<fstream>

using namespace std;


int main()
{
    ifstream fin;             // file to be open

    fin.open("sample.txt");        //path of file 


    char c;
    c = fin.get();
    while(!fin.eof()){
        cout<<c;
        c = fin.get();
    };

    fin.close();
}
