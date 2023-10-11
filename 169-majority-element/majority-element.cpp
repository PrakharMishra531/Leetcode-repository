class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        int largest=INT_MIN;
        vector<int>v;
        unordered_map<int,int>mpp;


        for(int i=0;i<n;i++){
            mpp[nums[i]]++;
        }
        for(auto x:mpp){
            if(x.second>n/2){
                v.push_back(x.first);
            }
        }
        sort(v.begin(),v.end());

        return v[v.size()-1];
    }
};