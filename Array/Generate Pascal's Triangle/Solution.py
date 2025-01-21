class Solution:
    def generate(self, numRows: int) -> list[list[int]]:
        if numRows == 0:
            return []
        if numRows == 1:
            return [[1]]

        prevRows = self.generate(numRows-1)
        newRows = [1]*numRows
        for i in range(1, numRows-1):
            newRows[i] = prevRows[-1][i-1] + prevRows[-1][i]

        prevRows.append(newRows)
        return prevRows

obj = Solution()    

input = 5
print(obj.generate(input))

input = 1
print(obj.generate(input))