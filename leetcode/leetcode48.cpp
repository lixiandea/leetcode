//#include"afx.h"
//class Solution {
//public:
//	void rotate(vector<vector<int>>& matrix) {
//		int n = matrix.size();
//		float tag = (n -1 ) / 2.0;
//		for (int index = 0; index <= tag; index++)
//		{
//			int limit = n - 1 - index;
//			for (int j = index; j < limit; j++)
//			{
//				//cout << index << j<<endl;
//				int tmp = matrix[index][j];
//				matrix[index][j] = matrix[2 * tag - j][ index];
//				//cout << 2 * tag - j << index << endl;
//				matrix[2 * tag - j][ index] = matrix[2 * tag - index][2 * tag - j];
//				//cout << 2 * tag - index << 2 * tag - j << endl;
//				matrix[2 * tag - index][2 * tag - j] = matrix[j][2 * tag - index];
//				//cout << j << 2 * tag - index << endl;
//				matrix[j][2 * tag - index] = tmp;
//			}
//		}
//	}
//};
//
//void main()
//{
//	Solution s;
//	vector<vector<int>> img = {{1, 2}, {3,4}};
//	s.rotate(img);
//	while (true)
//	{
//
//	}
//}