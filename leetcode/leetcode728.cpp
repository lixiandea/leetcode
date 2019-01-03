//#include"afx.h"
//class Solution {
//public:
//	vector<int> selfDividingNumbers(int left, int right) {
//		vector<int> result;
//		for (int index = left; index <= right; index++)
//		{
//			if (Judge(index)) result.push_back(index);
//		}
//		return result;
//	}
//	bool Judge(int num)
//	{
//		stringstream ss;
//		ss << num;
//		string str = ss.str();
//		if (str.find('0') != -1 || num%str[str.size()-1] != 0) return false;
//		if (str.size() == 1) return true;
//		for (int index = 0;index<str.size() - 1;index++)
//		{
//			if ((str[index+1] - 48) % (str[index] - 48) != 0) return false;
//		}
//		return true;
//	}
//};