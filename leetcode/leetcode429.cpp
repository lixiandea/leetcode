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
//	vector<vector<int>> res;
//public:
//	vector<vector<int>> levelOrder(Node* root) {
//		levelOrderBottom(root, 0);
//		return res;
//	}
//	void levelOrderBottom(Node* root, int level)
//	{
//		if (root == NULL) return;
//		else
//		{
//			if (res.size() < level + 1) res.push_back(vector<int>());
//			res[level].push_back(root->val);
//			for (auto a : root->children)
//				levelOrderBottom(a, level + 1);
//		}
//	}
//};