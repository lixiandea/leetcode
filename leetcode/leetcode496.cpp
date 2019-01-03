#include"afx.h"
class Solution {
public:
	vector<int> nextGreaterElement(vector<int>& findNums, vector<int>& nums) {
		int len = findNums.size();
		if (len == 0) return vector<int>();
		vector<int> res(len);
		for (int index = 0; index < len; index++)
		{
			res[index] = findFirstGreat(findNums[index], nums);
		}
		return res;

	}
	int findFirstGreat(int num, vector<int>& nums)
	{
		int len = nums.size();
		int index = 0;
		for (index; index < len; index++)
		{
			if (nums[index] == num) break;
		}
		index++;
		for (index; index < len; index++)
		{
			if (nums[index] > num) return nums[index];
		}
		return -1;
	}
};