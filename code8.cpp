//Waveform array--> sorting and swaping of an array 
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int x[n];
    for (int i = 0; i < n ; i++)
    {
       cin>> x[i];
    }
    for (int i = 0; i < n-1 ; i++)
    {
        for (int j = i+1 ; j<n ; j++)
    {
        if(x[j] < x[i]){
            int temp = x[j];
                x[j] = x[i];
                x[i] = temp;
        }
    }
    
       
    }
     cout<<"Sorted Array is -"<<endl;

     for (int i = 0; i < n; i++)
     {
          cout<< x[i]<<" ";
     }
     cout<<endl;

    // for (int i = 0; i < n ; i = i+2)
     //{ 
         for(int j = 0; j < n; j = j+2){
        int var = x[j+1];
            x[j+1] = x[j];
            x[j] = var;
     }

    // }
     
     cout<<"Waveform array is -"<<endl;
    for (int i = 0; i < n; i++)
    {
       cout<<x[i]<<" ";
    }
    
    cout<<endl;
    return 0;
     
}