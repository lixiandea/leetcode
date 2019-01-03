//#include"afx.h"
//class Solution {
//public:
//	int findPeakElement(vector<int>& nums) {
//		int min = 0;
//		int max = nums.size() - 1;
//		if (nums.size() == 1) return 0;
//		if (nums[max] > nums[max - 1]) return max;
//		if (nums[min] > nums[min + 1]) return min;
//		while (max!=min)
//		{
//			int cur = (max + min) / 2;
// 			if (nums[cur] > nums[cur - 1] && nums[cur] > nums[cur + 1]) return cur;
//			else
//			{
//				if (nums[cur] > nums[cur - 1]) min = cur;
//				if (nums[cur] < nums[cur - 1] ) max = cur;
//			}
//		}
//	}
//};
//
//int main()
//{
//	vector<int> nums = { 1,2,1,2,1 };
//	Solution s;
//	s.findPeakElement(nums);
//}
