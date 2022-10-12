#include <iostream>
#include<climits>
using namespace std;
int main()
{
    int n,m;
    cout << "Enter the no. of elements in array" << endl;
    cin >> n;
    cout << "Enter the value of sum " << endl;
    cin >> m;
    int arr[n];
    cout << "Enter the values in the array " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    //int maxsum = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int sum = 0;
            for (int k = i; k <= j; k++)
            {
                sum += arr[k];
                if (sum == m)
                {
                    cout << i << "  " << k ;
                    return 0;
                }
            }
            //maxsum = max(maxsum,sum);
        }
    }
   // cout<<maxsum<<endl;
    return 0;
}
/*for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0 && arr[i + 1] > 0 && arr[i + 1] != arr[i] + 1)
            cout << "Smallest positive missing number is " << arr[i] + 1 << endl;
            break;
    }*/