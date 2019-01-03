//#include"afx.h"
//class Solution {
//public:
//	string reverseWords(string s) {
//		std::size_t pos1=0, pos2;
//		pos2 = s.find(" ");
//		while (string::npos!= pos2)
//		{
//			reverse(s.begin() + pos1, s.begin() + pos2);
//			pos1 = pos2 + 1;
//			pos2 = s.find(" ", s.begin() + pos1,s.end());
//		}
//		reverse(s.begin() + pos1, s.end());
//		return s;
//	}
//
//};