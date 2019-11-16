//#include"afx.h"
//class Solution {
//public:
//	int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
//		int len = cost.size();
//		if (len == 1) return gas[0]>=cost[0]?0:-1;
//		for (int i = 0; i < len; i++)
//		{
//			int sum = gas[i];
//			int j = 0;
//			for (j; j < len; j++)
//			{
//				int index = (i + j) % len;
//				sum -= cost[index];
//				if (sum < 0) break;
//				else
//				{
//					sum += gas[(index+1)%len];
//				}
//			}
//			if (j == len && sum >= 0) return i;
//		}
//		return -1;
//		
//	}
//	
//};
//
//int main()
//{
//	vector<int> gas = { 3,3,4 };
//	vector<int> cost = { 3,4,4 };
//	Solution s;
//	cout<<s.canCompleteCircuit(gas, cost);
//	while (true)
//	{
//
//	}
//}