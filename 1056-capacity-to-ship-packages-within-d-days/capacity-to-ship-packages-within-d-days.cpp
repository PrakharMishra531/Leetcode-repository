class Solution {
public:
    int check(vector<int>& weights,int mid){
        int day = 1;
        int load = 0;
        for(int i = 0;i<weights.size();i++){
            if(load + weights[i] > mid) {
            day += 1; 
            load = weights[i]; 
        }
        else {
            load += weights[i];
        }
    }
    return day;
}
        
    

    int shipWithinDays(vector<int>& weights, int days) {
        int maxi = INT_MIN;
        int sum = 0;
        for(int i = 0; i<weights.size();i++){
            sum+=weights[i];
            maxi = max(maxi,weights[i]);
        }
        int low = maxi;
        int high = sum;
        int ans;
        while(low<=high){
            int mid = (low+high)/2;
            int noOfdays = check(weights,mid);
            if(noOfdays<= days){
                ans = mid;
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        return ans;
    }
};