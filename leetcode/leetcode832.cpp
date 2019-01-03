////leetcode 832. ·­×ªÍ¼Ïñ
//#include"afx.h"
//class Solution {
//public:
//	vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {
//		for (int index = 0; index < A.size(); index++)
//		{
//			convertVec(A[index]);
//			
//		}
//		return A;
//	}
//
//	void convertVec(vector<int> &a)
//	{
//		for (int index = 0; index < a.size(); index++)
//		{
//			a[index] = 1- a[index];
//		}
//		reverse(a.begin() , a.end() );
//	}
//};
//
//int main()
//{
//	vector<vector<int>> A = { {1, 1, 0}, {1, 0, 1}, {0, 0, 0} };
//	Solution s;
//	s.flipAndInvertImage(A);
//}