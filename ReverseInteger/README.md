# 7. Reverse Integer

**Difficulty:** Medium  
**Topic:** Math  
**Platform:** [LeetCode](https://leetcode.com/problems/reverse-integer/)

## Problem Statement

Given a signed 32-bit integer `x`, return `x` with its digits reversed.

If reversing the integer causes the value to go outside the signed 32-bit integer range `[-2³¹, 2³¹ - 1]`, return `0`.

**Constraint:** The solution must not use 64-bit integers.

## Examples

**Example 1**

```text
Input: x = 123
Output: 321
```

**Example 2**

```text
Input: x = -123
Output: -321
```

**Example 3**

```text
Input: x = 120
Output: 21
```

## Approach

1. Extract the last digit using the modulo operator (`% 10`).
2. Add the digit to the reversed number after multiplying it by 10.
3. Remove the last digit from the original number using integer division (`/ 10`).
4. Check for integer overflow before updating the reversed number.
5. Return the reversed integer, or `0` if it overflows.

## Complexity Analysis

- **Time Complexity:** O(log |x|) — processes each digit once.
- **Space Complexity:** O(1) — uses a constant amount of extra space.

## Solution

Language: C
