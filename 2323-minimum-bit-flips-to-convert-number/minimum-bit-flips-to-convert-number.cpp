class Solution {
public:
    int minBitFlips(int start, int goal) {
        int xor_ = start^goal;
        return __builtin_popcount(xor_);
    }
};