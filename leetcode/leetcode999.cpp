//#include"afx.h"
//class Solution {
//public:
//	int numRookCaptures(vector<vector<char>>& board) {
//		int i = 0, j = 0;
//		findRook(board, i, j);
//		int res = 0;
//		for (int index = 1; index <= i; index++)
//		{
//			if (board[i - index][j] == ',') continue;
//			if (board[i - index][j] == 'B') break;
//			if (board[i - index][j] == 'p') {res++;break;}
//		}
//		for (int index = 1; (index +i)< 8; index++)
//		{
//			if (board[i+index][j] == ',') continue;
//			if (board[i + index][j] == 'B') break;
//			if (board[i + index][j] == 'p') { res++; break; }
//		}
//		for (int index = 1; index < j; index++)
//		{
//			if (board[i][j-index] == ',') continue;
//			if (board[i ][j-index] == 'B') break;
//			if (board[i ][j - index] == 'p') { res++; break; }
//		}
//		for (int index = 1; (index + j) < 8; index++)
//		{
//			if (board[i][j+index] == ',') continue;
//			if (board[i][j+index] == 'B') break;
//			if (board[i][j+index] == 'p') { res++; break; }
//		}
//		return res;
//	}
//	void findRook(vector<vector<char>>& board, int &i, int & j)
//	{
//		for ( i = 0;  i < 8;  i++)
//		{
//			for ( j = 0;  j < 8; ( j)++)
//			{
//				if (board[ i][ j] == 'R') return;
//			}
//		}
//	}
//};
//
//void main()
//{
//	vector<vector<char>> board = {{'.', '.', '.', '.', '.', '.', '.', '.'}, {'.', '.', '.', '.', '.', '.', '.', '.'}, {'.', '.', '.', '.', '.', '.', '.', '.'}, {'.', '.', '.', 'R', '.', '.', '.', '.'}, {'.', '.', '.', '.', '.', '.', '.', '.'}, {'.', '.', '.', '.', '.', '.', '.', '.'}, {'.', '.', '.', '.', '.', '.', '.', '.'}, {'.', '.', '.', '.', '.', '.', '.', '.'}};
//
//	Solution s;
//	cout<<s.numRookCaptures(board);
//	system("pause");
//}