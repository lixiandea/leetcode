#include"afx.h"
//https://blog.csdn.net/lucky52529/article/details/85110278
//转化为进制问题求解
class Solution {
public:
	int poorPigs(int buckets, int minutesToDie, int minutesToTest) {
		int k = minutesToTest / minutesToDie + 1;
		int res = 0;
		for (int index = 1; index < buckets; res++ , index *= k);
		return res;
	}
};