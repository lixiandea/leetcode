//#include"afx.h"
//class Solution {
//	public:
//	string shortestCompletingWord(string licensePlate, vector<string>& words) {
//		vector<int> vecLicensePlate = word2vec(licensePlate);
//		int minLen = 10000000;
//		string res;
//		for (string word : words)
//		{
//			if (compare(word2vec(word), vecLicensePlate) && word.size() < minLen)
//
//			{
//				minLen = word.size();
//				res = word;
//			}
//		}
//		return res;
//	}
//	vector<int> word2vec(string word)
//	{
//		vector<int> vec(26);
//		for (auto c : word)
//		{
//			if (c > 48 && c < 58) continue;
//			int intC = char2int(c);
//			if(intC >=0&&intC<=26)
//			vec[char2int(c)] ++;
//		}
//		return vec;
//	}
//
//	bool compare(vector<int> word, vector<int> licensePlate)
//	{
//		for (int index = 0; index<26; index++)
//		{
//			if (licensePlate[index] > word[index])
//				return false;
//		}
//		return true;
//	}
//	int char2int(char c)
//	{
//		if (c >= 97 && c <= 122) return c - 97;
//		if (c >= 65 && c <= 90) return c - 65;
//		else
//		{
//			return -1;
//		}
//	}
//};
//
//int main()
//{
//	Solution s;
//	string licensePlate = "1s3 PSt";
//	vector<string> words = { "step", "steps", "stripe", "stepple" };
//	cout << s.shortestCompletingWord(licensePlate, words);
//	while (true)
//	{
//
//	}
//}