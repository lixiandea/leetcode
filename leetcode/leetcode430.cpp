////430. 扁平化多级双向链表
//
//// Definition for a Node.
//#include"afx.h"
//class Node {
//public:
//	int val = NULL;
//	Node* prev = NULL;
//	Node* next = NULL;
//	Node* child = NULL;
//
//	Node() {}
//
//	Node(int _val, Node* _prev, Node* _next, Node* _child) {
//		val = _val;
//		prev = _prev;
//		next = _next;
//		child = _child;
//	}
//};
//
//class Solution {
//public:
//	Node * answer = NULL;
//	Node * answer_last;
//	Node* flatten(Node* head) {
//		PrePrint(head);
//		return answer;
//	}
//	void PrePrint(Node * head) 
//	{
//		if (head != NULL)
//		{
//			if (answer == NULL)
//			{
//				answer = new Node(head->val, NULL, NULL, NULL);
//				answer_last = answer;
//			}
//			else
//			{
//				answer_last->next = new Node(head->val, answer_last, NULL, NULL);
//				answer_last = answer_last->next;
//			}
//			PrePrint(head->child);
//			PrePrint(head->next);
//		}
//	}
//};