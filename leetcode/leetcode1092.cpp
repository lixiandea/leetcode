//#include"afx.h"
//class Solution {
//public:
//	string shortestCommonSupersequence(string str1, string str2) {
//		int m = str1.size();
//		int n = str2.size();
//		vector<vector<int> > dp(m+1, vector<int>(n+1, 0));
//		for (int i = 0; i < m+1; i++)
//		{
//			for (int j = 0; j < n+1; j++)
//			{
//				if (i == 0) dp[i][j] = j;
//				else
//				{
//					if (j == 0) dp[i][j] = i;
//					else
//					{
//						if (str1[i-1] == str2[j-1]) dp[i][j] = 1 + dp[i - 1][j - 1];
//						else
//						{
//							dp[i][j] = 1 + min(dp[i - 1][j], dp[i][j - 1]);
//						}
//					}
//				}
//			}
//		}
//		string res = "";
//		int i = m;
//		int j = n;
//		while (i&&j)
//		{
//			if (str1[i-1] == str2[j-1])
//			{
//				res += str1[i-1];
//				i--, j--;
//			}
//			else
//			{
//				if (dp[i][j - 1] > dp[i - 1][j])
//				{
//					res += str1[i-1];
//					i--;
//				}
//				else
//				{
//					res += str2[j-1];
//					j--;
//				}
//			}
//		}
//		if (i == 0)
//		{
//			for (j; j > 0; j--) res += str2[j-1];
//		}
//		if (j == 0)
//		{
//			for (i; i > 0; i--) res += str1[i-1];
//
//		}
//		reverse(res.begin(), res.end());
//		return res;
//		
//	}
//};
//
//int main()
//{
//	string str1 = "abac";
//	string str2 = "cab";
//	Solution s;
//	cout<<s.shortestCommonSupersequence(str1, str2);
//	while (true)
//	{
//
//	}
// }