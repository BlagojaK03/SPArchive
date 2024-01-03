## Problem 1
Read from user input a number N and then N elements in an array. \
Modify the array such that even elements are increased by 1 and odd elements are decreased by 1. \
Print the modified array on standard output, with spaces between each element.
## Problem 2
Read from user input a positive number N that defines the dimensions of a square matrix. \
Write a program that will print the length of the longest strictly ascending subarray in the matrix
(max dimensions: 100 x 100), if viewed in rows.

Example: For the given matrix: \
`1 2 3 9 8`\
`5 5 5 5 5`\
`0 1 2 0 0`\
`9 1 2 3 4`\
`1 1 1 1 1`\
The length of the longest strictly ascending subarray is 4,
and it's the length of the subarray `1 2 3 4`, on the fourth row.
## Problem 3
From user input, an array *A* with integer elements and a length N (N <= 100) is read. \
Additionally, a whole number *K* is read. Transform the array such that 
all elements that are lesser than K are moved to the beginning, then
all elements that are greater than or equal K come afterwards. \
The order of the elements should not change. \
Print the elements of the new array in one row on standard output, separated by a space.

Examples:
- If A[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0} and K = 6, then the transformed array will be: \
{5, 4, 3, 2, 1, 0, 10, 9, 8, 7, 6}
- If A[] = {2, 4, 6, 8, 10} and K = 5, then the transformed array will be: \
{2, 4, 6, 8, 10}