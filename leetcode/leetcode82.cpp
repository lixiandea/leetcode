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
//		p->next = head;       //��������ǰ�����һ���ڵ�
//		head = p;
//		ListNode *	left, *right;
//		while (p->next)
//		{
//			left = p->next;
//			right = left;
//			while (right->next&&left->val == right->next->val)
//			{
//				right = right->next;
//			} //�ҵ����е���ͬ�ĵ�
//			if (left == right) // ����������ͬ�ĵ�
//			{
//				p = p->next;
//			}
//			else
//			{
//				p->next = right->next;     //ָ����һ����ͬ�ĵ�
//			}
//		}
//		return head->next;   //ɾ�����ǲ���ĵ�
//	}
//};