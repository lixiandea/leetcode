//#include"afx.h"
//
//// Definition for a QuadTree node.
//class Node {
//public:
//	bool val;
//	bool isLeaf;
//	Node* topLeft;
//	Node* topRight;
//	Node* bottomLeft;
//	Node* bottomRight;
//
//	Node() {}
//
//	Node(bool _val, bool _isLeaf, Node* _topLeft, Node* _topRight, Node* _bottomLeft, Node* _bottomRight) {
//		val = _val;
//		isLeaf = _isLeaf;
//		topLeft = _topLeft;
//		topRight = _topRight;
//		bottomLeft = _bottomLeft;
//		bottomRight = _bottomRight;
//	}
//};
//
//struct leafMes
//{
//	bool isleaf;
//	bool value;
//};
//
//class Block
//{
//public:
//	int topX;
//	int topY;
//	int bottomX;
//	int bottomY;
//	Block(int topX, int topY, int bottomX, int bottomY)
//	{
//		this->bottomX = bottomX;
//		this->bottomY = bottomY;
//		this->topX = topX;
//		this->topY = topY;
//	}
//	vector<Block*> Divide()
//	{
//		int midX1 = (topX + bottomX + 1) / 2;
//		int midX2 = (topX + bottomX - 1) / 2;
//		int midY1 = (bottomY + topY + 1) / 2;
//		int midY2 = (bottomY + topY - 1) / 2;
//		vector<Block*> res;
//		res.push_back(new Block(topX, topY, midX2, midY2));
//		res.push_back(new Block(midX1, topY, bottomX, midY2));
//		res.push_back(new Block(topX, midY1, midX2, bottomY));
//		res.push_back(new Block(midX1, midY1, bottomX, bottomY));
//		return res;
//	} 
//	leafMes Judge(vector<vector<int>> & grid)
//	{
//		bool isleaf = true;
//		bool value = grid[this->bottomY][this->bottomX];
//
//		for (int col = this->topX; col <= this->bottomX; col++)
//		{
//			for (int row = this->topY; row <= this->bottomY; row++)
//				if (grid[row][col] != value)
//				{
//					leafMes l;
//					l.isleaf = false;
//					l.value = false;
//					return l;
//				}
//		}
//		leafMes l;
//		l.isleaf = isleaf;
//		l.value = value;
//		return l;
//	}
//};
//
//
//
//
//class Solution {
//public:
//	Node* construct(vector<vector<int>>& grid) {
//		vector<pair<Node*, Block*>> generateNode;
//		generateNode.push_back(pair<Node*, Block*>(new Node(), new Block(0, 0, grid.size() - 1, grid.size() - 1)));
//		for(int index = 0; index<generateNode.size(); index++)
//		{
//			//先判断当前节点
//			leafMes l = generateNode[index].second->Judge(grid);
//			generateNode[index].first->isLeaf = l.isleaf;
//			generateNode[index].first->val = l.value;
//			cout << generateNode[index].first->val;
//			//不是叶子节点就分裂，否则下一个节点
//			if (generateNode[index].first->isLeaf ) continue;
//			vector<Block* > divide = generateNode[index].second->Divide();
//			pair<Node*, Block*> topLeft(new Node(), divide[0]);
//			pair<Node*, Block*> topRight(new Node(), divide[1]);
//			pair<Node*, Block*> bottomLeft(new Node(), divide[2]);
//			pair<Node*, Block*> bottomRight(new Node(), divide[3]);
//			generateNode[index].first->bottomLeft = bottomLeft.first;
//			generateNode[index].first->bottomRight = bottomRight.first;
//			generateNode[index].first->topLeft = topLeft.first;
//			generateNode[index].first->topRight = topRight.first;
//			generateNode.push_back(topLeft);
//			generateNode.push_back(topRight);
//			generateNode.push_back(bottomLeft);
//			generateNode.push_back(bottomRight);
//		}
//		return generateNode[0].first;
//	}
//};
//
//
//void main()
//{
//	vector<vector<int>> grid = {{1, 1, 1, 1, 0, 0, 0, 0}, {1, 1, 1, 1, 0, 0, 0, 0}, {1, 1, 1, 1, 1, 1, 1, 1}, {1, 1, 1, 1, 1, 1, 1, 1}, {1, 1, 1, 1, 0, 0, 0, 0}, {1, 1, 1, 1, 0, 0, 0, 0}, {1, 1, 1, 1, 0, 0, 0, 0}, {1, 1, 1, 1, 0, 0, 0, 0}};
//	//vector<vector<int>> grid = { {1, 0,1,0}, {0,1,0,1},{1, 0,1,0} ,{0,1,0,1} };
//	Solution s;
//	s.construct(grid);
//	cout << "finished";
//	while (true)
//	{
//
//	}
//}