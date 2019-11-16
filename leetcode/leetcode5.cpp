//#include"afx.h"
//class Solution {
//public:
//	string longestPalindrome(string s) {
//		if (s.size() == 0) return "";
//		int len = s.size();
//		if (len < 2) return s;
//		int maxLen = 0;
//		string str;
//		int low = 0;
//		int high = 0;
//		for (int i = 1; i < len ; i++)
//		{
//			int len1 = expandCenter(s, i, i);
//			int len2 = expandCenter(s, i-1, i);
// 			if (len1 > maxLen) { 
//				if (len2 > len1)
//				{
//					maxLen = len2;
//					low = i  - len2 /2;
//					high = i - 1 + len2 / 2;
//				}
//				else
//				{
//					maxLen = len1;
//					low = i  - (len1 - 1) / 2;
//					high = i  + (len1 - 1) / 2;
//				}
//				
//			}
//			if (len2 > maxLen)
//			{
//				maxLen = len2;
//				low = i - len2 / 2;
//				high = i - 1 + len2 / 2;
//			}
//			str = s.substr(low, maxLen);
//		}
//		return str;
//
//	}
//	int expandCenter(string s, int begin, int end)
//	{
//		int len = 0;
//		if(s[begin] == s[end]) len = end - begin + 1;
//		else
//		{
//			return 0;
//		}
//		int max = begin > s.size() - 1 - end ? begin : end;
//		
//		for (int i = 1; i <= begin; i++)
//		{
//			if (s[begin - i] == s[end + i]) len += 2;
//			else
//			{
//				return len;
//			}
//		}
//		return len;
//	}
//};
//
//
//int main()
//{
//	string s;
//	while(cin >> s)
//	{
//		Solution So;
//		cout << So.longestPalindrome(s) << endl;
//	}
//}