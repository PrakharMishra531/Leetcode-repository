class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l=0,r=0,maxnum = 0;
        int n = s.size();
        unordered_map<char,int>hash;
        while(r<n){
            if(hash.find(s[r])!=hash.end()){
                if(hash[s[r]]>=l){
                    l = hash[s[r]]+1;
                }
            }
            int len = r-l+1;
            maxnum=max(maxnum,len);
            hash[s[r]]=r;
            r++;
        }
        return maxnum;
    }
};