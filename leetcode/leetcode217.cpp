#include"afx.h"
class Solution {
public:
	bool containsDuplicate(vector<int>& nums) {
		sort(nums.begin(), nums.end());
		int len = nums.size();
		if (len <= 1) return false;
		for (int index = 0; index < len - 1; index++)
		{
			if (nums[index] == nums[index + 1]) return true;
		}
		return false;
	}
};