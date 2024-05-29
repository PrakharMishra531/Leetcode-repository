class Solution {
public:
    int divide(int dividend, int divisor) {
        if(dividend == divisor)return 1;
        bool sign = true;
        if(dividend>=0 && divisor<0)sign = false;
        if(dividend<=0 && divisor>0)sign = false;
        long quotient = 0;
        long n = abs(dividend);
        long d = abs(divisor);
        while(n>=d){
            int cnt = 0;
            while(n >= (d<<(cnt+1))){
                cnt++;
            }
            quotient+= (1<<cnt);
            n = n - (d<<cnt);
        }
        if(quotient == (1<<31) && sign) return INT_MAX;
        if(quotient == (1<<31) && !sign) return INT_MIN;
        return (sign)?quotient:(-quotient);
    }
};