class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        freq=[0]*26
        for i in s:
            freq[ord(i)-ord('a')]+=1
        
        for i in t:
            freq[ord(i)-ord('a')]-=1

        for i in freq:
            if i!=0:
                return False
        return True
            
