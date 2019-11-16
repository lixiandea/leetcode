//#include"afx.h"
//
//class Solution {
//public:
//	vector<int> addToArrayForm(vector<int>& A, int K) {
//		if (K == 0) return A;
//		else
//		{
//			vector<int> B = int2ArrayForm(K);
//			reverse(B.begin(), B.end());
//			int lenA = A.size();
//			int lenB = B.size();
//			if (lenA < lenB)
//			{
//				vector<int> tmp;
//				tmp = A;
//				A = B;
//				B = tmp;
//			}
//			lenA = A.size();
//			lenB = B.size();
//			int c = 0;
//			vector<int> res;
//			for (int index = 0; index < lenB; index++)
//			{
//				res.push_back(add(A[lenA - index - 1], B[lenB - index - 1], &c));
//			}
//			for (int index = lenB; index < lenA; index++)
//			{
//				res.push_back(add(A[lenA - index - 1], 0, &c));
//			}
//			if (c != 0) res.push_back(c);
//			reverse(res.begin(), res.end());
//			return res;
//		}
//	}
//
//	int add(int a, int b, int *c)
//	{
//		int res = 0;
//		res = a + b + *c ;
//		int tmp1 = res / 10;
//		int tmp2 = res % 10;
//		*c = tmp1;
//		return tmp2;
//	}
//	vector<int> int2ArrayForm(int k)
//	{
//		vector<int> res;
//		while (k!=0)
//		{
//			int t = k % 10;
//			k = k / 10;
//			res.push_back(t);
//		}
//		return res;
//	}
//};
//
//int main()
//{
//	vector<int> a = {9,9,9,9,9,9,9,9,9,9,9, };
//	int b =1;
//	Solution s;
//	vector<int> res =  s.addToArrayForm(a, b);
//	for (auto c : res)
//	{
//		cout << c;
//	}
//	while (true)
//	{
//
//	}
//}