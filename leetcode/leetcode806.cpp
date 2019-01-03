//#include"afx.h"
//class Solution {
//public:
//	vector<int> numberOfLines(vector<int>& widths, string S) {
//		vector<int> res(2);
//		int cur = 0;
//		res[0] = 1;
//		for (int i : S)
//		{
//			cur += widths[i-97];
//			if (cur > 100)
//			{
//				res[0]++;
//				cur = widths[i - 97];
//			}
//
//		}
//		res[1] = cur;
//		return res;
//
//	}
//};
//
//int main()
//{
//	vector<int> widths = { 4, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10};
//	string S = "bbbcccdddaaa";
//	Solution s;
//	s.numberOfLines(widths, S);
//}