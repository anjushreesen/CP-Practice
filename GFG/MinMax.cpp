#include <bits/stdc++.h>
#define N 100
using namespace std;

int getMin(int arr[], int n)
{
    int res = arr[0];
    for (int i = 1; i < n; i++)
    {
        res = min(res, arr[i]);
    }

    return res;
}

int getMax(int arr[], int n)
{
    int res = arr[0];
    for (int i = 1; i < n; i++)
    {
        res = max(res, arr[i]);
    }

    return res;
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
    cout << "Minimum element of array: " << getMin(arr, n) << "\n";
    cout << "Maximum element of array: " << getMax(arr, n);
    return 0;
}