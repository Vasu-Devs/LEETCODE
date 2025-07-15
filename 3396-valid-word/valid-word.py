class Solution:
    def isValid(self, word: str) -> bool:
        vowels="aeiou"
        consonants = "bcdfghjklmnpqrstvwxyz"
        if not word.isalnum() or len(word)<3:
            return False
        f1=f2=0
        for i in word:
            if i.lower() in vowels:
                f1=1
            if i.lower() in consonants:
                f2=1

        if f1==1 and f2==1:
            return True
        return False 
