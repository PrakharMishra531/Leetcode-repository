class Solution {
public:
    bool check(vector<int>&nums,int mid,int threshold){
        int n = nums.size();
        int sum = 0;
        for(int i =0 ;i<n;i++){
            sum+=ceil((double)nums[i]/(double)mid);
        }
        if(sum<=threshold){
            return true;
        }
        return false;
    }

    int smallestDivisor(vector<int>& nums, int threshold) {
        int n = nums.size();
        int mini = INT_MAX;
        int maxi = INT_MIN;
        for(int i = 0;i<n;i++){
            mini = min(nums[i],mini);
            maxi = max(nums[i],maxi);
        }
        int low = 1;
        int high = maxi;
        int ans = 1;
        while(low<=high){
            int mid = (low+high)/2;
            bool yesOrno = check(nums,mid,threshold);
            if(yesOrno){
                ans = mid;
                high = mid - 1;
            } 
            else{
                low = mid+1;
            }
        }
        return ans;
    }
};