#include"afx.h"
class Solution {
public:
	string defangIPaddr(string address) {
		string res;
		for (int index = 0; index < address.size(); index++)
		{
			if (address[index] == '.')
			{
				res.push_back('[');
				res.push_back(address[index]);
				res.push_back(']');
			}
			else
			{
				res.push_back(address[index]);
			}
		}
		return res;
	}
};