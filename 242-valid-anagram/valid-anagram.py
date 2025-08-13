class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        ss=''.join(sorted(s))
        ts=''.join(sorted(t))
        return ss==ts