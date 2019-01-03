////17. 电话号码的字母组合
//#include<iostream>
//#include<vector>
//using namespace std;
//class Solution {
//public:
//	vector<string> letterCombinations(string digits) {
//		vector<string> answer ;
//		/*for (int index= 0; index <  digits.size();index ++)
//		{
//			if (index == 0)
//			{
//				for (auto x : transDigitToChar(digits[index]-48))
//				{
//					string str;
//					str.push_back(x);
//					answer.push_back(str);
//				}
//			}
//			else
//			{
//				vector<string> temp;
//				int length = answer.size();
//				for (int jndex = 0; jndex < length;jndex++)
//				{
//					string curstr = answer[jndex];
//					for (auto x : transDigitToChar(digits[index] - 48))
//					{
//						string str = curstr;
//						str.push_back(x);
// 						temp.push_back(str);
//					}
//
//				}
//				answer.clear();
//				answer = temp;
//			}
//
//		}
//		return answer;*/
//		for (auto digit : digits) 
//		{
//			answer = UpdateAns(answer, digit);
//		}
//		return answer;
//	}
//
//	vector<char> transDigitToChar(int digit)
//	{
//		vector<char> ans;
//		switch (digit - 48 )
//		{
//		case 2: ans.push_back('a'); ans.push_back('b'); ans.push_back('c'); break;
//		case 3: ans.push_back('d'); ans.push_back('e'); ans.push_back('f'); break;
//		case 4: ans.push_back('g'); ans.push_back('h'); ans.push_back('i'); break;
//		case 5: ans.push_back('j'); ans.push_back('k'); ans.push_back('l'); break;
//		case 6: ans.push_back('m'); ans.push_back('n'); ans.push_back('o'); break;
//		case 7: ans.push_back('p'); ans.push_back('q'); ans.push_back('r'); ans.push_back('s'); break;
//		case 8: ans.push_back('t'); ans.push_back('u'); ans.push_back('v'); break;
//		case 9: ans.push_back('w'); ans.push_back('x'); ans.push_back('y'); ans.push_back('z'); break;
//		default:
//			break;
//		}
//		for (auto x : ans)
//		{
//			cout << x;
//		}
//		return ans;
//	}
//
//	vector<string> UpdateAns(vector<string> &ans, int digit)
//	{
//		vector<string> newAns;
//		if (ans.size() == 0)
//		{
//			for (auto x : transDigitToChar(digit))
//			{
//				string str;
//				str.push_back(x);
//				newAns.push_back(str);
//			}
//		}
//		for (auto str : ans)
//		{
//			for (auto temp : transDigitToChar(digit))
//			{
//				str.push_back(temp);
//				newAns.push_back(str);
//				str.pop_back();
//			}
//		}
//		return newAns;
//	}
//};
//
//int main()
//{
//	Solution s;
//	s.letterCombinations("23");
//}