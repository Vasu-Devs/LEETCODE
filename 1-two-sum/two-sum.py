class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        hm={}
        for i,n in enumerate(nums):
            c=target-n
            if c in hm:
                return [hm[c],i]
            hm[n]=i