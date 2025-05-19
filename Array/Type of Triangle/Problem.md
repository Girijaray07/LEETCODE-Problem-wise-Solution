# Type of Triangle

## Problem Statement [LEETCODE](https://leetcode.com/problems/type-of-triangle/description/)

You are given a 0-indexed integer array `nums` of size 3 which can form the sides of a triangle.

* A triangle is called **equilateral** if it has all sides of equal length.
* A triangle is called **isosceles** if it has exactly two sides of equal length.
* A triangle is called **scalene** if all its sides are of different lengths.

Return a string representing the type of triangle that can be formed or `"none"` if it cannot form a triangle.

## Assumptions

* The input list `nums` will always contain exactly 3 positive integers.
* The triangle inequality theorem must hold: the sum of the lengths of any two sides must be greater than the length of the remaining side.

## Examples

### Example 1:

Input:

```python
nums = [3,3,3]
```

Output:

```python
"equilateral"
```

Explanation: Since all the sides are of equal length, it forms an equilateral triangle.

---

### Example 2:

Input:

```python
nums = [3,4,5]
```

Output:

```python
"scalene"
```

Explanation:

* `3 + 4 = 7 > 5`
* `3 + 5 = 8 > 4`
* `4 + 5 = 9 > 3`
  
Since all triangle inequality conditions hold and all sides are of different lengths, it forms a scalene triangle.

## Constraints

* `nums.length == 3`
* `1 <= nums[i] <= 100`

## Hints

* Use the triangle inequality theorem to check if the sides can form a triangle.
* Use conditions to check for equality of the sides and classify accordingly.
