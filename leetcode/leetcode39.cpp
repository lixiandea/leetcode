//#include"afx.h"
//class Solution {
//	vector<vector<int>> res;
//public:
//	vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
//		vector<int> cur;
//		std::sort(candidates.begin(), candidates.end());
//		getRes(cur, target, 0, candidates);
//		return res;
//	}
//	void getRes(vector<int>& cur, int target, int index, vector<int>& candidates )
//	{
//		if (target == 0)
//		{
//			res.push_back(cur);
//			return;
//		}
//		for (int i = index; i < candidates.size(); i++)
//		{
//			if (candidates[i] > target) break;
//			cur.push_back(candidates[i]);
//			getRes(cur, target - candidates[i], i, candidates);
//			cur.pop_back();
//		}
//	}
//};
//
//int main()
//{
//	vector<int> candidate = { 2,3,6 };
//	int tar = 7;
//	Solution s = Solution();
//	s.combinationSum(candidate, tar);
//
//	while (true)
//	{
//
//	}
//}