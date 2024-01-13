class Solution:
    def minSteps(self, s: str, t: str) -> int:
        dic, res = {}, 0
        for i in s:
            if i not in dic:
                dic[i] = 1
            else:
                dic[i] += 1
        for i in t:
            if i not in dic:
                dic[i] = -1
            else:
                dic[i] -= 1
        for val in dic.values():
            if val < 0:
                res += (val * -1)
        return res