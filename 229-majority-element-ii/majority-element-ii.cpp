class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans;
        map<int,int>mpp;
        for(int i=0;i<n;i++){
            mpp[nums[i]]++;
        }
        for(auto element : mpp){
            if(element.second>n/3){
                ans.push_back(element.first);
            }
        }
        return ans;
    }
};