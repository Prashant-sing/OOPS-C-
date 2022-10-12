//MAP IN CPP
#include<iostream>
#include<map>
#include<string>
using namespace std;

//MAP is an associative array

int main(){
    map<string,int>marksMap;
    marksMap["Harry"] = 98;
    marksMap["lovish"] = 58;
    marksMap["Rohan"] = 3;
    marksMap.insert({{"lodu",169},{"chutiya",123}});
    map<string,int> :: iterator iter;
    for (iter= marksMap.begin();iter!= marksMap.end(); iter++)
    {
       cout<<(*iter).first<<" "<<(*iter).second<<"\n";
    }
    cout<<"The size is:"<<marksMap.size()<<endl;
    cout<<"The maximum size is: "<<marksMap.max_size()<<endl;
    cout<<"The empty's return value is:"<<marksMap.empty()<<endl;
    return 0;

}