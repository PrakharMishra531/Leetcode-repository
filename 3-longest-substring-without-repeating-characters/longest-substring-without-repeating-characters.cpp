class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxi = 0;
        for(int i = 0;i<s.size();++i){
            int cnt = 0;
            unordered_map<char,int>mpp;
            for(int j = i;j<s.size();++j){
                auto it = mpp.find(s[j]);
                if(it!=mpp.end())break;
                mpp[s[j]]++;
                cnt++;
                
            }
            mpp.clear();
            maxi = max(maxi,cnt);
        }
        return maxi;
    }
};