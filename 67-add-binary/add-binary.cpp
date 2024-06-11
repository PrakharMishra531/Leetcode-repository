#include <string>
#include <algorithm>

class Solution {
public:
    std::string addBinary(std::string a, std::string b) {
        int n = a.size();
        int m = b.size();
        std::string str = "";
        int i = n - 1;
        int j = m - 1;
        int carry = 0;

        while (i >= 0 || j >= 0) {
            int sum = carry;
            if (i >= 0) sum += (a[i--] - '0');
            if (j >= 0) sum += (b[j--] - '0');

            str += (sum % 2) + '0'; // Append the least significant bit of the sum

            carry = sum / 2; // Set carry to 1 if sum is 2, otherwise 0
        }

        if (carry) str += '1'; // If there's a carry after the last addition

        std::reverse(str.begin(), str.end()); // Reverse the string to get the correct binary representation

        return str;
    }
};
