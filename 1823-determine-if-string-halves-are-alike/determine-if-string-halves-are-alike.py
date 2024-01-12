class Solution:
    def halvesAreAlike(self, s: str) -> bool:
        s = s.lower()
        def getCount(s):
            cnt = 0
            for i in s:
                if i in 'aeiou':
                    cnt += 1
            return cnt
        ln = len(s) // 2
        return getCount(s[:ln]) == getCount(s[ln:])