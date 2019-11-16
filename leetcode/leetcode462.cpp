//#include"afx.h"
//class Solution {
//public:
//	int minMoves2(vector<int>& nums) {
//		long minDis = INT_MAX;
//		sort(nums.begin(), nums.end());
//		int len = nums.size();
//		if (len % 2 != 0) return calDistances(nums, nums[len / 2]);
//		else
//		{
//			return min(calDistances(nums, nums[len / 2]), calDistances(nums, nums[len / 2 - 1]));
//		}
//	}
//	long calDistances(vector<int> & nums, int k)  //calculate sum(num - k)
//	{
//		long dis = 0;
//		for (int num : nums)
//		{
//			dis += num > k ? (num - k) : (k - num);
//		}
//		return dis;
//	}
//};