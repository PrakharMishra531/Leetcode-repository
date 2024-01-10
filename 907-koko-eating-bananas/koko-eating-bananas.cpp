class Solution {
public:
    long long reqTime(vector<int>&piles,long long hourly){
        long long totalhrs = 0;
        for(int i = 0;i<piles.size();i++){
            totalhrs += ceil((double)piles[i]/(double)hourly);
        }
        return totalhrs;
    }

    long long minEatingSpeed(vector<int>& piles, int h) {
        long long maxi = INT_MIN;
        for(int i = 0;i<piles.size();i++){
            maxi = max(maxi,static_cast<long long>(piles[i]));
        }
        long long low = 1;
        long long high = maxi;
        long long ans = INT_MAX;
        while(low<=high){
            long long mid = low + (high - low) / 2;
            long long time = reqTime(piles,mid);
            if(time<=h){
                ans = min(ans,mid);
                high = mid-1;
            }
            else{
                low = mid+1;
            }
            
        }
      return ans; 
    }
};