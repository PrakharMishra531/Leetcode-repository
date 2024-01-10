class Solution {
public:
    int possible(vector<int>&bloomDay,int day,int m,int k){
        int cnt = 0;
        int bloom = 0;
        for(int i = 0;i<bloomDay.size();i++){
            if(bloomDay[i]<= day){
                cnt++;
                if(cnt == k){
                    bloom++;
                    cnt = 0;
                }
            }
            else{
                cnt = 0;
            }
        }
        bloom += (cnt/k);
        if(bloom>=m) return true;
        else return false;
    }

    int minDays(vector<int>& bloomDay, int m, int k) {
        int maxi = INT_MIN;
        int mini = INT_MAX;
        for(int i =0;i<bloomDay.size();i++){
            maxi = max(maxi,bloomDay[i]);
            mini = min(mini,bloomDay[i]);
        }
        int low = mini;
        int high = maxi;
        int ans = -1;
        while(low<=high){
            int mid = (low+high)/2;
            if(possible(bloomDay,mid,m,k)==true){
                ans = mid;
                high = mid-1;
            }
            else low = mid+1;
        }
    return ans;
    }
};