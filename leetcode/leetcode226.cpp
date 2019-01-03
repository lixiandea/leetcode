//#include"afx.h"
//
// // Definition for a binary tree node.
//struct TreeNode {
//    int val;
//    TreeNode *left;
//    TreeNode *right;
//    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
//};
//
//class Solution {
//public:
//	TreeNode* invertTree(TreeNode* root) {
//		invertChild(root);
//		return root;
//	}
//	void invertChild(TreeNode * node)
//	{
//		if (node == NULL) return;
//		else
//		{
//			TreeNode * temp = node->left;
//			node->left = node->right;
//			node -> right = temp;
//			invertChild(node->left);
//			invertChild(node->right);
//		}
//	}
//};