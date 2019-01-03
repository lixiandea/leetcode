//#include"afx.h"
//class Solution {
//public:
//	vector<int> sortArrayByParityII(vector<int>& A) {
//		vector<int> nums[2];
//		vector<int> remain;
//		for (int index = 0; index < A.size(); index++)
//		{
//			if (index % 2 != A[index] % 2)
//			{
//				int flag = A[index] % 2;
//				nums[A[index] % 2].push_back(A[index]);
//				if (nums[1 - flag].size() == 0)
//					remain.push_back(index);
//				else
//				{
//					A[index] = nums[1 - flag][nums[1-flag].size()-1];
//					nums[1 - flag].pop_back();
//				}
//			}
//		}
//		for (auto index : remain)
//		{
//				A[index] = nums[index % 2][nums[index%2].size()- 1];
//				nums[index % 2].pop_back();
//		}
//		return A;
//	}
//};
//
//int main()
//{
//	vector<int> A = { 4,2,5,7 };
//	Solution s;
//	s.sortArrayByParityII(A);
//}