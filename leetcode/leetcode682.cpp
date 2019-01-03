#include"afx.h"
class Solution {
public:
	int calPoints(vector<string>& ops) {
		vector<int> scores;
		int res = 0;
		for (auto c : ops)
		{
			if (c == "+")
			{
				scores.push_back(scores[scores.size() - 2] + scores[scores.size() - 1]);
				continue;
			}
			if (c == "D") 
			{
				scores.push_back(2* scores[scores.size() - 1]);
				continue;
			}
			if (c == "C")
			{
				scores.pop_back();
				continue;
			}
			scores.push_back(string2int(c));
		}
		for (int i : scores)
		{
			res += i;
		}
		return res;
	}

	int string2int(string stringInt)
	{
		int res = 0;
		int flag = 1;
		for (int index = 0; index < stringInt.size(); index++)
		{
			if (stringInt[index] == '-')
			{
				flag = -1;
				continue;
			}
			res = res * 10 + stringInt[index] - 48;
		}
		return res*flag;
	}
};