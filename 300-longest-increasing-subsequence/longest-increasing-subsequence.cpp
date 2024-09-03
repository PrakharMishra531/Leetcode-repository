class Solution {
public:
    int dp[2515];
    int func(int i, vector<int>&nums){
        if(dp[i]!=-1) return dp[i];
        int ans = 1;
        for(int j = 0;j<i;++j){
            if(nums[i]>nums[j])
            ans = max(ans,func(j,nums)+1);
        }
        return dp[i]=ans;
    }

    int lengthOfLIS(vector<int>& nums) {
        memset(dp,-1,sizeof(dp));
        int ans = 0;
        for(int i = 0;i<nums.size();++i){
            ans = max(ans,func(i,nums));
        }
        return ans;
    }
};