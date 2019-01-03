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
//	vector<vector<int>>res;
//	vector<vector<int>> levelOrderBottom(TreeNode* root) {
//		levelOrderBottom(root, 0);
//		for (int index = 0; index < res.size() / 2; index++)
//		{
//			vector<int> tmp = res[index];
//			res[index] = res[res.size() - 1 - index];
//			res[res.size() - 1 - index] = tmp;
//		}
//		return res;
//	}
//	void levelOrderBottom(TreeNode* root, int level)
//	{
//		if (root == NULL) return;
//		else
//		{
//			if (res.size() < level + 1) res.push_back(vector<int>());
//			res[level].push_back(root->val);
//			levelOrderBottom(root->left, level + 1);
//			levelOrderBottom(root->right, level + 1);
//		}
//	}
//};