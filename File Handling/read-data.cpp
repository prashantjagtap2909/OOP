#include<iostream>
#include<fstream>

using namespace std;


int main()
{
    ifstream fin;             // file to be open

    fin.open("sample.txt");        //path of file 


    char c;
    fin>>c;
    while(!fin.eof()){
        cout<<c;
        fin>>c;
    }

    fin.close();
}
