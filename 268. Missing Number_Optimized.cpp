class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        long long SumWithoutMissing = n * (n+1) /2;
        long long SumWithMissing = 0;
        for(int i =0; i < n; i++)
        {
            SumWithMissing+=nums[i];
        }
        return SumWithoutMissing - SumWithMissing;
    }
};
