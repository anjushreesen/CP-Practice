class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int maxProfit = 0;
        int minPrice = INT_MAX;

        vector<int>::iterator itr;

        for (itr = prices.begin(); itr != prices.end(); ++itr)
        {
            minPrice = min(*itr, minPrice);
            int profit = *itr - minPrice;
            maxProfit = max(profit, maxProfit);
        }

        return maxProfit;
    }
};