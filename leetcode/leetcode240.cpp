//#include"afx.h"
//class Solution {
//public:
//	bool searchMatrix(vector<vector<int>>& matrix, int target) {
//		int m = matrix.size();
//		if(m == 0) return false;
//		int n = matrix[0].size();
//		if (n == 0) return false;
//		int b[2] = { m, n };
//		int Min = m < n ? m : n;           
//		if (matrix[0][0] > target || matrix[m - 1][n - 1] < target) return false;
//		if (matrix[0][0] == target || matrix[m - 1][n - 1] == target) return true;
//		for (int index = 0; index < m; index++)
//		{
//			if (matrix[index][0] > target || matrix[index][n - 1] < target)  continue;
//			if (matrix[index][0] ==target || matrix[index][n - 1] == target)  return true;
//			for (int jndex = 0; jndex < n; jndex++)
//			{
//				if ( matrix[index][jndex] == target) return true;
//				if (matrix[index][jndex]<target&&matrix[index][jndex + 1] > target) break;
//			}
//		}
//		return false;
//	}
//};
//
//int main()
//{
//	vector<vector<int>> matrix = {{1, 2, 3, 4, 5}, {6, 7, 8, 9, 10}, {11, 12, 13, 14, 15}, {16, 17, 18, 19, 20}, {21, 22, 23, 24, 25}};
//		
//	int target = 15;
//	Solution s;
//	s.searchMatrix(matrix, target);
//}