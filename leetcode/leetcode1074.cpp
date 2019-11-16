//#include"afx.h"
//class Solution {
//public:
//	int numSubmatrixSumTarget(vector<vector<int>>& matrix, int target) {
//		int m = matrix.size();
//		int res = 0;
//		if (m == 0)  return 0;
//		int n = matrix[0].size();
//		vector<vector<int>> sums(m, vector<int>(n));
//		for (int i = 0; i < m; i++)
//		{
//			for (int j = 0; j < n; j++)
//			{
//				if (matrix[i][j] == target) res++;
//				if (i == 0 && j == 0)  sums[i][j] =matrix[0][0];
//				else
//				{
//					if (i == 0) sums[i][j] = sums[i ][j-1] + matrix[0][j];
//					else
//					{
//						if (j == 0) sums[i][j] = sums[i - 1][j] + matrix[i][0];
//						else
//						{
//							sums[i][j] = sums[i][j - 1] + matrix[i][j] + sums[i-1][j] - sums[i - 1][j - 1];
//						}
//					}
//					
//				}
//			}
//		}
//		for (int i = 0; i < m; i++)
//		{
//			for (int j = 0; j < n; j++)
//			{
//				if (sums[i][j] == target && i!=0)
//				{
//					//cout << "find at one pos!" << i << j;
//					res++;
//					continue;
//				}
//				for (int k = i+1; k < m; k++)
//				{
//					for (int l = j+1; l < n; l++)
//					{
//						if (sums[k][l] - sums[i][j] == target)
//						{
//							//cout << "find at different Pos" << i << j << k << l;
//
//							res++;
//						}
//					}
//				}
//			}
//		}
//		return res;
//	}
//};
//
//
//int main()
//{
//	vector<vector<int>> matrix = { {1,-1}, {1,-1} };
//	cout << Solution().numSubmatrixSumTarget(matrix, 0);
//	while (true)
//	{
//
//	}
//}