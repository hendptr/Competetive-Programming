class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int len = nums.size();
        if(len == 0){
            return 0;
        }
        
        vector<int> dp(len);
        dp[0] = 1;
        int maxans = 1;
        for(int i=0;i<len;i++){
            int maxval = 0;
            for(int j=0;j<i;j++){
                if(nums[i] > nums[j]){
                    maxval = max(maxval, dp[j]);
                }
            }
            dp[i] = maxval + 1;
            maxans = max(maxans, dp[i]);
        }
        return maxans;
    }
};
