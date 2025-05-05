class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        mp=prices[0]
        m=0
        for i in prices:
            if i<mp:
                mp=i
            else:
                m=max(m,i-mp)
        return m