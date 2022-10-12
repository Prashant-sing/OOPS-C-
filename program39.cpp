#include<iostream>
using namespace std;
/*
CLASS TEMPLATES WITH MULTIPLE PARAMETERS ( ONE,TWO OR MORE THAN TWO)
syntax:-
    template<<class T1, class T2,....(comma separated)>>
    class  name of class{
        Body
    }*/

    template<class T1,class T2>
    class myClass{
        Public:
            T1 data1;
            T2 data2;
            myClass(T1 a, T2 b){
                 data1 = a;
                 data2 = b;
            }
            void display(){
                cout<<this->data1<<endl<<this->data2;

            }
    };
    int main(){
        myClass<char,float>obj('c',1.7);
        obj.display();
        return 0;
    }