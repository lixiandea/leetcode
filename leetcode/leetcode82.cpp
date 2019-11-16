//#include"afx.h"
//
////Definition for singly-linked list.
//struct ListNode {
//    int val;
//    ListNode *next;
//    ListNode(int x) : val(x), next(NULL) {}
//};
//
//class Solution {
//public:
//	ListNode* deleteDuplicates(ListNode* head) {
//		ListNode * p = new ListNode(0);
//		p->next = head;       //在链表最前面插入一个节点
//		head = p;
//		ListNode *	left, *right;
//		while (p->next)
//		{
//			left = p->next;
//			right = left;
//			while (right->next&&left->val == right->next->val)
//			{
//				right = right->next;
//			} //找到所有的相同的点
//			if (left == right) // 即不存在相同的点
//			{
//				p = p->next;
//			}
//			else
//			{
//				p->next = right->next;     //指向下一个不同的点
//			}
//		}
//		return head->next;   //删除我们插入的点
//	}
//};