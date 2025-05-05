class Solution:
    def arrayRankTransform(self, arr: List[int]) -> List[int]:
        
        l=sorted(set(arr))
        r={num: i+1 for i, num in enumerate(l)}
        rs=[]
        for i in arr:
            rs.append(r[i])
        return rs