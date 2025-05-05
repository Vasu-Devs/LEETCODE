class Solution:
    def titleToNumber(self, col: str) -> int:
        r=0
        e=len(col)-1
        for i in col:
            r+=(ord(i)-ord('A')+1)*(26**e)
            e-=1
        return r