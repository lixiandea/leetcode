//#include"afx.h"
//class Solution {
//public:
//	int maxProfit(vector<int>& prices) {
//		int len = prices.size();
//		if (len <= 1) return 0;
//		int flag = 0;        //0代表没数据，1代表有数据
//		int res = 0;
//		int curPrices = 0;
//		if (prices[0] < prices[1])
//		{
//			flag = 1;
//			curPrices = prices[0];
//		}
//		for (int index = 0; index < len-1; index++)
//		{
//			if (flag)
//			{
//				if (prices[index] >= prices[index + 1])
//				{
//					res += prices[index] - curPrices;
//					flag = 0;
//				}
//			}
//			else
//			{
//				if (prices[index] < prices[index + 1])
//				{
//					curPrices = prices[index];
//					flag = 1;
//				}
//			}
//		}
//		if (flag && curPrices < prices[len - 1]) res += prices[len - 1] - curPrices;
//		return res;
//	}
//};