class Solution:
    def missingNumber(self, nums: List[int]) -> int:
        x=0
        n=len(nums)+1
        for i in range(n):
            x^=i
        
        for i in nums:
            x^=i
        return x
