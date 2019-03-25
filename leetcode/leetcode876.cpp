//#include"afx.h"
//
// // Definition for singly-linked list.
//struct ListNode {
//    int val;
//    ListNode *next;
//    ListNode(int x) : val(x), next(NULL) {}
//};
//
//class Solution {
//public:
//	ListNode* middleNode(ListNode* head) {
//		int len = 0;
//		ListNode* p = head;
//		while (p->next != NULL)
//		{
//			len++;
//			p = p->next;
//		}
//		cout << len;
//		len = (len + 1) / 2;
//		cout << len;
//		p = head;
//		while (len > 0)
//		{
//			p = p->next;
//			len--;
//		}
//		return p;
//	}
//};