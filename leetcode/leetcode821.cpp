//#include"afx.h"
//class Solution {
//public:
//	vector<int> shortestToChar(string S, char C) {
//		vector<std::size_t> pos;   //找到所有的C的位置
//		std::size_t find = S.find(C);
//		vector<int> res;
//		while (find != string::npos)
//		{
//			pos.push_back(find);
//			find = S.find(C,find +1);
//		}
//		int len = S.size();
//		for (int index = 0; index < len; index++)
//		{
//			int min = len;
//			for (auto p : pos)
//			{
//				int cur = abs(static_cast<int>( p - index));
//				if (min > cur) min = cur;
//			}
//			res.push_back(min);
//		}
//		return res;
//	}
//};
//
//int main()
//{
//	string S = "jjjjjjjasdasda";
//	char C = 'j';
//	Solution s;
//	s.shortestToChar(S, C);
//}