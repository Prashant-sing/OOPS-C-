// How to find the repeating element of array
#include <iostream>
using namespace std;
void repeating_element(int arr[], int n)
{
    int i, j;
   
    cout << "Maximum distance between Repeating elements is- ";
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                cout << max(j - i, i - j);
            }
        }
        break;
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    int i;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // this line is giving referral to the called function
    repeating_element(arr, n);
    return 0;
}