//#include"afx.h"
//class Solution {
//public:
//	int uniquePaths(int m, int n) {
//		if (m == 0 || n == 0) return 0;
//		int res = 1;
//		int step = m + n - 2;
//		int Min = m - 1 < n - 1 ? m - 1 : n - 1;
//		for (int index = 1; index <= Min; index++)
//		{
//			res = res * (step - index) / index;
//		}
//		return res;
//	}
//};