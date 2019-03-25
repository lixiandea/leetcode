//#include"afx.h"
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
//	TreeNode* sortedArrayToBST(vector<int>& nums) {
//		//从中间值建node并连接起来
//
//		return buildNode(0, nums.size()-1, nums);
//	}
//	TreeNode* buildNode(int begin, int end, vector<int>nums)
//	{
//		printf("%d %d\n", begin, end);
//
//		if (begin == end)
//		{
//			return new TreeNode(nums[begin]);
//		}
//		if (end < begin)return NULL;
//		TreeNode * root = new TreeNode(nums[(begin + end) / 2]);
//		{
//			root->left = buildNode(begin, (begin + end) / 2 - 1, nums);
//			root->right = buildNode( (begin + end) / 2 + 1,end, nums);
//		}
//		return root;
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
//vector<int> stringToIntegerVector(string input) {
//	vector<int> output;
//	trimLeftTrailingSpaces(input);
//	trimRightTrailingSpaces(input);
//	input = input.substr(1, input.length() - 2);
//	stringstream ss;
//	ss.str(input);
//	string item;
//	char delim = ',';
//	while (getline(ss, item, delim)) {
//		output.push_back(stoi(item));
//	}
//	return output;
//}
//
//string treeNodeToString(TreeNode* root) {
//	if (root == nullptr) {
//		return "[]";
//	}
//
//	string output = "";
//	queue<TreeNode*> q;
//	q.push(root);
//	while (!q.empty()) {
//		TreeNode* node = q.front();
//		q.pop();
//
//		if (node == nullptr) {
//			output += "null, ";
//			continue;
//		}
//
//		output += to_string(node->val) + ", ";
//		q.push(node->left);
//		q.push(node->right);
//	}
//	return "[" + output.substr(0, output.length() - 2) + "]";
//}
//
//int main() {
//	string line;
//	while (getline(cin, line)) {
//		vector<int> nums = stringToIntegerVector(line);
//
//		TreeNode* ret = Solution().sortedArrayToBST(nums);
//
//		string out = treeNodeToString(ret);
//		cout << out << endl;
//	}
//	return 0;
//}