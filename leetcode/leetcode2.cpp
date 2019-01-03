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
//int main()
//{
//	//vector<int> nums = { 7,6,5,4,3,2,1 };
//	vector<int> nums = { 7,2,5,10,8 };
//
//
//
//	Solution s;
//	
//	while (true)
//	{
//
//	}
//}
