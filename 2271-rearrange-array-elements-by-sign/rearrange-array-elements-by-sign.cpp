class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>v_even;
        vector<int>v_odd;
 	for (int i = 0; i < nums.size(); i++) {
		if (nums[i] >= 0) {
			v_even.push_back(nums[i]);
		}
	}

	for (int i = 0; i < nums.size(); i++) {
		if (nums[i] < 0) {
			v_odd.push_back(nums[i]);
		}
	}
	int p = 0, q = 0;
	for (int i = 0; i < nums.size(); i++) {
		if (i % 2 == 0) {
			nums[i] = v_even[p];
			if (p < v_even.size()) {
				p++;
			}

		}
	}
	for (int i = 0; i < nums.size(); i++) {
		if (i % 2 != 0) {
			nums[i] = v_odd[q];
			if (q < v_odd.size()) q++;

		}
	}
        return nums;
    }
};