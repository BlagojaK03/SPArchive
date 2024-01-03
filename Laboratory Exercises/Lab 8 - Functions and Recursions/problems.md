## Problem 1
Define the functions:
- `divisibleByK (int number, int k)` - returns 1 if the number `k` is a divisor to `number`, otherwise return 0
- `nextDivisibleByK (int number, int k)` - returns the first number greater than `number` that is divisible by `k`.
Call `divisibleByK` in this function.

The *main* function is given and should not be changed!

In every line, the number left of the arrow is from the range [a,b],
and the number right of the arrow is the next number greater than the one on the left that is divisible by `k`.

Bonus: Make the function `nextDivisibleByK` recursive.
## Problem 2
Read the numbers A and B from keyboard input. \
Print on screen the every number in the range [A,B] that are palindromes and only made up of the digits 0, 1, 2, 3 and 4.

Task suggestions:
- Implement the function `reverseNumber (int number)` which calculates the reverse number of `number`.
- Implement the function `isPalindrome (int number)` which returns 1 if `number` is a palindrome, and 0 if not.
- Implement the function `containsDigits (int number)` which returns 1 if all digits in the number are 0, 1, 2, 3 or 4; and 0 if not.
- Use the functions `isPalindrome` and `containsDigits` in the *main* function.

Additionally, make the function `containsDigits` recursive.
## Problem 3
Read a number N from the keyboard. \
Define a function `form (int n)` which prints a form from asterisks similar to the example below:
```
Input: 5
Output:
*****
****
***
**
*
```
To get all points from this problem, make the function `form` recursive.