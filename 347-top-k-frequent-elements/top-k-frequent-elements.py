class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        d= {}
        for i in nums:
            if i in d:
                d[i]+=1
            else:
                d[i]=1
        r=[]
        for i in range(k):
            k=max(d , key=d.get)
            r.append(k)
            del d[k]
        return r