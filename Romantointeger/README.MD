# 13. Roman to Integer

## Problem Statement

Roman numerals are represented by seven different symbols: `I`, `V`, `X`, `L`, `C`, `D`, and `M`.

| Symbol | Value |
| ------ | ----: |
| I      |     1 |
| V      |     5 |
| X      |    10 |
| L      |    50 |
| C      |   100 |
| D      |   500 |
| M      |  1000 |

Roman numerals are usually written from largest to smallest, from left to right. However, when a smaller value appears before a larger value, it is subtracted instead of added.

There are six instances where subtraction is used:

- `I` before `V` or `X` makes 4 or 9.
- `X` before `L` or `C` makes 40 or 90.
- `C` before `D` or `M` makes 400 or 900.

Given a Roman numeral, convert it to an integer.

## Examples

**Example 1**

- Input: `s = "III"`
- Output: `3`
- Explanation: III = 3.

**Example 2**

- Input: `s = "LVIII"`
- Output: `58`
- Explanation: L = 50, V = 5, III = 3.

**Example 3**

- Input: `s = "MCMXCIV"`
- Output: `1994`
- Explanation: M = 1000, CM = 900, XC = 90, and IV = 4.
