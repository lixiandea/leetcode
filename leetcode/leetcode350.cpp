//#include"afx.h"
//class Solution {
//public:
//	vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
//		vector<int> res;
//		for (auto num : nums1)
//		{
//			int len = nums2.size();
//			for (int index = 0; index < len; index++)
//			{
//				if (nums2[index] == num)
//				{
//					res.push_back(num);
//					nums2.erase(nums2.begin() + index);
//					break;
//				}
//			}
//		}
//		return res;
//	}
//};