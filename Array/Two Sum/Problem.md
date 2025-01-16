# Two Sum

## Problem Statement [LEETCODE](https://leetcode.com/problems/two-sum/description/)

Given an array of integers `nums` and an integer `target`, return the indices of the two numbers such that they add up to `target`.

### Assumptions
- Each input will have exactly one solution.
- You may not use the same element twice.
- You can return the answer in any order.

## Examples

### Example 1:
Input:
```python
nums = [2,7,11,15]
target = 9
```
Output:
```python
[0,1]
```
Explanation: Because `nums[0] + nums[1] == 9`, we return `[0, 1]`.

### Example 2:
Input:
```python
nums = [3,2,4]
target = 6
```
Output:
```python
[1,2]
```

### Example 3:
Input:
```python
nums = [3,3]
target = 6
```
Output:
```python
[0,1]
```

## Constraints
- `2 <= nums.length <= 10^4`
- `-10^9 <= nums[i] <= 10^9`
- `-10^9 <= target <= 10^9`
- Only one valid answer exists.

## Hints
- Use a hash table to store the difference of the target and the current number.
- This helps in reducing the time complexity to O(n).