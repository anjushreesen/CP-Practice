#include <bits/stdc++.h>
using namespace std;

int main()
{
    //code
    int t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n);
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << endl;
            cout << "\n";
        }
    }
    return 0;
}