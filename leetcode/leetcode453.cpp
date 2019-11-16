//#include"afx.h"
//class Solution {
//public:
//	int minMoves(vector<int>& nums) {
//		long min = LONG_MAX;
//		int len = nums.size();
//		long sum = 0;
//		for (long num : nums) 
//		{
//			if (num < min) min = num;
//			sum += num;
//		}
//		return sum - min * len;
//	}
//};
//int main()
//{
//	vector<int> nums = { 2147483647 };
//	Solution s;
//	s.minMoves(nums);
//	while (true)
//	{
//
//	}
//}