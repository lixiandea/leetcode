//////410. 分割数组的最大值
//#include"afx.h"
//#include<math.h>;
//class Solution {
//public:
//	vector<vector<int>> splitedArr;         //存放完成分割的数组
//
//	int splitArray(vector<int>& nums, int m) {
//		long long top = 0;     //可能的上界
//		double bottom = 0;		//可能的下界
//		for (auto num :nums)
//		{
//			//sum += num;
//			top += num ;
//			if (bottom < num) bottom = num;
//		}
//		while (bottom < top)
//		{
//			int mid = (top + bottom) / 2;
//			int max = 0;
//			if (judge(nums, mid, m, max))   //如果是真那么将max值作为上界，否则将mid作为下界
//			{
//				top = max;
//			}
//			else
//			{
//				bottom = mid + 1;
//			}
//		}
//		return bottom;
//
//		/*int begin = 0, end = 0;
//		int max = 0;
//		int count = m-1;
// 		while (end<=nums.size()-count && count >=1)
//		{
//			int curSum = calSum(nums, begin, end); 
//			int curAve = curSum / (end - begin + 1);
//			int nextSum = calSum(nums, begin, end + 1);
//			int nextAve = nextSum / (end - begin + 2);
//
//			if (calDistance(curAve,ave) <= calDistance(nextAve,ave))
//			{
//				cout << nums.size() - count << " " << end <<" "<<begin<<" "<< " "<<curAve<<endl;
//				if (max < curSum) max = curSum;
//				begin = end + 1;
//				end = begin;
//				count--;
//			}
//			else
//			{
//				end += 1;
//			}
//		}*/
//
//
//	}
//
//	int calSum(vector<int> nums, int begin, int end)
//	{
//		int sum = 0;
//		if (end >= nums.size())
//		{
//			end = nums.size() - 1;
//		}
//		for (int index = begin; index <= end; index++)
//		{
//			sum += nums{index];
//		}
//		return sum;
//	}
//
//	bool judge(vector<int> &nums, int & mid, int m,int &max)
//	{
//		int begin = 0, end = 0;
//		int count = 0;
//		while (end < nums.size()) //直到后面的数目不足还剩下份数为止
//		{
//			int curSum = calSum(nums, begin, end);
//			int nextSum = calSum(nums, begin, end + 1);
//			if ((nextSum > mid || end == nums.size() -1 )&& curSum <= mid)            //最后一个或者后一个大于最大值
//			{
//				begin = end + 1;
//				end = begin;
//				count++;
//				if (curSum > max) max = curSum;
//			}
//			else
//			{
//				end++;
//			}
//		}
//		if (count <= m) return true;    //能分成小于m分，所以将其中几分拆分也是可以完成m份的拆分的
//		return false;
//	}
//};
//
//int main()
//{
//	//vector<int> nums = { 7,6,5,4,3,2,1 };
//	vector<int> nums = { 7,2,5,10,8 };
//		
//
//
//	Solution s;
//	cout << s.splitArray(nums, 2);
//	while (true)
//	{
//
//	}
//}