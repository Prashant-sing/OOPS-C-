//intersection of arrays
#include <iostream>
using namespace std;
int main()
{
    int n, m, sum = 0;
    cout<<"Enter the value of n and m--  "<<endl;
    cin >> n >> m;
    int a[n];
    int b[m];
    cout << "Enter the array elemets" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "Enter another array elemets" << endl;
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i] == b[j])
            {
                sum++;
                cout<<"Reapeting elements are-- "<<a[i]<<" "<<endl;
            }
        }
    }
    if (sum != 0)
    {
        cout <<"No. of common elements are- "<< sum << endl;
    }
    else
    {
        cout << "There is no common element";
    }
    return 0;
}
