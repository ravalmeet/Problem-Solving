class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) 
    {
        int l = nums.size();
        vector<int> ans(l,0);
        int PoInt = 0;
        int NeInt = 1;
        for(auto it:nums)
        {
            if(it > 0){
                ans[PoInt] = it;
                PoInt += 2;
            }
            else{
                ans[NeInt] = it;
                NeInt += 2;
            }
        }
        
        return ans;
        
    }
};