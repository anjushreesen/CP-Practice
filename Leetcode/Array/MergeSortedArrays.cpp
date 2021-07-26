class Solution
{
public:
    void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
    {

        int i{m - 1}, j{n - 1}, k{m + n - 1};

        while (i >= 0 && j >= 0)
        {

            if (nums1[i] < nums2[j])
            {
                nums1[k] = nums2[j];
                j--;
                k--;
            }
            else
            {

                nums1[k] = nums1[i];
                i--;
                k--;
            }
        }

        while (i >= 0)
        {

            nums1[k] = nums1[i];
            i--;
            k--;
        }

        while (j >= 0)
        {
            nums1[k] = nums2[j];
            j--;
            k--;
        }
    }
};

//  0 ms solution
class Solution
{
public:
    void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
    {

        for (int i = 0; i < nums2.size(); i++)
            nums1.push_back(nums2[i]);
        sort(nums1.begin(), nums1.end());
        int count = 0;
        for (int i = nums1.size() - 1; i >= 0; i--)
        {
            if (nums1[i] == 0 && count != nums2.size())
            {
                nums1.erase(nums1.begin() + i);
                count++;
            }
        }
    }
};