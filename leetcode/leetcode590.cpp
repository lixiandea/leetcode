//#include"afx.h"
//
//// Definition for a Node.
//class Node {
//public:
//	int val;
//	vector<Node*> children;
//
//	Node() {}
//
//	Node(int _val, vector<Node*> _children) {
//		val = _val;
//		children = _children;
//	}
//};
//
//class Solution {
//public:
//	vector<int> postorder(Node* root) {
//		vector<int> res;
//		vector<Node *> stack;
//		if (root == NULL) return res;
//		else
//		{
//			stack.push_back(root);
//			int point = 0;
//			while (stack.size()!= 0)
//			{
//				if (stack[point]->children.size() != 0)
//				{
//					for (auto index : stack[point]->children)
//					{
//						stack.push_back(index);
//					}
//					point++;
//				}
//				else
//				{
//					res.push_back(stack[point]->val);
//					stack.erase(stack.begin() + point);
//					point--;
//					if (point < stack.size()) point++;
//					else
//					{
//						point--;
//					}
//				}
//			}
//		}
//		return res;
//	}
//};
//
//int main()
//{
//	Node n5(5,vector<Node*>());
//	Node n6(6, vector<Node*>());
//	vector<Node*> A = { &n5,&n6 };
//	Node n3(3, A);
//	Node n2(2, vector<Node*>());
//	Node n4(4, vector<Node*>());
//	vector<Node*> B = { &n3,&n2,&n4 };
//	Node n1(1, B);
//	Solution s;
//	s.postorder(&n1);
//
//}