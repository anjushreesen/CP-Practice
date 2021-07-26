class Solution
{
public:
    void moveZeroes(vector<int> &nums)
    {

        int count{0};
        vector<int>::iterator itr;

        for (itr = nums.begin(); itr != nums.end(); ++itr)
        {

            if (*itr != 0)
            {
                nums[count] = *itr;
                count++;
            }
        }

        while (count < nums.size())
        {
            nums[count] = 0;
            count++;
        }
    }
};