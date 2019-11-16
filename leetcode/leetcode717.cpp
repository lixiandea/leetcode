//#include"afx.h"
//class Solution {
//public:
//	bool isOneBitCharacter(vector<int>& bits) {
//		return isOneBitCharacter( bits,  bits.size()-1);
//	}
//	bool isOneBitCharacter(vector<int> & bits, int len)
//	{
//		if (len == 0) return true;
//		if (len == 1)
//		{
//			if (bits[0] == 0) return true;
//			else return false;
//		}
//		if (bits[len-1] == 0)
//		{
//			if (bits[len - 2] == 0) return true;
//			else
//			{
//				return isOneBitCharacter(bits, len - 1)|| isOneBitCharacter(bits, len - 2);
//			}
//		}
//		else
//		{
//			if(bits[len - 2] == 0) return false;
//			else
//			{
//				return isOneBitCharacter(bits, len - 2);
//			}
//		}
//	}
//};
//
//void main()
//{
//	vector<int> bits = { 0 };
//	Solution s;
//	cout<<s.isOneBitCharacter(bits);
//	while (true)
//	{
//
//	}
//}