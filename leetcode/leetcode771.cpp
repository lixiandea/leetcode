////771. 宝石与石头
//#include"afx.h"
//class Solution {
//public:
//	int numJewelsInStones(string J, string S) {
//		int count = 0;
//		for(auto c : S)
//		{
//			if (judge(c, J)) count++;
//		}
//		return count;
//	}
//	bool judge(char c, string J)
//	{
//		for (auto j : J)
//		{
//			if (j == c)
//			{
//				return true;
//			}
//		}
//		return false;
//	}
//};