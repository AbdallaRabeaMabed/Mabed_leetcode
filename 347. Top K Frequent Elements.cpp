class Solution {

public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> bucket_arr[n+1];
       map<int,int>mp;
        for(int i = 0; i < n; i++)
        {
            mp[nums[i]]++;
        }
        vector<int>ans;
        for(auto it: mp)
        {
            bucket_arr[it.second].push_back(it.first);
        }
        for(int i = n; i >= 0; i--)
        {
            if(bucket_arr[i].empty() == 0)
            {
                for(auto it:bucket_arr[i])
                {
                    ans.push_back(it);
                    k--;
                    if(k == 0)
                        return ans;
                }
            }
        }
            
      
      
        return ans;
    }
};
