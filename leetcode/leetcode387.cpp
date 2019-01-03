//#include"afx.h"
//class Solution {
//public:
//	int firstUniqChar(string s) {
//		int count[26] = { 0 };
//		for (int i : s)
//		{
//			count[i - 97] ++;
//		}
//		int len = s.size();
//		for (int index = 0; index<len;index++)
//		{
//			if (count[s[index] - 97] == 1) return index;
//		}
//		return -1;
//	}
//};
//
//int main()
//{
//	string s = "leetcode";
//	Solution S;
//	S.firstUniqChar(s);
//}