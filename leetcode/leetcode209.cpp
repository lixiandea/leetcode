#include"afx.h"
class Solution {
public:
	int minSubArrayLen(int s, vector<int>& nums) {
		int len = nums.size();
		int minLen = 1000000;
		bool flag = false;
		for (int index = 0; index < len; index++)
		{
			int curSum = nums[index];
			int curLen = 1;
			for (curLen; curLen + index < len &&curSum < s && curLen < minLen; curLen++)
			{
				curSum += nums[index + curLen];
			}
			if (curSum >= s ) {
				flag = true;
				if(curLen<minLen)
				minLen = curLen;
			}
		}
		return flag? minLen: 0;
	}
};