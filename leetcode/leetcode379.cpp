//使用python完成了大部分的工作，突破了类型的限制和递归深度


//#include"afx.h"
//class Solution {
//public:
//	int integerReplacement(int n) {
//		long long N = n;
//		return calculateReplacement(N, n);
//	}
//	int calculateReplacement(long long N, int n)
//	{
//		if (N == 1) return 0;
//		if (N == 2) return 1;
//		if (N == 3) return 2;
//		long res = 0;
//
//		if (N % 2 == 0)
//		{
//			res = 1 + integerReplacement(N / 2);
//		}
//		else
//		{
//			res = 1 + min(calculateReplacement(N - 1, n), calculateReplacement(N + 1, n));
//		}
//		if (res > n + 2) return INT_MAX;
//		else
//		{
//			return res;
//		}
//	
//	}
//};
//
//
//int main()
//{
//	Solution s;
//	cout<<s.integerReplacement(2147483647);
//	while (true)
//	{
//
//	}
//}