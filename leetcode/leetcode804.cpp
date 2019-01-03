//#include"afx.h"
//class Solution {
//public:
//	vector<string> Code = { ".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--.." };
//	vector<string> result;
//	int uniqueMorseRepresentations(vector<string>& words) {
//		int count = 0;
//		for (auto word : words)
//		{
//			string cur = genStr(word);
//			if (find(result, cur) == -1)
//			{
//				count += 1;
//				result.push_back(cur);
//			}
//		}
//		return count;
//	}
//	int getIndex(char c)
//	{
//		return static_cast<int>(c) - 97;
//	}
//	string genStr(string word)
//	{
//		string result;
//		for (char c : word)
//		{
//			result += Code[getIndex(c)];
//		}
//		return result;
//	}
//	int find(vector<string> result, string cur)
//	{
//		for (int index = 0; index < result.size();index++)
//		{
//			if (result[index] == cur) return index;
//		}
//		return -1;
//
//	}
//};
//int main()
//{
//	vector<string> words = { "gin", "zen", "gig", "msg" };
//	Solution s;
//	cout << s.uniqueMorseRepresentations(words);
//	while (true)
//	{
//
//	}
//}