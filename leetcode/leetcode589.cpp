//#include"afx.h"
//
//// Definition for a Node.
//class Node {
//public:
//	int val;
//	vector<Node*> children;
//
//	Node() {}
//
//	Node(int _val, vector<Node*> _children) {
//		val = _val;
//		children = _children;
//	}
//};
//
//class Solution {
//public:
//	vector<int> preorder(Node* root) {
//		vector<Node * > stack;
//		vector<int> result;
//		if (root == NULL) return result;
//		stack.push_back(root);
//		while (stack.size() != 0)
//		{
//			Node* temp = stack[stack.size() - 1];
//			result.push_back(temp->val);
//			stack.pop_back();
//			if(temp->children.size() != 0)
//			for (int index = temp->children.size() - 1; index>=0;index--)
//			{
//				stack.push_back(temp->children[index]);
//			}
//		}
//		return result;
//	}
//};