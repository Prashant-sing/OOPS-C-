#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Ënter any character ";
    cin>>ch;
    if(ch>='A'&&ch<='Z')
    cout<<"The entered character is in Uppercase.";
    else if(ch>='a'&&ch<='z')
    cout<<"The entered character is in Lowercase. ";
    else
    cout<<"It is not a character";
  return 0;    
}