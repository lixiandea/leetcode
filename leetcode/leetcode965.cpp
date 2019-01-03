//#include"afx.h"
//
////Definition for a binary tree node.
//struct TreeNode {
//	int val;
//	TreeNode *left;
//	TreeNode *right;
//	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
//};
//class Solution {
//public:
//	int flag = -1;
//	bool isUnivalTree(TreeNode* root) {
//		if (root != NULL)
//		{
//			if (flag == root->val) return isUnivalTree(root->left) && isUnivalTree(root->right);
//			else
//			{
//				if (flag == -1) 
//				{
//					flag = root->val; return isUnivalTree(root->left) && isUnivalTree(root->right);
//				}
//				else
//				{
//					return false;
//				}
//			}
//		}
//		return true;
//	}
//};