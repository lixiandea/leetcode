#include"afx.h"

//Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
//
//class Solution {
//public:
//	int max = 0;
//	int sumOfLeftLeaves(TreeNode* root) {
//		findLeftLeaf(root);
//		return max;
//	}
//	void findLeftLeaf(TreeNode * root)
//	{
//		if (root == NULL) return;
//		else
//		{
//			if (root->left != NULL)
//			{
//				if (root->left->left == NULL && root->left->right == NULL)
//				{
//					max += root->left->val;
//				}
//				findLeftLeaf(root->left);
//			}
//		findLeftLeaf(root->right);
//		}
//	}
//};


class Solution {
public:
	int sumOfLeftLeaves(TreeNode* root) {
		if (root != NULL)
		{
			if (root->left != NULL && (root->left->left == NULL && root->left->right == NULL))
			{
				return root->left->val;
			}

		}
	}
};