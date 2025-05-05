class Solution:
    def moveZeroes(self, nums: List[int]) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        s=0
        for f in range(0,len(nums)):
            if(nums[f]!=0):
                nums[s]=nums[f]
                s+=1
        while(s!=len(nums)):
            nums[s]=0
            s+=1
        

        