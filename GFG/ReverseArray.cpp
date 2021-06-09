// iterative approach

#include <bits/stdc++.h>
using namespace std;

void revereseArray(int arr[], int start, int end)
{
    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";

    cout << endl;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};

    int n = sizeof(arr) / sizeof(arr[0]);

    printArray(arr, n);

    revereseArray(arr, 0, n - 1);

    cout << "Reversed array is" << endl;

    printArray(arr, n);

    return 0;
}

// recursive approach

#include <bits/stdc++.h>
using namespace std;

void rvereseArray(int arr[], int start, int end)
{
    if (start >= end)
        return;

    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;

    rvereseArray(arr, start + 1, end - 1);
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";

    cout << endl;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};

    printArray(arr, 6);

    rvereseArray(arr, 0, 5);

    cout << "Reversed array is" << endl;

    printArray(arr, 6);

    return 0;
}