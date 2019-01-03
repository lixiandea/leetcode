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
//	int maxDepth(Node* root) {
//		if (root == NULL) return 0;
//		else
//		{
//			if (root->children.size() == 0)
//				return 1;
//			else
//			{
//				int max = 0;
//				for (int index = 0; index < root->children.size(); index++)
//				{
//					int curDep = maxDepth(root->children[index]);
//					if (max < curDep) max = curDep;
//
//				}
//				return max + 1;
//			}
//		}
//
//	}
//};