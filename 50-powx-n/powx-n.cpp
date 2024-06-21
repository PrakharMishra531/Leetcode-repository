class Solution {
public:
    double myPow(double x, int n) {
        int m = n;
        double ans = 1;
        n = abs(n);
        while(n>0){
            if(n%2 == 1){
                ans *= x;
                n--;
            }
            else{
                n = n/2;
                x=x*x;
            }
        }
        if(m<0)ans=1.0/ans;
        return ans;
    }
};