//#include"afx.h"
//class Solution {
//public:
//	void moveZeroes(vector<int>& nums) {
//		int len = nums.size();
//		int count = 0;
//		for (int index = 0; index < len- count; index++)
//		{
//			if (nums[index] == 0)
//			{
//				nums.erase(nums.begin() + index);
//				nums.push_back(0);
//				count++;
//				index--;
//			}
//		}
//	}
//};
//
//void main()
//{
//	Solution s;
//	vector<int> nums = { 0,2,1,3,6,0,8 };
//	s.moveZeroes(nums);
//}