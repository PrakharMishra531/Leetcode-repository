class Solution {
public:
    int balancedStringSplit(string s) {
        int r = 0,l = 0;
        int ans=0;
        for(int i = 0;i<s.size();++i){
            if(s[i] == 'R') r++;
            else if(s[i]=='L') l++;
            if(r == l)ans++;
        }
        return ans;
    }
};