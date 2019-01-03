//#include"afx.h"
//class Solution {
//public:
//	int islandPerimeter(vector<vector<int>>& grid) {
//		int res = 0;
//		int height = grid.size();
//		int width = grid[0].size();
//
//		for (int i =0; i< height; i++)
//		{
//			for (int j = 0; j < width; j++)
//			{
//				if (grid[i][j] == 1) res = res + 4 - commonEdge(grid, i, j);
//			}
//		}
//		return res;
//	}
//	int commonEdge(vector<vector<int>>& grid, int i, int j)
//	{
//		int res = 0;
//		if (i - 1 >= 0)
//		{
//			if (grid[i-1][j] == 1) res++;
//		}
//		if (j - 1 >= 0)
//		{
//			if (grid[i][j - 1] == 1) res++;
//		}
//		if (i + 1 < grid.size())
//		{
//			if (grid[i + 1][j] == 1) res++;
//		}
//		if (j + 1 < grid[0].size())
//		{
//			if (grid[i][j+1] == 1) res++;
//		}
//		return res;
//	}
//};