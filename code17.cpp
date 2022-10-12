#include<iostream>
using namespace std;
int firstrepeated_element(int arr[], int n)
{ for (int i = 0; i < n; i++)
{
 for (int i = 0; i < n; i++)
{
    for (int j = i+1; j < n; j++)
    {
       if(arr[i] == arr[j]){
          return min(i,i+1);//for returning the minimum index of first repeating element
          //break;
       } 
    }   
}
      return -1;
} 

} 
int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<firstrepeated_element(arr  , n);
    return 0;
}