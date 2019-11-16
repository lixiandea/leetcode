//#include"afx.h"
//class Solution {
//public:
//	int fib(int N) {
//		int a[30] = { 0 };
//		if (N == 0) { a[N] = 0;  return 0; }
//		if (N == 1) {
//			a[1] = 1; return 1;
//		}
//
//		if (a[N] != 0) return a[N];
//		else
//		{
//			a[N] = fib(N - 1) + fib(N - 2);
//			return a[N];
//		}
//	}
//};