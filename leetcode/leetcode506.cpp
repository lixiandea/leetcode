#include"afx.h"
class Solution {
public:
	vector<string> findRelativeRanks(vector<int>& nums) {
		int len = nums.size();
		vector<string> res(len);
		auto ranks = nums;
		sort(ranks.begin(), ranks.end(), greater<int>());
		for (int j = 0; j < len; j++)
		{
			for (int i = 0; i < len; i++)
			{
				if (ranks[j] == nums[i])
				{
					switch (j)
					{
					case 0:   res[i] = "Gold Medal"; break;
					case 1:   res[i] = "Silver Medal"; break;
					case 2:   res[i] = "Bronze Medal"; break;
					default:
						res[i] = to_string(j+1);
						break;
					}

				}
			}
		}
		return res;
	}
};