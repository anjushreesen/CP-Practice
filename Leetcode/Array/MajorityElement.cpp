/* using unorderd map */

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        unordered_map<int,int> umap;
        int n=nums.size();
        
        for(auto i : nums){
            umap[i]++;
            if( umap[i] > n/2) return i;
        }
        
        return -1;
        
    }
};