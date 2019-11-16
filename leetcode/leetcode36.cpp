//#include"afx.h"
//class Solution {
//public:
//	bool isValidSudoku(vector<vector<char>>& board) {
//		for (int index = 0; index < 9; index++)
//		{
//			if (checkLine(board[index]))
//			{
//				if (!checkLine({ board[0][index],board[1][index], board[2][index], board[3][index], board[4][index], board[5][index],
//					board[6][index], board[7][index], board[8][index] }))
//					return false;
//			}
//			else return false;
//		}
//		for (int i = 0; i < 9; i = i + 3)
//		{
//			if (!(checkBlock(i, 0, board) && checkBlock(i, 3, board) && checkBlock(i, 6, board)))
//				return false;
//		}
//		return true;
//
//	}
//	bool checkLine(vector<char> nums)
//	{
//		for (int i =49; i < 58; i++)
//		{
//			int tmp = count(nums.begin(), nums.end(), i);
//			if (count(nums.begin(), nums.end(), i) > 1) return false;
//		}
//		return true;
//	}
//	bool checkBlock(int i, int j, vector<vector<char>> &board)
//	{
//		if (checkLine({ board[i][j], board[i + 1][j], board[i + 2][j],
//			board[i][j + 1], board[i + 1][j + 1], board[i + 2][j + 1],
//			board[i][j + 2], board[i + 1][j + 2], board[i + 2][j + 2] }))
//			return true;
//		else
//		{
//			return false;
//		}
//	}
//};
//
//void main()
//{
//	vector<vector<char>> board = {{'8', '3', '.', '.', '7', '.', '.', '.', '.'}, {'6', '.', '.', '1', '9', '5', '.', '.', '.'}, 
//		{'.', '9', '8', '.', '.', '.', '.', '6', '.'}, {'8', '.', '.', '.', '6', '.', '.', '.', '3'}, 
//		{'4', '.', '.', '8', '.', '3', '.', '.', '1'}, {'7', '.', '.', '.', '2', '.', '.', '.', '6'}, 
//		{'.', '6', '.', '.', '.', '.', '2', '8', '.'}, {'.', '.', '.', '4', '1', '9', '.', '.', '5'},
//		{'.', '.', '.', '.', '8', '.', '.', '7', '9'}};
//	Solution s;
//	s.isValidSudoku(board);
//}