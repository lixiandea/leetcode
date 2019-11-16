//#include"afx.h"
//class Solution {
//public:
//	bool isPalindrome(string s) {
//		int i = 0;
//		int j = s.size() - 1;
//		while (i<=j)
//		{
//			while (!generate(s[i]))
//			{
//				if (i == j) return true;
//				i++;
//				
//			} 
//			while (!generate(s[j]))
//			{
//				if (i == j) return true;
//				j--;
//			}
//			
//			if (s[i] != s[j])
//			{
//				return false;
//			}
//			i++;
//			j--;
//		}
//		return true;
//	}
//	bool generate(char &c)
//	{
//		if (isdigit(c)) return true;
//		if (isalpha(c))
//		{
//			if (c > 96) c = c - 97 + 65;
//			return true;
//		}
//		return false;
//	}
//};
//
//void main()
//{
//	Solution s;
//	s.isPalindrome("                 ");
//}