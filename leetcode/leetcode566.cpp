//#include"afx.h"
//class Solution {
//public:
//	vector<vector<int>> matrixReshape(vector<vector<int>>& nums, int r, int c) {
//		int foreC = nums.size();
//		int foreR = nums[0].size();
//		if (r*c != foreR*foreC)  //unreasonable
//		{
//			return nums;
//		}
//		vector<vector<int>> res(r, vector<int>(c));
//		int curR = 0; 
//		int curC = 0;
//		for (int index = 0; index < foreC; index++)
//		{
//			for (int j = 0; j < foreR; j++)
//			{
//				res[curC][curR] = nums[index][j];
//				curC += (curR+1) / c;
//				curR = (curR+1) % c;
//			}
//		}
//		return res;
//	}
//};