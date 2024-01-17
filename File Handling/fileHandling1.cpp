#include<iostream>
#include<fstream>

using namespace std;


int main()
{
    ofstream fout;             // file to be open

    fout.open("sample.txt");        //path of file / create if not present 
    
    fout<<"Hello World";  //data to be written

    fout.close();
}
