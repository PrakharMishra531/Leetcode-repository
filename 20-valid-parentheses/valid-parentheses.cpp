class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        for(int i = 0;i<s.size();++i){
            if(s[i] == '{' || s[i] == '[' || s[i] == '('){
                st.push(s[i]);
            }
            else{
                if(!st.empty()){
                    char x = st.top();
                    st.pop();
                    if(x == '{' && s[i] != '}') return false;
                    else if(x == '(' && s[i] != ')') return false;
                    else if(x == '[' && s[i] != ']') return false;
                }
                else return false;
            }
        }
        if(!st.empty())return false;
        return true;
    }
};