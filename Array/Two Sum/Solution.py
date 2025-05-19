#Solution Part
class Solution:
    def setZeroes(self, matrix: list[list[int]]) -> None:
        row = len(matrix)
        col = len(matrix[0])

        rowArr = [0] * row
        colArr = [0] * col

        for i in range(row):
            for j in range(col):
                if (matrix[i][j] == 0):
                    rowArr[i] = 1
                    colArr[j] = 1

        for i in range(row):
            for j in range(col):
                if (rowArr[i] or colArr[j]):
                    matrix[i][j] = 0


#program Part
obj = Solution()

matrix = [
    [1,1,1],
    [1,0,1],
    [1,1,1]
]
obj.setZeroes(matrix)
for k in matrix:
    print(k)
print()

matrix = [
    [0,1,2,0],
    [3,4,4,2],
    [1,3,1,5]
]
obj.setZeroes(matrix)
for k in matrix:
    print(k)
print()

matrix = [
    [0,1,2,1],
    [0,4,5,2],
    [1,3,1,5]
]
obj.setZeroes(matrix)
for k in matrix:
    print(k)
print()

matrix = [
    [0, 1, 2],
    [3, 4, 5],
    [1, 3, 1],
    [0, 2, 5]
]
obj.setZeroes(matrix)
for k in matrix:
    print(k)
print()

matrix = [
    [0],
    [1]
]
obj.setZeroes(matrix)
for k in matrix:
    print(k)
print()