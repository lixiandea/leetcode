//#include"afx.h"
///*
//class Solution {
//public:
//	void rotate(vector<int>& nums, int k) {
//		int len = nums.size();
//		vector<int> res(len);
//		for (int index = 0; index < len; index++) res[(index + k) % len] = nums[index];
//		nums = res;
//	}
//};
//*/
//class Solution {
//public:
//	void rotate(vector<int>& nums, int k) {
//		int len = nums.size();
//		k = (k) % len;
//		for (int index = 0; index <= k; index++)
//		{
//			int tmp = nums[len - 1];
//			nums.insert(nums.begin(), nums[len]);
//			nums.pop_back();
//		}
//	}
//};