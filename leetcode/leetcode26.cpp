//#include"afx.h"
//class Solution {
//public:
//	int removeDuplicates(vector<int>& nums) {
//		if (nums.size() == 0) return 0;
//		int res = 1;
//		for (auto num : nums)
//		{
//			if (num != nums[res - 1])
//			{
//				nums[res] = num;
//				res++;
//			}
//				
//		}
//		return res;
//	}
//};