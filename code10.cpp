#include<iostream>
using namespace std;
int main(){
    int n,sum = 0;
    
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
       cin>>arr[i];
       sum = sum + arr[i];
    }
    cout<<"The sum of all elements of array is - "<<sum<<endl;
   if((sum%3)==0){
       cout<<"The number formed by the elements of array is divided by 3"<<endl;

   }
   else{
       cout<<"The number formed by the elements of array is not divided by 3";
   }
    return 0;
}