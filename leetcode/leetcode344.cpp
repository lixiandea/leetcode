#include"afx.h"
class Solution {
public:
	string reverseString(string s) {
		int length = s.size();
		for (int index = 0; index < length / 2; index++)
		{
			char temp = s[index];
			s[index] = s[length - index - 1];
			s[length - index - 1] = temp;
		}
		return s;
	}
};