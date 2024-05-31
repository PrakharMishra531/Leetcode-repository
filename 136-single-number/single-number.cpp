class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int xor_ = 0;
        // sort(nums.begin(),nums.end());
        for(int i = 0;i<nums.size();i++){
            xor_ =xor_ ^ nums[i];
            
        }
        return xor_;
    }
};