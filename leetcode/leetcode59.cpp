//// 59. �������� II
//#include"afx.h"
//class Solution {
//public:
//	vector<vector<int>> generateMatrix(int n) {
//		vector<vector<int>> answer(n, vector<int>(n));
//		int num = 1;
//		fillMatrix(n, 0, answer, num);
//		return answer;
//	}
//	void fillMatrix(int m, int n, vector<vector<int>> &answer, int &num)     //m��¼��������n��¼�ڼ�������num��¼��һ����-1��ֵ
//	{
//		if (num <= m * m)
//		{
//			for (int index = n; index <= m - 1 - n ; index++)
//			{
//				answer[n][index] = num ++;
//			}
//			for (int index = n + 1; index <= m - 1 - n; index++)
//			{
//				answer[index][m - n - 1] = num ++;
//			}
//			for (int index = m - n - 2; index >= n; index--)
//			{
//				answer[m - 1 - n][index] = num ++;
//			}
//			for (int index = m - n - 2; index > n; index--)
//			{
//				answer[index][n] = num ++;
//			}
//			fillMatrix(m, n + 1, answer, num);
//		}
//	}
//};
//
//
//
//void main()
//{
//	Solution s;
//	s.generateMatrix(3);
//}