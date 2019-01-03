////leetcode 905. °´ÆæÅ¼ÅÅÐòÊý×é
//#include"afx.h"
//class Solution {
//public:
//	vector<int> sortArrayByParity(vector<int>& A) {
//		vector<int> B;
//		for (int index = 0; index < A.size(); index++)
//		{
//			if (A[index] % 2 != 0)
//			{
//				B.push_back(A[index]);
//				A.erase(A.begin() + index);
//				index--;
//			}
//		}
//		for (int i : B) A.push_back(i);
//		return A;
//	}
//};
//
//int main()
//{
//	vector<int> A = { 1,2,3,45 };
//	Solution s;
//	s.sortArrayByParity(A);
//}