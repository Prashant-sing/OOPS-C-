#include <iostream>
using namespace std;
int findtransitionpoint(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {
        //perform a linear search and return the index of first 1
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == 1)
            {
                return i;

                break;
            }
        }

        //if no element is 1-
        //return -1;
        return -1;
    }
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int point = findtransitionpoint(arr, n);
    point >= 0 ? cout << "Transition point is " << point : cout << "There is no transition point";
    return 0;
}
