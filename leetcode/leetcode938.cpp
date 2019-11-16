//#include"afx.h"
//  //Definition for a binary tree node.
//  struct TreeNode {
//      int val;
//      TreeNode *left;
//      TreeNode *right;
//      TreeNode(int x) : val(x), left(NULL), right(NULL) {}
//  };
// 
//class Solution {
//public:
//	int rangeSumBST(TreeNode* root, int L, int R) {
//		int sum = 0;
//		if (root == NULL) return sum;
//		if (root->val <= R && root->val >= L)
//		{
//			sum += root->val;
//			sum += rangeSumBST(root->left, L, R);
//			sum += rangeSumBST(root->right, L, R);
//			return sum;
//		}
//		if (root->val > R )
//		{
//			sum += rangeSumBST(root->left, L, R);
//			return sum;
//		}	
//		if ( root->val < L)
//		{
//			sum += rangeSumBST(root->right, L, R);
//			return sum;
//		}
//
//	}
//};
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
//int stringToInteger(string input) {
//	return stoi(input);
//}
//
//int main() {
//	string line;
//	while (getline(cin, line)) {
//		TreeNode* root = stringToTreeNode(line);
//		getline(cin, line);
//		int L = stringToInteger(line);
//		getline(cin, line);
//		int R = stringToInteger(line);
//
//		int ret = Solution().rangeSumBST(root, L, R);
//
//		string out = to_string(ret);
//		cout << out << endl;
//	}
//	while (true)
//	{
//
//	}
//}