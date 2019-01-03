////leetcode 861. 翻转矩阵后的得分
//#include"afx.h"
//class Solution {
//public:
//	int matrixScore(vector<vector<int>>& A) {
//		for (int index = 0; index < A.size(); index++)
//		{
//			if (A[index][0] == 0) convert(A[index]);
//		}
//		vector<int> result;
//		int height = A.size();
//		for (int index = 0; index < A[0].size(); index++)
//		{
//			int sum = 0;
//			for (int j = 0; j < A.size(); j++)
//			{
//				sum += A[j][index];
//			}
//			result.push_back(sum > A.size() - sum ? sum : A.size() - sum);
//		}
//		int value = 0;
//		for (int index = 0; index < result.size(); index++)
//		{
//			value += result[index] * pow(2, result.size() - index - 1);
//		}
//		return value;
//	}
//	void convert(vector<int> &arr)
//	{
//		for (int index = 0; index < arr.size(); index++)
//		{
//			arr[index] = 1 - arr[index];
//		}
//	}
//};