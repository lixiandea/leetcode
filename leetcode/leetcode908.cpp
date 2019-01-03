//#include"afx.h"
//class Solution {
//public:
//	int smallestRangeI(vector<int>& A, int K) {
//		//1、找到A的最大值和最小值
//		int max = 0;
//		int min = 10000;
//		for (auto a : A)
//		{
//			if (a > max) max = a;
//			if (a < min) min = a;
//		}
//		if (min + K > max - K) return 0;
//		else
//		{
//			return max - min - 2 * K;
//		}
//	}
//};