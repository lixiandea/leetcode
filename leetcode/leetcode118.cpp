//#include"afx.h"
//class Solution {
//public:
//	vector<vector<int>> generate(int numRows) {
//		vector<vector<int>> res;
//		for (int index = 0; index < numRows; index++)
//		{
//			if (index <= 1)
//			{
//				vector<int> cur(index+1, 1);
//				res.push_back(cur);
//			}
//			else
//			{
//				vector<int> cur(index+1 , 1);
//				for (int j = 1; j < index ; j++)
//				{
//					cur[j] = res[index - 1][j - 1] + res[index - 1][j];
//				}
//				res.push_back(cur);
//			}
//		}
//		return res;
//	}
//};
//
//int main()
//{
//	Solution s;
//	s.generate(7);
//}