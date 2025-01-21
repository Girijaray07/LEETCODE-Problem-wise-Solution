# Pascal's Triangle

## Problem Statement [LEETCODE](https://leetcode.com/problems/pascals-triangle/)

Given an integer `numRows`, return the first `numRows` of Pascal's triangle.

In Pascal's triangle, each number is the sum of the two numbers directly above it.

---

## Examples

### Example 1:
**Input:**
```python
numRows = 5
```
**Output:**
```python
[[1], [1, 1], [1, 2, 1], [1, 3, 3, 1], [1, 4, 6, 4, 1]]
```

### Example 2:
**Input:**
```python
numRows = 1
```
**Output:**
```python
[[1]]
```

---

## Constraints
- `1 <= numRows <= 30`

---

## Notes
- Pascal's Triangle is constructed such that:
  - The first and last elements of each row are `1`.
  - Each inner element is the sum of the two elements directly above it.
- This problem involves iterative computation and efficient construction of rows based on prior rows.

---