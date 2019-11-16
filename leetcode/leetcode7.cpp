//#include"afx.h"
//class Solution {
//public:
//	int reverse(int x) {
//		long long flag = x > 0 ? 1 : -1;
//		long long k = x * flag;
//		vector<int> nums = getNums(k);
//		long long res = 0;
//		int len = nums.size();
//		for (int index = 0; index < len; index++)
//		{
//			res = res * 10 + nums[index];
//		}
//		res = res * flag;
//		if (res > INT32_MAX || res< INT32_MIN) return 0;
//		else
//		{
//			return static_cast<int>(res);
//		}
//	}
//	vector<int> getNums(long long x)
//	{
//		vector<int> res;
//		while (x>0)
//		{
//			res.push_back(x%10);
//			x = x / 10;
//		}
//		return res;
//	}
//};
//
//void main()
//{
//	int x = -2147483648;
//	Solution s;
//	int res = s.reverse(x);
//}