//#include"afx.h"
//class Solution {
//public:
//	int minDeletionSize(vector<string>& A) {
//		int count = 0;
//		for (int index = 0; index < A[0].size(); index++)
//		{
//			string str;
//			for (int j = 0; j < A.size(); j++)
//			{
//				str += A[j][index];
//			}
//			if (!Judge(str)) count++;
//		}
//		return count;
//
//	}
//	bool Judge(string str)
//	{
//		for (int index = 0; index < str.size() - 1; index++)
//		{
//			if (str[index] > str[index + 1]) return false;
//		}
//		return true;
//	}
//};