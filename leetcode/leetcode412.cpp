//#include"afx.h"
//class Solution {
//	vector<string> res;
//public:
//	vector<string> fizzBuzz(int n) {
//		for (int index = 1; index <= n; index++)
//		{
//			generate(index);
//		}
//		return res;
//	}
//	void generate(int n)
//	{
//		string s = "";
//		if (n % 3 == 0) s += "Fizz";
//		if (n % 5 == 0) s += "Buzz";
//		if (s != "") res.push_back(s);
//		else
//		{
//			res.push_back(to_string(n));
//		}
//	}
//};