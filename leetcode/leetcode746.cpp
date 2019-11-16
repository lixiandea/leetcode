#include"afx.h"
class Solution {
public:
	int minCostClimbingStairs(vector<int>& cost) {
		vector<int> allCost;
		int len = cost.size();
		allCost.push_back(0);
		allCost.push_back(0);
		for (int i = 2; i < len; i++)
		{
			allCost.push_back(min(allCost[i - 1] + cost[i - 1], allCost[i - 2] + cost[i - 2]));
		}
		return allCost[len];
	}
};