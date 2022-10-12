#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){
    ofstream out;
    out.open("sample35.txt");
    out<<"This is me"<<endl;
    out<<"This is Lodu singh"<<endl;
    
    out.close();

    ifstream in;
    string st,st2;
    in.open("sample35b.txt");
    //in>>st>>st2;
    //cout<<st<<st2;
    while(in.eof()==0){
        getline(in,st);
        cout<<st<<endl;
    }
    in.close();
    return 0;
}