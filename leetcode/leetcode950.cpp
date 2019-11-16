//#include"afx.h"
//class Solution {
//public:
//	vector<int> deckRevealedIncreasing(vector<int>& deck) {
//		sort(deck.begin(), deck.end());
//		int len = deck.size();
//		if (len <= 2) return deck;
//		vector<int> res;
//		res.push_back(deck[len - 2]), res.push_back(deck[len - 1]);
//		len = len - 2;
//		while (len>0)
//		{
//			int tmp = res[res.size() - 1];
//			res.pop_back();
//			res.insert(res.begin(), tmp);
//			res.insert(res.begin(), deck[len - 1]);
//			len -= 1;
//		}
//		return res;
//	}
//};