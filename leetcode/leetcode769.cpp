/////769. 最多能完成排序的块
//#include"afx.h"
//class Solution {
//public:
//	int maxChunksToSorted(vector<int>& arr) {
//		vector<int> ranks = getRank(arr);
//		int begin = 0;
//		int end = 0;
//		int max = 0;
//		while (end != arr.size())
//		{
//			if (judge(getRangeVector(ranks, begin, end),begin ,end))
//			{
//				begin = end + 1;
//				end = begin;
//				max++;
//			}
//			else
//			{
//				end++;
//			}
//		}
//		return max;
//	}
//
//	vector<int> getRank(vector<int>& arr)
//	{
//		vector<int> ranks;
//		for (int x : arr)
//		{
//			int rank = 0;
//			for (int y : arr)
//			{
//				if (x > y)
//				{
//					rank ++;
//				}
//			}
//			ranks.push_back(rank);
//		}
//		return ranks;
//	}
//	/*void sort(vector<int> & arr)
//	{
//		for (int index = 0; index < arr.size();index++ )
//		{
//			for (int jndex = 0; jndex < arr.size(); jndex++)
//			{
//				if (arr{index] > arr{jndex])
//				{
//					int temp = arr{index];
//					arr{index] = arr{jndex];
//					arr{jndex] = temp;
//				}
//			}
//		}
//	}*/
//
//	int getmax(vector<int> arr)
//	{
//		int max = 0;
//		for (int x : arr)
//		{
//			if (x > max) max = x;
//		}
//		return max;
//	}
//	int getmin(vector<int> arr)
//	{
//		int min = 1000;
//		for (int x : arr)
//		{
//			if (x < min) min = x;
//
//		}
//		return min;
//	}
//	bool judge(vector<int> arr,int begin,int end)
//	{
//		//判断条件max = end;
//		//min = begin;
//		int max = getmax(arr);
//		int min = getmin(arr);
//		if (min == begin && max == end) return true;
//		return false;
//		
//	}
//	vector<int> getRangeVector(vector<int> &arr, int begin, int end)
//	{
//		vector<int> result;
//		for (int index = begin; index <= end; index++)
//		{
//			result.push_back(arr{index]);
//		}
//		return result;
//	}
//};
//
//int main()
//{
//	vector<int> arr = { 4,3,2,1,0 };
//	Solution s;
//	cout << s.maxChunksToSorted(arr);
//	while(true){}
//
//}