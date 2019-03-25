//#include"afx.h"
// //Definition for a binary tree node.
// struct TreeNode {
//     int val;
//     TreeNode *left;
//     TreeNode *right;
//     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
// };
//
//class Solution {
//public:
//	bool isSymmetric(TreeNode* root) {
//		if (root == NULL) return true;
//		if (root->left == NULL && root->right == NULL) return true;
//		if (root->left == NULL || root->right == NULL) return false;
//		if (root->left->val == root->right->val)
//			return Judge(root->left, root->right);
//		else
//		{
//			return false;
//		}
//
//	}
//
//	bool Judge(TreeNode* left, TreeNode* right)
//	{
//		if (left == NULL && right == NULL) return true;
//		else
//		{
//			if (left == NULL || right == NULL) return false;
//			else
//			{
//				if (left->val == right->val)
//					return Judge(left->left, right->right) && Judge(left->right, right->left);
//				else
//				{
//					return false;
//				}
//			}
//		}
//		
//	}
//};
//
//void trimLeftTrailingSpaces(string &input) {
//	input.erase(input.begin(), find_if(input.begin(), input.end(), [](int ch) {
//		return !isspace(ch);
//	}));
//}
//
//void trimRightTrailingSpaces(string &input) {
//	input.erase(find_if(input.rbegin(), input.rend(), [](int ch) {
//		return !isspace(ch);
//	}).base(), input.end());
//}
//
//TreeNode* stringToTreeNode(string input) {
//	trimLeftTrailingSpaces(input);
//	trimRightTrailingSpaces(input);
//	input = input.substr(1, input.length() - 2);
//	if (!input.size()) {
//		return nullptr;
//	}
//
//	string item;
//	stringstream ss;
//	ss.str(input);
//
//	getline(ss, item, ',');
//	TreeNode* root = new TreeNode(stoi(item));
//	queue<TreeNode*> nodeQueue;
//	nodeQueue.push(root);
//
//	while (true) {
//		TreeNode* node = nodeQueue.front();
//		nodeQueue.pop();
//
//		if (!getline(ss, item, ',')) {
//			break;
//		}
//
//		trimLeftTrailingSpaces(item);
//		if (item != "null") {
//			int leftNumber = stoi(item);
//			node->left = new TreeNode(leftNumber);
//			nodeQueue.push(node->left);
//		}
//
//		if (!getline(ss, item, ',')) {
//			break;
//		}
//
//		trimLeftTrailingSpaces(item);
//		if (item != "null") {
//			int rightNumber = stoi(item);
//			node->right = new TreeNode(rightNumber);
//			nodeQueue.push(node->right);
//		}
//	}
//	return root;
//}
//
//string boolToString(bool input) {
//	return input ? "True" : "False";
//}
//
//int main() {
//	string line;
//	while (getline(cin, line)) {
//		TreeNode* root = stringToTreeNode(line);
//
//		bool ret = Solution().isSymmetric(root);
//
//		string out = boolToString(ret);
//		cout << out << endl;
//	}
//	return 0;
//}