//#include"afx.h"
//class Solution {
//public:
//	int myAtoi(string str) {
//		int typeFlag;	
//		long long  res;
//		int len = str.size() - 1;
//		int index = 0;
//		while (str[index] == ' ')
//		{
//			index++;
//			if (index > len) res = 0;
//		}       //获得开头的只含有数字的字符串的开始
//		if (str[index] == '-' || isdigit(str[index]) || str[index] == '+')   //判断是负号开头还是数字开头
//		{
//			if (str[index] == '-')
//			{
//				typeFlag = -1;
//				res = 0;
//			}             //负号开头就带-1
//			else
//			{
//				if (str[index] == '+')
//				{
//					typeFlag = 1;
//					res = 0;
//				}             //负号开头就带-1
//				else
//				{
//					typeFlag = 1;
//					res = str[index] - 48;
//				}
//			}
//		}
//		else    //都不是就返回0 
//		{
//			return 0;
//		}
//		for (index = index + 1; index <= len; index++)
//		{
//			if (!isdigit(str[index])) break;      //不是数字就算了
//			else
//			{
//				//cout << str[index] - 48;
//				res = res * 10 + str[index] - 48;		
//				if (typeFlag == -1 && res > static_cast<long long>(INT_MAX) +1) return INT_MIN;
//				if (typeFlag == 1 && res > INT_MAX) return  INT_MAX;
//			}
//		}
//		return res*typeFlag;
//	}
//};
//
//int main()
//{
//	Solution s;
//	s.myAtoi("-000000000000000000000000000000000000000000000000001");
//	//cout << INT_MAX + 1;
//	while (true)
//	{
//
//	}
//}