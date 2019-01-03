//697. 数组的度
#include"afx.h"
#include<map>
class Solution {
public:
	map<int, int> records;
	int findShortestSubArray(vector<int>& nums) {
		for (auto num : nums)
		{
			if (records.count(num) != 0) records[num] ++;
			else
			{
				records.insert(pair<int, int>(num, 1));
			}
		}
		vector<int> maxDegree;
		int max = 0;
		for (auto record : records)
		{
			if (max < record.second)
			{
				maxDegree.clear();
				max = record.second;
				maxDegree.push_back(record.first);
			}
			else
			{
				if(max == record.second) 
					maxDegree.push_back(record.first);
			}
		}
		for (int index = 0; index < maxDegree.size(); index++)
		{
			maxDegree[index] = getShortestLenth(maxDegree[index], nums);
		}
		int min = 10000;
		for (auto num: maxDegree)
		{
			if (num < min) min = num;
		}
		return min;
	}
	int getShortestLenth(int key, vector<int> &nums)
	{
		int begin = 0;
		int end = nums.size();
		for (int index = 0; index < nums.size(); index++)
		{
			if (nums[index] == key) 
			{
				begin = index;
				break;
			}
		}
		for (int index = nums.size() - 1; index >=  begin; index --)
		{
			if (nums[index] == key)
			{
				end = index;
				break;
			}
		}
		return end - begin + 1;
	}
};