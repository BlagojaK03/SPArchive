## Problem 1
Read from user input a square matrix with N rows and columns. First, read the whole number N, 
then the matrix's N*N elements.

Change the sign of the matrix's diagonal elements (positive to negative, and vice versa).

Print the transformed matrix on screen (format: %3d).
## Problem 2
From standard input, read the size of a football field MxN. Then, input the location of the player in the field (xy coordinates),
then the ball's location (xy coordinates), and the goal's location (two points with xy coordinates).
After inputting the values, the football field should be printed on screen. The player is represented with the character `i`,
the goal with the character `]`, the ball with `o` and the rest of the field with `-`. 

Firstly, print the field according to the description. \
Then, from input, read two values for moving the ball in the x and y coordinates. \
After moving the ball:
- If the ball is in the goal, print `GOAL`.
- If the ball is outside the field, print `OUT`.
- If the ball is in the field, but not in the goal, print the football field with the ball in its new position.

Note: Use a matrix to represent the football field.
## Problem 3
Write a program that reads two matrices with dimensions M x N,
and then print the number of columns from the first matrix that are present in the second one.