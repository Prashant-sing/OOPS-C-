//TEMPLATES
/*templates is used for generic programming. It can be int,char,float,double
Template = parameterized class*/
#include<iostream>
using namespace std;

template<class T>
class vector{
    public:
      T *arr;
      int size;
        vector(int m){
            size = m;
            arr = new T[size];

        }
    T dotProduct(vector &v){
        T d =0;
        for (int  i = 0; i < size; i++)
        {
            d += this ->arr[i]*v.arr[i];

        }
        return d;
        
    }    
};

int main(){
    /*vector v1(3);
    v1.arr[0] = 4;
    v1.arr[1] = 3;
    v1.arr[2] = 1;

    vector v2(3);
    v2.arr[0] = 1;
    v2.arr[1] = 0;
    v2.arr[2] = 1;

    int a = v1.dotProduct(v2);
    cout<<"The dot product of vector 1 and vector 2 is :"<< a<<endl;*/
    vector<int>v1(3);
    v1.arr[0] = 1;
    v1.arr[1] = 3;
    v1.arr[2] = 1;

    vector<int>v2(3);
    v2.arr[0] = 2;
    v2.arr[1] = 1;
    v2.arr[2] = 4;

    int a = v1.dotProduct(v2);
    cout<<"The dot product of vector 1 and vector 2 is :"<< a<<endl;
    return 0;
}