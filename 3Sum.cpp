class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
	vector<vector<int>> res;
	if (nums.empty()) {
		return res;
	}

    int n = nums.size();
	sort(nums.begin(), nums.end());
	for (int i = 0; i < n; i++) {
		
		if (nums[i] > 0) break;
		if (i > 0 and nums[i] == nums[i-1]) continue;

		int l = i+1, r = n - 1;
		while (l < r) {
			int sum = nums[i] + nums[l] + nums[r];
			if (sum < 0) {
				++l;
			} else if (sum > 0) {
				--r;
			} else {
				res.push_back({nums[i], nums[l], nums[r]});
				int last_l = nums[l], last_r = nums[r];
				while (l < r && nums[l] == last_l) ++l;
				while (l < r && nums[r] == last_r) --r;
			}
		}

	}
	return res;
}
};
