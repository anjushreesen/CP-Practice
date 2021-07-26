class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        
        vector<int>:: iterator it;
        vector<int> res;
        
        for(auto it = nums.begin(); it != nums.end(); ++it){
            
            res.push_back((*it)*(*it));
        }
        
        sort(res.begin(), res.end());
        return res;
        
    }
};