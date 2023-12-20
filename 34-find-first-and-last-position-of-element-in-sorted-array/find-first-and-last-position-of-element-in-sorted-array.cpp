class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int mini = INT_MAX;
        int maxi = INT_MIN;
        int n=nums.size();
        int cnt=0;
        for(int i=0;i<n;i++){
            if(nums[i]==target){
                mini = min(mini,i);
                maxi=max(maxi,i);
                cnt++;
            }
        }
        if(cnt!=0){
            return {mini,maxi};
        }
        return {-1,-1};
        
    }
};