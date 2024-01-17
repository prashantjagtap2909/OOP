#include<bits/stdc++.h>
#include<fstream>

using namespace std;


int main()
{
    ofstream fout;
    fout.open("example.txt");
    fout<<"Hello world\n";
    fout<<"Hello Prashant\n";
    fout<<"Hello visitor\n";

    fout.close();


    ifstream fin;
    fin.open("example.txt");

    string line;
    while(getline(fin, line))
    {
        cout<<line<<endl;
    }
    fin.close();
};
