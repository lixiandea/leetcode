//#include"afx.h"
//class Solution {
//	
//public:
//	vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
//		vector<int> res;
//		int flag1[100000] = { 0 };
//		int flag2[100000] = { 0 };
//		for (int num : nums1)
//		{
//			flag1[num]=1;
//		}
//		for (int num : nums2)
//		{
//			flag2[num]=1;
//		}
//		for (int index = 0; index < 100000; index++)
//		{
//			if (flag1[index] > 0&&flag2[index]>0)
//				res.push_back(index);
//		}
//		return res;
//	}
//};