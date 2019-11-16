//#include"afx.h"
////class Solution {
////public:
////	int subarraySum(vector<int>& nums, int k) {
////		int len = nums.size();
////		if (len == 0) return 0;
////		vector<vector<int>> dp(len, vector<int>(len));
////		dp[0][0] = nums[0];
////		int res = 0;
////		for (int i = 0; i < len; i++)
////		{
////			for (int j = i; j < len; j++)
////			{
////				if (i == j) dp[i][j] = nums[i];
////				else dp[i][j] = dp[i][j - 1] + nums[j];
////			}
////		}
////		for (int i = 0; i < len; i++)
////		{
////			for (int j = i; j < len; j++)
////			{
////				if (dp[i][j] == k)  res++;
////			}
////		}
////		return res;
////	}
////};
//class Solution {
//public:
//	int subarraySum(vector<int> &nums, int k) {
//		int size = nums.size(), res = 0;
//		for (int i = 0; i < size; ++i) {
//			int sum = 0;
//			for (int j = i; j < size; ++j) {
//				sum += nums[j];
//				res += sum == k ? 1 : 0;
//			}
//		}
//		return res;
//	}
//};