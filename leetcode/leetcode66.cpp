//#include"afx.h"
//class Solution {
//public:
//	vector<int> plusOne(vector<int>& digits) {
//		int len = digits.size();
//		digits[len - 1] ++;
//		for (int index = len - 1; index > 0; index--)
//		{
//			if (digits[index] == 10)
//			{
//				digits[index - 1] ++;
//				digits[index] = 0;
//			}
//		}
//		if (digits[0] == 10)
//		{
//			digits[0] = 0;
//			digits.insert(digits.begin(), 1);
//		}
//		return digits;
//	}
//};
//
//
//int main()
//{
//	Solution s;
//	vector<int> digits = { 1,2,3 };
//	s.plusOne(digits);
//}