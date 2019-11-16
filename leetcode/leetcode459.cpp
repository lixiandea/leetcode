#include"afx.h"
class Solution {
public:
	bool repeatedSubstringPattern(string s) {
		string cur = s;
		s.append(s);
		s.pop_back();
		s.erase(s.begin());
		if (s.find(cur) == string::npos) return false;
		else
		{
			return true;
		}
	}
};