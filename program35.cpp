#include<iostream>
#include<fstream>
/*
The useful classes for working with files in C++ are:
1. fstreambase
2. ifstream --> derived from fstreambase
3. ofstream --> derived from fstreambase
*/
// In order to work with files in C++, you will have to open it. Primarily, there are two ways to open a file:
//1. Using the constructor 
//2. Using the member function open() of the class

using namespace std;

int main(){
    string st="The lodu singh";
    string st2;
    //opening files using constructor
    //ofstream out("sample35.txt");//write operation
    //out<<st;
    
    //opening files using constructor and reading it 
    ifstream in ("sample35b.txt");//read operation
    in>>st2;
    getline(in,st2);
    
    cout<<st2;


    return 0;
}