//#include"afx.h"
//class Solution {
//public:
//	int distributeCandies(vector<int>& candies) {
//		int flag[200001] = { 0 };
//		int num = candies.size()/2;
//		for (int i : candies)
//		{
//			flag[i + 100000]++;
//		}
//		int count = 0;
//		for (int i : flag)
//		{
//			count += i > 0 ? 1 : 0;
//		}
//		return count > num  ? num  : count;
//	}
//};
//
//int main()
//{
//	Solution s;
//	vector<int> candis = { 1,1,1,1,2,2,2,3,3,3 };
//	s.distributeCandies(candis);
//}