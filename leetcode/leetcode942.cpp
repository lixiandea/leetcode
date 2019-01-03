//#include"afx.h"
//class Solution {
//public:
//	vector<int> diStringMatch(string S) {
//		vector<int> result(S.size() + 1);
//		int min = 0, max = S.size();
//		for (int index = 0; index < result.size() - 1; index++)
//		{
//			if (S[index] == 'I') result[index] = min++;
//			else
//			{
//				result[index] = max--;
//			}
//		}
//		result[result.size() - 1] = min;
//		return result;
//		
//	}
//};
//
//int main()
//{
//	string S = "IDID";
//	Solution s;
//	s.diStringMatch(S);
//}
