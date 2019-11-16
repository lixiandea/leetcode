//#include"afx.h"
//class Solution {
//public:
//	int kConcatenationMaxSum(vector<int>& arr, int k) {
//		constexpr long kMod = 1e9 + 7;
//		if (k < 3) return maxofArr(arr, k) % kMod;
//		else
//		{
//			long ans1 = maxofArr(arr, 1);
//			long sum = accumulate(arr.begin(), arr.end(), 0L);
//			long ans2 = maxofArr(arr, 2);
//			return max({ ans1, ans2 + (k - 2)*sum, ans2 }) % kMod;
//		}
//	}
//	int maxofArr(vector<int>&arr, int k)
//	{
//		long sum = 0;
//		long ans = 0;
//		int len = arr.size();
//		for (int i = 0; i < k; i++)
//		{
//			for (int j = 0; j < len; j++)
//			{
//				sum = max(0L, sum + arr[j]);
//				ans = max(ans, sum);
//			}
//		}
//		return ans;
//	}
//};
//
//int main()
//{
//	vector<int> arr = {1,2};
//	int k = 3;
//	Solution s;
//	s.kConcatenationMaxSum(arr, k);
//}