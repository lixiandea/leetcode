//////leetcode 206 ·´×ªÁ´±í
/////*
////Definition for singly-linked list.
//
//#include"afx.h"
//struct ListNode {
//    int val;
//    ListNode *next;
//    ListNode(int x) : val(x), next(NULL) {}
//};
//
//class Solution {
//public:
//	ListNode* reverseList(ListNode* head) {
//		ListNode * res = head;
//		ListNode * pre = NULL;
//		ListNode * next = res;
//		if (res == NULL) return res;
//		next = res->next;
//		while (next!=NULL)
//		{
//			next = res->next;
//			res->next = pre;
//			pre = res;
//			res = next;
//		}
//		return res;
//	}
//};