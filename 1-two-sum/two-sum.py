class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        m={}
        for i in range(len(nums)):
            c=target-nums[i]
            if(m.get(c,-1)!=-1):
                return [m[c],i]
            m[nums[i]]=i
        return []