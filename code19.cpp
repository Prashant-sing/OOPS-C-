#include <iostream>
using namespace std;
int subarraywithgivensum(int a[], int n ,int m, int sum){
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            for (int k = j; k < n; k++)
            {
                sum = sum + a[k];
                if(sum == m){
                    return (j , k);
                    break;
                }
            }
            
        }
       return -1; 
    }
    
}
int main()
{   int sum = 0;
    int n, m;
    cin >> n >> m;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout<<subarraywithgivensum(a , n, m, sum);
    return 0;
}
