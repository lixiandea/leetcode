////leetcode 104. 二叉树的最大深度
//#include"afx.h"
///**
// * Definition for a binary tree node.*/
//struct TreeNode {
//    int val;
//    TreeNode *left;
//    TreeNode *right;
//    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
//};
//
//class Solution {
//public:
//	int max = 0;
//	int maxDepth(TreeNode* root) {
//		return nodeDepth(root, 0);
//	}
//	int nodeDepth(TreeNode * node, int depth)
//	{
//		if (node == NULL) return depth;
//		else
//		{
//			depth += 1;
//			int leftDepth = nodeDepth(node->left, depth);
//			int rightDepth = nodeDepth(node->right, depth);
//			return rightDepth > leftDepth ? rightDepth : leftDepth;
//		}
//	}
//};