//#include"afx.h"
////思路：应该是相当于从根节点往下逐渐找，子节点和父亲节点不同的算是0，其子节点若是和父亲节点相同则+1，否则算是归一
// //Definition for a binary tree node.
// struct TreeNode {
//    int val;
//    TreeNode *left;
//    TreeNode *right;
//    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
//};
//
//class Solution {
//public:
//	int longestUnivaluePath(TreeNode* root) {
//		if (root == NULL) return 0;
//		int index = 0;
//		int max = 0;
//		vector<pair<TreeNode*, int>> record;
//		record.push_back(pair<TreeNode *, int>(root,0));
//		while (index != record.size())
//		{
//			int flag = 0;
//			int FaFlag = 0;
//			TreeNode* tmp = record[index].first;
//			if (record[index].second > 0) FaFlag++;
//			if (tmp->left != NULL) 
//			{
//				if (tmp->left->val == tmp->val)
//				{
//					record.push_back(pair<TreeNode*, int>(tmp->left, record[index].second + 1));
//					flag++;
//				}
//				else
//				{
//					record.push_back(pair<TreeNode*, int>(tmp->left, 0));
//				}
//			}
//			if (tmp->right != NULL) 
//			{
//				if (tmp->right->val == tmp->val)
//				{
//					record.push_back(pair<TreeNode*, int>(tmp->right, record[index].second + 1));
//					flag++;
//				}
//				else
//				{
//					record.push_back(pair<TreeNode*, int>(tmp->right, 0));
//				}
//			}
//			if (FaFlag == 0)
//			{
//
//			}
//			index++;
//		}
//		for (auto i : record)
//		{
//			if (i.second > max) max = i.second;
//		}
//		return max;
//	}
//};
//
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
//int main() {
//	string line;
//	while (getline(cin, line)) {
//		TreeNode* root = stringToTreeNode(line);
//
//		int ret = Solution().longestUnivaluePath(root);
//
//		string out = to_string(ret);
//		cout << out << endl;
//	}
//	return 0;
//}