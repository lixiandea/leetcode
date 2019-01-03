//#include"afx.h"
//
////Definition for a binary tree node.
//struct TreeNode {
//    int val;
//    TreeNode *left;
//    TreeNode *right;
//    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
//};
//
//class Solution {
//public:
//	TreeNode* trimBST(TreeNode* root, int L, int R) {
//		trimBSTNode(root, L, R);
//		return root;
//	}
//	void trimBSTNode(TreeNode* &root, int L, int R)
//	{
//		if (root != NULL)
//		{
//			if (root->val < L)
//			{
//				root = root->right;
//				trimBSTNode(root, L, R);
//			}
//			else
//			{
//				if (root->val > R)
//				{
//					root = root->left;
//					trimBSTNode(root, L, R);
//				}
//				else
//				{
//					trimBSTNode(root->left, L, R);
//					trimBSTNode(root->right, L, R);
//				}
//			}
//
//		}
//	}
//};