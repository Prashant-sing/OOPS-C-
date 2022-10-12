//count the zeroes in an array 
#include<iostream>
using namespace std;
int main(){
    int n, sum = 0;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n ; i++)
    {
        cin>>arr[i];
    
    }
    
 int c = 0;
  for (int j = 0; j < n; j++)
  {
     if(arr[j] == 0){
          c = c+1;
          
     }
  }
  cout<<c;
    return 0;
}