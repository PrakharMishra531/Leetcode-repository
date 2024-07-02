class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int cnt = 0;
        for(int i = 0;i<s.size();++i){
            if(s[i] == '1')cnt++;
        }
        for(int i = 0;i<s.size()-1;++i){
            if(cnt>1) s[i] = '1';
            else s[i] = '0';
            cnt--;
        }
        s[s.size()-1]='1';
        return s;
    }
};