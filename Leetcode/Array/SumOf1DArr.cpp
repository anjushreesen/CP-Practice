class Solution
{
public:
    vector<int> runningSum(vector<int> &nums)
    {

        int sum{0};
        vector<int> v;
        vector<int>::iterator itr;
        for (auto itr = nums.begin(); itr != nums.end(); ++itr)
        {
            sum += *itr;
            v.push_back(sum);
        }

        return v;
    }
};