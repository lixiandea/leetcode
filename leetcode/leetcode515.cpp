//#include"afx.h"
///**
//  Definition for a binary tree node.
//  */
// struct TreeNode {
//      int val;
//      TreeNode *left;
//      TreeNode *right;
//      TreeNode(int x) : val(x), left(NULL), right(NULL) {}
//  };
//
//class Solution {
//public:
//	vector<int> largestValues(TreeNode* root) {
//		vector<int > res;
//		if (root != NULL)
//		{
//			//res.push_back(root->val);
//			vector<TreeNode * > tmp = { root };
//			while (tmp.size()!=0)
//			{
//				int max = INT_MIN;
//				for (auto t : tmp)
//				{
//					if(t!=NULL&&t->val > max) max = t->val;
//				}
//				res.push_back(max);
//				tmp = getAllNodeBehind(tmp);
//			}
//			res.pop_back();
//			return res;
//		}
//		else
//		{
//			return {};
//		}
//
//
//	}
//	vector<TreeNode * > getAllNodeBehind(vector<TreeNode * > nodes)
//	{
//		vector<TreeNode * > res;
//		for (auto t : nodes)
//		{
//			if (t != NULL) res.push_back(t->left), res.push_back(t->right);
//		}
//		return res;
//	}
//};