class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size();
        int high =n-2;
        int low = 1;
        if(n==1){
            return nums[0];
        }
        if(nums[0]!=nums[1]){
            return nums[0];
        }
        if(nums[n-1]!=nums[n-2]){
            return nums[nums.size()-1];
        }
        while(low<=high){
            int mid = (high+low)/2;
            if(nums[mid]!=nums[mid-1]&&nums[mid]!=nums[mid+1]){
                return nums[mid];
            }

            if((mid%2==1 && nums[mid-1]==nums[mid])||(mid%2==0)&&nums[mid+1]==nums[mid]){
                low=mid+1;
            }
            else{
                high = mid-1;
            }

        }
        return -1;
    }
};