//////410. �ָ���������ֵ
//#include"afx.h"
//#include<math.h>;
//class Solution {
//public:
//	vector<vector<int>> splitedArr;         //�����ɷָ������
//
//	int splitArray(vector<int>& nums, int m) {
//		long long top = 0;     //���ܵ��Ͻ�
//		double bottom = 0;		//���ܵ��½�
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
//			if (judge(nums, mid, m, max))   //���������ô��maxֵ��Ϊ�Ͻ磬����mid��Ϊ�½�
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
//		while (end < nums.size()) //ֱ���������Ŀ���㻹ʣ�·���Ϊֹ
//		{
//			int curSum = calSum(nums, begin, end);
//			int nextSum = calSum(nums, begin, end + 1);
//			if ((nextSum > mid || end == nums.size() -1 )&& curSum <= mid)            //���һ�����ߺ�һ���������ֵ
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
//		if (count <= m) return true;    //�ֳܷ�С��m�֣����Խ����м��ֲ��Ҳ�ǿ������m�ݵĲ�ֵ�
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