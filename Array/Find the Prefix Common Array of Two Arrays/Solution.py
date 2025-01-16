class Solution:
    def findThePrefixCommonArray(self, A: list[int], B: list[int]) -> list[int]:
        result = []
        ListA = list()
        ListB = list()
        count = 0

        for i in range(len(A)):
            ListA.append(A[i])
            ListB.append(B[i])
            
            if A[i] in ListB:
                count += 1
            if B[i] in ListA and A[i] != B[i]:
                count += 1
            
            result.append(count)
        
        return result