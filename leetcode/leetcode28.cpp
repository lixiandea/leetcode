//#include"afx.h"
//class Solution {
//public:
//	int strStr(string haystack, string needle) {
//		if (needle.size() == 0) return true;
//		for (int index = 0; index < haystack.size(); index++)
//		{
//			if (judge(index, haystack, needle)) return index;
//		}
//		return -1;
//	}
//	bool judge(int begin, string &t, string &s)
//	{
//		if (t.size() - begin < s.size()) return false;
//		for (int index = 0; index<s.size(); index++)
//		{
//			if (t[begin + index] != s[index]) return false;
//		}
//		return true;
//	}
//};