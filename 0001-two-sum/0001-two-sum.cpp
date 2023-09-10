class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        
        vector<pair<int,int>> v;
        int n = nums.size();


        for(int i = 0 ; i < n ; i++)
        {
            v.push_back({nums[i],i});
        }

        sort(v.begin(),v.end());

        int f = 0;

        int l = n-1;

        while(f < l){
            int sum  = v[f].first + v[l].first;

            if(sum == target)
            {
                return {v[f].second,v[l].second};
            }
            else if(sum > target)
            {
                l--;
            }
            else
            {
                f++;
            }
        }

        return {-1,-1};


    }
};