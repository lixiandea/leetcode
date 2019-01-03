//#include"afx.h"
//class Solution {
//public:
//	vector<string> strs = { "qwertyuiopQWERTYUIOP","ASDFGHJKLasdfghjkl","zxcvbnmZXCVBNM" };
//	vector<string> findWords(vector<string>& words) {
//		vector<string> res;
//		for (auto word : words)
//		{
//			if (Judge(word)) res.push_back(word);
//		}
//		return res;
//	}
//	bool Judge(string word)
//	{
//		int flag = 0;
//		for (int index = 0; index < word.size(); index++)
//		{
//			if (index == 0) flag = getLineNum(word[index]);
//			else
//			{
//				if (flag != getLineNum(word[index])) return false;
//			}
//			
//		}
//		return true;
//	}
//	int getLineNum(char c)
//	{
//		for (int index = 0; index < 3; index++)
//		{
//			if (strs[index].find(c) != -1)
//			{
//				return index;
//			}
//		}
//	}
//};
//
//int main()
//{
//	vector<string> test = {"Hello", "Alaska", "Dad", "Peace"};
//	Solution s;
//	s.findWords(test);
//}