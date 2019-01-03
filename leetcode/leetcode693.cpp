//#include"afx.h"
//class Solution {
//public:
//	bool hasAlternatingBits(int n) {
//		int pre = n % 2;
//		n = n / 2;
//		while (n)
//		{
//			int cur = n % 2;
//			n = n / 2;
//			if (cur == pre) return false;
//			pre = cur;
//		}
//		return true;
//	}
//};
//
//int main()
//{
//	int n = 6;
//	Solution s;
//	s.hasAlternatingBits(n);
//}