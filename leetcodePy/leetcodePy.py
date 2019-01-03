class Solution:
    def reverseWords(self, s):
        """
        :type s: str
        :rtype: str
        """
        res = ""
        for index in s.split():
            index = index[::-1]
            res += index + " "
        return res.strip()