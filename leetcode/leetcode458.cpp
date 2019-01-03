#include"afx.h"
class Solution {
public:
	int poorPigs(int buckets, int minutesToDie, int minutesToTest) {
		int k = minutesToTest / minutesToDie + 1;
		int res = 0;
		for (int index = 1; index < buckets; res++ , index *= k);
		return res;
	}
};