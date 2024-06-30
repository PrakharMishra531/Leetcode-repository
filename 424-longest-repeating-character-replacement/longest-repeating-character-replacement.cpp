class Solution {
public:
    int characterReplacement(string s, int k) {
    map<char, int> mpp;
    int l = 0, r = 0, maxlen = 0, maxCount = 0;
    while (r < s.size()) {
        mpp[s[r]]++;
        maxCount = max(maxCount, mpp[s[r]]);
        if (r - l + 1 - maxCount > k) {
            mpp[s[l]]--;
            l++;
        }
        maxlen = max(maxlen, r - l + 1);
        r++;
    }
    return maxlen;
}
};