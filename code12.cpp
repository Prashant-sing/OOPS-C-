//Swaping ith and (i+2)th element of an array
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n; 
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    for (int i = 0; i < n-2; i++)
    {
        int temp = arr[i];
            arr[i] = arr[i+2];
            arr[i+2] = temp;
    }
     for (int i = 0; i < n; i++)
    {
        cout<<arr[i];
    }
    return 0;
}