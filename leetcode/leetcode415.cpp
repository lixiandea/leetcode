//#include"afx.h"
//class Solution {
//public:
//	string addStrings(string num1, string num2) {
//		string tmp;
//		int lenA = num1.size();
//		int lenB = num2.size();
//		if (lenA < lenB)
//		{
//			tmp = num1;
//			num1 = num2;
//			num2 = tmp;
//		}
//		lenA = num1.size();
//		lenB = num2.size();
//		char c = '0';
//		string res;
//		for (int index = 0; index < lenB; index++)
//		{
//			res.push_back(add(num1[lenA - index - 1], num2[lenB - index - 1], &c));
//		}
//		for (int index = lenB; index < lenA; index++)
//		{
//			res.push_back(add(num1[lenA - index - 1], '0', &c));
//		}
//		if (c == '1')
//			res.push_back(c);
//		reverse(res.begin(), res.end());
//		return res;
//	}
//	char add(char a, char b, char*c)
//	{
//		int res = 0;
//		res = a + b + *c - 48 * 3;
//		int tmp1 = res / 10;
//		int tmp2 = res % 10;
//		*c = tmp1+48;
//		return tmp2 + 48;
//	}
//};
//int main()
//{
//	string a = "99999999999999999999999";
//	string b = "11111";
//	Solution s;
//	cout << s.addStrings(a, b);
//	while (true)
//	{
//
//	}
//}