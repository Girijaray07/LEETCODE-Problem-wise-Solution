class Solution:
    def triangleType(self, nums: list[int]) -> str:
        a, b, c = sorted(nums)
        if a + b <= c:
            return "none"
        elif a == b == c:
            return "equilateral"
        elif a == b or b == c or a == c:
            return "isosceles"
        else:
            return "scalene"


obj = Solution()

nums = [3,3,3]
print(f"{nums} is a: {obj.triangleType(nums)}")

nums = [3,4,5]
print(f"{nums} is a: {obj.triangleType(nums)}")

nums = [9,4,9]
print(f"{nums} is a: {obj.triangleType(nums)}")

nums = [8,4,4]
print(f"{nums} is a: {obj.triangleType(nums)}")