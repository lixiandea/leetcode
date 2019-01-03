//#include"afx.h"
//class Solution {
//public:
//	bool isLongPressedName(string name, string typed) {
//		int nameBegin = 0 , nameEnd = 0;
//		int typedBegin = 0, typedEnd = 0;
//		int nameLen = name.size();
//		int typedLen = typed.size();
//		while (nameBegin != nameLen)
//		{
//			while (name[nameEnd + 1] == name[nameEnd]) nameEnd++;
//			while (typed[typedEnd + 1] == typed[typedEnd]) typedEnd++;
//			if (typedEnd - typedBegin >= nameEnd - nameBegin && name[nameBegin] == typed[typedBegin])
//			{
//				nameBegin = nameEnd + 1;
//				nameEnd = nameBegin;
//				typedBegin = typedEnd + 1;
//				typedEnd = typedBegin;
//
//			}
//			else
//			{
//				return false;
//			}
//
//		}
//		return true;
//	}
//};
//int main()
//{
//	string name = "leelee", typed = "lleeelee";
//	Solution s;
//	s.isLongPressedName(name, typed);
//}
