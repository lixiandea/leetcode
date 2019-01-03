////929. 独特的电子邮件地址
//#include"afx.h"
//class Solution {
//public:
//	int numUniqueEmails(vector<string>& emails) {
//		for (int index = 0; index < emails.size(); index ++)
//		//for (auto email : emails)
//		{
//			auto pos = emails[index].find("@");
//			string str1 = emails[index].substr(0, pos);
//			string str2 = emails[index].substr(pos + 1, emails[index].size());
//			pos = str1.find("+");
//			if (pos != std::string::npos) str1 = str1.substr(0, pos);
//			pos = str1.find(".");
//			while (pos != std::string::npos)
//			{
//				str1.erase(pos, 1);
//				pos = str1.find(".");
//			}
//			emails[index] = str1 + "@" + str2;
//			for (int jndex = 0; jndex < index; jndex++)
//			{
//				if (emails[jndex] == emails[index])
//				{
//					emails.erase(emails.begin() + index);
//					index--;
//					break;
//				}
//			}
// 		}
//		return emails.size();
//	}
//};
//
//void main()
//{
//	vector<string> emails = { "test.email+alex@leetcode.com","test.e.mail+bob.cathy@leetcode.com","testemail+david@lee.tcode.com" };
//	Solution s;
//	s.numUniqueEmails(emails);
//	while (true)
//	{
//
//	}
//}