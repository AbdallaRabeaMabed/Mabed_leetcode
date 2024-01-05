class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        long long prod_all = 1;
        int zero_found1 = -1;
        int zero_found2 = -1;
        for(int i = 0; i < n; i++)
        {
          if(nums[i] == 0 && zero_found1 == -1)
              zero_found1 = i;
           else if(nums[i] == 0 && zero_found1 != -1)
               zero_found2 = i;
          prod_all*=nums[i];
        }
        if(zero_found1 == -1 && zero_found2 == -1){
         for(int i = 0; i < n; i++)
        {
          nums[i] = prod_all * 1/nums[i];
        }
        }
        else if(zero_found1 != -1 && zero_found2 == -1)
        {
            int mul = 1;
            for(int i = 0; i < n; i++)
            {
                if(nums[i] == 0)
                    continue;
                mul*=nums[i];
            }
             for(int i = 0; i < n; i++)
            {
                if(nums[i] == 0)
                nums[i] = mul;
                else
                nums[i] = 0;
            }
        }
        else if(zero_found1 != -1 && zero_found2 != -1)
        {
            for(int i = 0; i < n; i++)
            {
                nums[i] = 0;
            }
        }
    
        
        return nums;
    }
};
