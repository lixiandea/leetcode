//#include"afx.h"
//class Solution {
//public:
//	int nthUglyNumber(int n, int a, int b, int c) {
//		long ab = std::lcm(a, b);
//		long ac = std::lcm(a, c);
//		long bc = std::lcm(c, b);
//		long abc = std::lcm(ab, c);
//		long tmp = n * a  ;
//		long l = 1;
//		long h = n*a;
//		while (l<h)
//		{
//			long m = l + (h - l) / 2;
//			long k = m / a + m / b + m / c - m / ab - m / bc - m / ac + m / abc;
//			if (k >= n) h = m;
//			else
//			{
//				l = m + 1;
//			}
//		}
//		return l;
//	}
//
//};
//
//int main()
//{
//	int a[4] = { 7,7,7,7 };
//	Solution s;
//	s.nthUglyNumber(a[0], a[1], a[2], a[3]);
//}