//#include"afx.h"
//class Solution {
//public:
//	string countAndSay(int n) {
//		string res = "1";
//		if (n == 1) return "1";
//		else
//		{
//			for (int index = 1; index < n; index++)
//			{
//				res = describe(res);
//			}
//		}
//		return res;
//	}
//	string describe(string str)
//	{
//		string res;
//		int len = str.size();
//		char cur = str[0];
//		int count = 1;
//		for(int index = 1; index< len; index ++ )
//		{
//			if (str[index] != cur)
//			{
//				res.push_back(count + 48);
//				res.push_back(cur);
//				cur = str[index];
//				count = 1;
//			}
//			else
//			{
//				count++;
//			}
//		}
//		res.push_back(count + 48);
//		res.push_back(cur);
//		return res;
//	}
//};