// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// Function to return minimum number of jumps to end of array

class Solution
{
public:
    int minJumps(int arr[], int n)
    {
        // Your code here
        // int i = 0, count = 0;
        // while (i < n)
        // {
        //     int jump = arr[i];
        //     i = i + jump;
        //     count++;
        // }

        // return count;

        int currEnd{0}, farthest{0}, jumps{0};
        for (int i = 0; i < n; ++i)
        {
            farthest = max(farthest, i + arr[i]);
            if (i == currEnd)
            {
                jumps++;
                currEnd = farthest;
            }

            if (currEnd >= n - 1)
            {
                break;
            }
        }

        if (currEnd < n - 1)
        {
            return -1;
        }

        return jumps;
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, i, j;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        Solution obj;
        cout << obj.minJumps(arr, n) << endl;
    }
    return 0;
}
// } Driver Code Ends