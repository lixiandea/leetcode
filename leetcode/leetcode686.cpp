#include"afx.h"
class Solution {
public:
	int repeatedStringMatch(string A, string B) {
		int Blen = B.size();
		string tmp = A;
		for (int index = 0; index < Blen; index++)
		{
			tmp += A;
			if (tmp.find(B) != -1) return index+1;
		}
	}
};