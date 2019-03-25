//#include"afx.h"
//class Solution {
//	vector<vector<string>> proClocks = { {"0"},{"1","2","4","8"},{"3","5","6","9","10"},{"7","11"} };
//	vector<vector<string>> proMinutes = { 
//	{"00"},
//	{"01","02","04","08","16","32"},
//	{"03","05","06","09","10","12","17","18","20","24","33","34","36","40","48"},
//	{"07","11","13","14","19","21","22","25","26","28","35","37","38","41","42","44","49","50","52","56"},
//	{"58","57","54","53","51","46","45","43","39","30","29","27","23","15"},
//	{"55","47","31","59"}
//	};
//public:
//	vector<string> readBinaryWatch(int num) {
//		vector<string> res;
//		for (int i = 0; (num-i)>=0&&i < 4; i++)
//		{
//			if ((num - i) > 5) continue;
//			generateRes(&(proClocks[i]), &(proMinutes[num - i]), &res);
//		}
//		return res;
//	}
//	void generateRes(vector<string> *clock, vector<string> * minute, vector<string> * res)
//	{
//		for (auto c : *clock)
//		{
//			for (auto m : *minute)
//			{
//				res->push_back(c + ':' + m);
//			}
//		}
//	}
//};
//
//void main()
//{
//	Solution s;
//	s.readBinaryWatch(6);
//}