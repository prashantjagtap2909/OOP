#include<bits/stdc++.h>
#include<fstream>

using namespace std;


int main()
{
    vector<int>arr(5);
    cout<<"Enter the input: ";
    for(int i = 0 ; i < 5 ; i++)
        cin>>arr[i];
    

    ofstream fout;
    fout.open("array-sample.txt");
    fout<<"original data\n";
    for(int i = 0 ; i < 5 ; i++){
        fout<<arr[i]<< " ";
    };
    fout<<"\n Sorted data\n";


    sort(arr.begin(), arr.end());
    for(int i = 0 ; i < 5 ; i++){
        fout<<arr[i]<< " ";
    };


    fout.close();
};
