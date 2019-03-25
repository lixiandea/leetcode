//#include"afx.h"
//
//class Solution {
//public:
//	vector<int> sumEvenAfterQueries(vector<int>& A, vector<vector<int>>& queries) {
//		vector<bool> isOdd;
//		int sum = 0;
//		vector<int> res;
//		for (auto a : A)
//		{
//			if (a % 2 == 0) {
//				isOdd.push_back(true);
//				sum += a;
//			}
//			else
//			{
//				isOdd.push_back(false);
//			}
//		}
//		for (auto q : queries)
//		{
//			if (!(isOdd[q[0]] ^ (q[1] % 2 == 0)))
//			{
//				if (isOdd[q[0]])
//				{
//					sum += q[1];
//				}
//				else
//				{
//					sum += q[1] + A[q[0]];
//
//				}
//				isOdd[q[0]] = true;
//			}
//			else
//			{
//				isOdd[q[0]] = false;
//			}
//			A[q[0]] += q[1];
//			res.push_back(sum);
//		}
//		return res;
//	}
//};