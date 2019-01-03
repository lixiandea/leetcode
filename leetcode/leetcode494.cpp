////#include"afx.h"
////class Solution {
////public:
////	vector<int> maxs;
////	vector<int> mins;
////	int findTargetSumWays(vector<int>& nums, int S) {
////		generateMaxAndMin(nums);
////		return findWays(nums, S, 0);
////	}
////	int findWays(vector<int> nums, int target, int begin)
////	{
////		if (begin == nums.size())
////			if( target == 0)
////				return 1;
////			else
////			{
////				return 0;
////			}
////		else
////		{
////			if (maxs[nums.size()-begin - 1] < target||mins[nums.size()-begin - 1]>target) return 0;
////			int res = 0;
////			res += findWays(nums, target + nums[begin], begin + 1);
////			res += findWays(nums, target - nums[begin], begin + 1);
////			return res;
////		}
////	}
////	void generateMaxAndMin(vector<int> nums)
////	{
////		int max = nums[nums.size() - 1];
////		int min = -1*nums[nums.size() - 1];
////		mins.push_back(min);
////		maxs.push_back(max);
////		for (int index = nums.size() - 2; index >= 0; index--)
////		{
////			max += nums[index];
////			min -= nums[index];
////			mins.push_back(min);
////			maxs.push_back(max);
////		}
////	}
////
////
////	
////};
////
////int main()
////{
////	vector<int>nums = { 1,1,1,1,1 };
////	int S = 3;
////	Solution s;
////	cout<<s.findTargetSumWays(nums, S);
////	while (true)
////	{
////
////	}
////}
//
//#include"afx.h"
//class Solution {
//public:
//	int findTargetSumWays(vector<int>& nums, int S) {
//		int sum = sumVec(nums);
//		if ((sum - S) % 2 != 0) return 0;
//		int B = (sum - S) / 2;
//		vector<int> remain;
//		for (auto num : nums)
//		{
//			if (num <= B) remain.push_back(num);
//		}
//		sort(remain);
//		return findWay(remain, B, 0, 0);
//	}
//
//	int sumVec(vector<int> nums)
//	{
//		int sum = 0;
//		for (auto i : nums)
//		{
//			sum += i;
//		}
//		return sum;
//	}
//	void sort(vector<int> nums)
//	{
//		for (int i = 0; i < nums.size(); i++)
//		{
//			for (int j = i; j < nums.size(); j++)
//			{
//				if (nums[i] > nums[j])
//				{
//					int tmp = nums[i];
//					nums[i] = nums[j];
//					nums[j] = tmp;
//				}
//			}
//		}
//	}
//	int findWay(vector<int> nums, int B, int curSum, int begin)
//	{
//		if (curSum > B) return 0;     //已经超过B了
//		if (begin == nums.size()) //到了最后
//		{
//			if (curSum == B) return 1;
//			else
//			{
//				return 0;
//			}
//		}
//		else
//		{
//			int res = 0;
//			res += findWay(nums, B, curSum, begin + 1);//当前值乘0
//			res += findWay(nums, B, curSum+nums[begin], begin + 1);
//			return res;
//		}
//	}
//
//
//};
//
//int main()
//{
//	vector<int>nums = { 1,1,1,1,1 };
//	int S = 3;
//	Solution s;
//	cout << s.findTargetSumWays(nums, S);
//	while (true)
//	{
//
//	}
//}
