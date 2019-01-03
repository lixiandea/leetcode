//#include"afx.h"
//
//#include<stdio.h>
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
//	TreeNode* mergeTrees(TreeNode* t1, TreeNode* t2) {
//		mergeNode(t1, t2);
//		return t1;
//	}
//	void mergeNode(TreeNode * &t1, TreeNode * &t2)
//	{
//		if (t1 == NULL)
//		{
//			t1 = t2;
//			return;
//		}
//		else
//		{
//			if (t2 == NULL)
//			{
//				return;
//			}
//			else
//			{
//				t1->val += t2->val;
//				mergeNode(t1->left, t2->left);
//				mergeNode(t1->right, t2->right);
//			}
//		}
//	}
//};
