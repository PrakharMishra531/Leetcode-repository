class Solution {
public:
    int maximum69Number (int num) {
        vector<int>arr;
        while(num){
            int x = num%10;
            num = num/10;
            arr.push_back(x);
        }
        reverse(arr.begin(),arr.end());
        int flag = 0;
        for(int i = 0;i<arr.size();++i){
            if(flag == 0 && arr[i]==6){
                arr[i]=9;
                flag = 1;
            }
        }
        int ans = 0;
        for(int i =0;i<arr.size();++i){
            ans = ans*10+arr[i];
        }
        return ans;
    }
};