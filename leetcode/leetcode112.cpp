////leetcode 112 112. Â·¾¶×ÜºÍ
////* Definition for a binary tree node.
//#include"afx.h"
//struct TreeNode {
//    int val;
//    TreeNode *left;
//    TreeNode *right;
//    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
//};
//
//class Solution {
//public:
//	vector<int> leaf;
//	bool hasPathSum(TreeNode* root, int sum) {
//		generateVal(root);
//		if (leaf.size() == 0) return false;
//		if (leaf.size() != 0)
//		{
//			for (auto x : leaf)
//			{
//				if (x == sum) return true;
//			}
//		}
//		return false;
//
//	}
//	void generateVal(TreeNode* root)
//	{
//		if (root != NULL)
//		{
//			if (root->left != NULL)
//			{
//				root->left->val += root->val;
//				generateVal(root->left);
//			}
//			if (root->right != NULL)
//			{
//				root->right->val += root->val;
//				generateVal(root->right);
//			}
//			if (root->left == NULL && root->right == NULL)
//				leaf.push_back(root->val);
//		}
//	}
//
//};