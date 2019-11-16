//#include"afx.h"
//class Solution {
//public:
//	string addBinary(string a, string b) {
//		string tmp;
//		int lenA = a.size();
//		int lenB = b.size();
//		if (lenA < lenB)
//		{
//			tmp = a;
//			a = b;
//			b = tmp;
//		}
//		 lenA = a.size();
//		 lenB = b.size();
//		char c = '0';
//		string res;
//		for (int index = 0; index < lenB; index++)
//		{
//			res.push_back(add(a[lenA - index - 1], b[lenB - index -1], &c));
//		}
//		for ( int index = lenB;index < lenA; index++)
//		{
//			res.push_back(add(a[lenA - index - 1], '0', &c));
//		}
//		if(c=='1')
//		res.push_back(c);
//		reverse(res.begin(), res.end());
//		return res;
//	}
//	char add(char a, char b, char*c)
//	{
//		int res = 0;
//		res = a + b + *c - 48 * 3;
//		if (res < 2)
//		{
//			*c = '0';
//			return res + 48;
//		}
//		else
//		{
//			*c = '1';
//			return res + 48 - 2;
//		}
//	}
//};
//
//int main()
//{
//	string a = "0";
//	string b = "0";
//	Solution s;
//	cout << s.addBinary(a, b);
//	while (true)
//	{
//
//	}
//}