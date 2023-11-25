class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        auto lb = lower_bound(nums.begin(),nums.end(),target);
        
        if(nums[nums.size()-1]<target){
            return nums.size();
        }
        else{
            return lb-nums.begin();
        }

    }
};