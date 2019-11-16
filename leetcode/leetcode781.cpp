//#include"afx.h"
//class Solution {
//public:
//	int numRabbits(vector<int>& answers) {
//		int t[1000] = { 0 };
//		int res = 0;
//		for (auto answer : answers)
//		{
//			t[answer]++;
//		}
//		for (int index = 0; index < 1000; index++)
//		{
//			res += (t[index] / (index + 1)*(index + 1)) + (t[index] %(index + 1) > 0? index + 1: 0);
//		}
//		return res;
//	}
//};
//
//int main()
//{
//	vector<int> answers = { 0,0,0 };
//	Solution s;
//	s.numRabbits(answers);
//	while (true)
//	{
//
//	}
//}