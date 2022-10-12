#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n; //enter
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int k = 0; //k is to check which loop has run
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {  
                k = 1;
            }
            if (i < j || i > j)
            {
                k = 2;
            }

            if (arr[i] == arr[j] && k == 2)
            {
                cout << i << "  ";
                break;
            }
        }
    }

    return 0;
}
