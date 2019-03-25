//#include"afx.h"
//
//class Solution {
//public:
//	vector<int> sortedSquares(vector<int>& A) {
//		for (int index = 0; index < A.size(); index++)
//		{
//			A[index] *= A[index];
//		}
//		sort(A.begin(),A.end());
//		return A;
//	}
//};
//
//void main()
//{
//	vector<int> A = { -7,-3,2,3,11 };
//	Solution s;
//	vector<int> B = s.sortedSquares(A);
//}