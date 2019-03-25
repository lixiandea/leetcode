////leetcode 2：两数相加
//#include"afx.h"
//
// //Definition for singly-linked list.
// struct ListNode {
//     int val;
//     ListNode *next;
//     ListNode(int x) : val(x), next(NULL) {}
// };
// 
// class Solution {
// public:
//	 ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
//		 ListNode * result = NULL;
//		 ListNode * end = NULL;
//		 int jump = 0;
//		 while  (l1 != NULL || l2 != NULL)
//		 {
//			 int sum = l1->val + l2->val + jump;
//			 if (sum >= 10)
//			 {
//				 sum = sum - 10;
//				 jump = 1;
//			 }
//			 else
//			 {
//				 jump = 0;
//			 }
//			 ListNode * ptrNode = new ListNode(sum);
//			 if (result == NULL)
//			 {
//				 result = ptrNode;
//				 end = result;
//			 }
//			 else
//			 {
//				 end->next = ptrNode;
//				 end = end->next;
//			 }
//			 l1 = l1->next;
//			 l2 = l2->next;
//		 }
//		 if (l1 == NULL && l2 != NULL)
//		 {
//			 while (l2)
//			 {
//				 end->next = l2;
//				 end = end->next;
//				 l2 = l2->next;
//			 }
//		 }
//		 if (l2 == NULL && l1 != NULL)
//		 {
//			 while (l1)
//			 {
//				 end->next = l1;
//				 end = end->next;
//				 l1 = l1->next;
//			 }
//		 }
//		 return result;
//	 }
// 
//};
//
//
// void trimLeftTrailingSpaces(string &input) {
//	 input.erase(input.begin(), find_if(input.begin(), input.end(), [](int ch) {
//		 return !isspace(ch);
//	 }));
// }
//
// void trimRightTrailingSpaces(string &input) {
//	 input.erase(find_if(input.rbegin(), input.rend(), [](int ch) {
//		 return !isspace(ch);
//	 }).base(), input.end());
// }
//
// vector<int> stringToIntegerVector(string input) {
//	 vector<int> output;
//	 trimLeftTrailingSpaces(input);
//	 trimRightTrailingSpaces(input);
//	 input = input.substr(1, input.length() - 2);
//	 stringstream ss;
//	 ss.str(input);
//	 string item;
//	 char delim = ',';
//	 while (getline(ss, item, delim)) {
//		 output.push_back(stoi(item));
//	 }
//	 return output;
// }
//
// ListNode* stringToListNode(string input) {
//	 // Generate list from the input
//	 vector<int> list = stringToIntegerVector(input);
//
//	 // Now convert that list into linked list
//	 ListNode* dummyRoot = new ListNode(0);
//	 ListNode* ptr = dummyRoot;
//	 for (int item : list) {
//		 ptr->next = new ListNode(item);
//		 ptr = ptr->next;
//	 }
//	 ptr = dummyRoot->next;
//	 delete dummyRoot;
//	 return ptr;
// }
//
// string listNodeToString(ListNode* node) {
//	 if (node == nullptr) {
//		 return "[]";
//	 }
//
//	 string result;
//	 while (node) {
//		 result += to_string(node->val) + ", ";
//		 node = node->next;
//	 }
//	 return "[" + result.substr(0, result.length() - 2) + "]";
// }
//
// int main() {
//	 string line;
//	 while (getline(cin, line)) {
//		 ListNode* l1 = stringToListNode(line);
//		 getline(cin, line);
//		 ListNode* l2 = stringToListNode(line);
//
//		 ListNode* ret = Solution().addTwoNumbers(l1, l2);
//
//		 string out = listNodeToString(ret);
//		 cout << out << endl;
//	 }
//	 return 0;
// }