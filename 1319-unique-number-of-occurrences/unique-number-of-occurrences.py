class Solution:
    def uniqueOccurrences(self, arr: List[int]) -> bool:
        map = {}
        for i in arr:
            if i in map:
                map[i] += 1
            else:
                map[i] = 1
        vals = map.values()
        return len(vals) == len(set(vals))