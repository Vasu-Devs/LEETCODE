class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        freq=defaultdict(int)
        for i in nums:
            if freq[i]>0:
                return True
            freq[i]+=1
        return False