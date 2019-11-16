//#include"afx.h"
//class Solution {
//public:
//	string convertToBase7(int num) {
//		string res;
//		long N = num;
//		if (num == 0) return "0";
//		char flag;
//		if (num < 0)
//		{
//			 flag = '-';
//			N = -1 * N;
//		}
//		else flag = NULL;
//		while (N)
//		{
//			int left = N % 7;
//			res.push_back(left+48);
//			N = N / 7;
//		}
//		if (flag) res.push_back(flag);
//		reverse(res.begin(), res.end());
//		return res;
//	}
//};
//
//int main()
//{
//	cout << Solution().convertToBase7(-101);
//	while (true)
//	{
//
//	}
//}