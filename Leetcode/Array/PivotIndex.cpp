class Solution
{
public:
    int pivotIndex(vector<int> &nums)
    {

        int sumL{0}, sumR{0}, currSum{0};
        int total = accumulate(nums.begin(), nums.end(), 0);

        for (int i = 0; i < nums.size(); i++)
        {
            currSum += nums[i];
            sumL = currSum - nums[i];
            sumR = total - currSum;
            if (sumL == sumR)
            {
                return i;
            }
        }

        return -1;
    }
};