////54. ÂÝÐý¾ØÕó
//#include"afx.h"
//class Solution {
//
//	vector<int> answer;
//public:
//
//	vector<int> spiralOrder(vector<vector<int>>& matrix) {
//		int m = matrix.size();
//		if (m != 0)
//		{		
//			int n = matrix[0].size();
//			generateAnswer(0, 0, n - 1, m - 1, matrix);
//		}
//		return answer;
//	}
//	void generateAnswer(int minX, int minY, int maxX, int maxY, vector<vector<int>>& matrix)
//	{
//		if (minX < maxX&&minY < maxY) 
//		{
//			for (int index = minX; index <= maxX; index++)
//			{
//				answer.push_back(matrix[minY][index]);
//			}
//			for (int index = minY + 1; index <= maxY; index++)
//			{
//				answer.push_back(matrix[index][maxX]);
//			}
//			for (int index = maxX - 1; index >= minX; index--)
//			{
//				answer.push_back(matrix[maxY][index]);
//			}
//			for (int index = maxY - 1; index > minY; index--)
//			{
//				answer.push_back(matrix[index][minX]);
//			}
//			generateAnswer(minX + 1, minY + 1, maxX - 1, maxY - 1, matrix);
//		}
//		if (minX == maxX)
//		{
//			for (int index = minY; index <= maxY; index++)
//			{
//				answer.push_back(matrix[index][maxX]);
//			}
//		}
//		else
//		{
//			if (minY == maxY)
//			{
//				for (int index = minX; index <= maxX; index++)
//				{
//					answer.push_back(matrix[minY][index]);
//				}
//			}
//		}
//	}
//};
//
//void main()
//{
//	vector<vector<int>> matrix = { {1, 2, 3 }, {5, 6, 7 }, {9, 10, 11}, {2,3,4} };
//	Solution s;
//	vector<int> answer;
//	answer = s.spiralOrder(matrix);
//	cout << answer.size();
//	while (true)
//	{
//
//	}
//}