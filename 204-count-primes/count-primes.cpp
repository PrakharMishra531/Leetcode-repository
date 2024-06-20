class Solution {
public:
    int countPrimes(int n) {
        long long prime[n+1];
        for(long long x=2;x<=n;++x)prime[x]=1;
        for(long long i = 2;i<=n;++i){
            if(prime[i]==1){
                for(long long j = i*i;j<=n;j+=i){
                    prime[j]=0;
                }
            }
        }
        int cnt = 0;
        for(int i = 2;i<n;++i){
            if(prime[i]==1)cnt++;
        }
        return cnt;
}
};