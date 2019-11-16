#include"afx.h"
class Solution {
public:
	bool canPlaceFlowers(vector<int>& flowerbed, int n) {
		int curn = n;
		int len = flowerbed.size();
		if (len == 1) {
			if (flowerbed[0] == 1 && n != 0) return false;
			if (flowerbed[0] == 0 && n > 1) return false;
			if (flowerbed[0] == 1 && n == 0) return true;
			if (flowerbed[0] == 0 && n < 1) return true;
		}
		if (flowerbed[0] == 0 && flowerbed[1] == 0) {
			curn--;
			flowerbed[0] = 1;
		}
		//第一个是否能够插入
		for (int index = 1; index < len - 1; index++)
		{
			if (flowerbed[index - 1] == 0 && flowerbed[index + 1] == 0&& flowerbed[index ] == 0) {
				curn--;
				flowerbed[index] = 1;
			}
		}
		if (flowerbed[len - 2] == 0 && flowerbed[len - 1] == 0) curn--;
		if (curn < 1) return true;
		else
		{
			return false;
		}
	}
};