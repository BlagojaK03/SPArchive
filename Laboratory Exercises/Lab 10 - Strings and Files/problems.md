## Problem 1
Read an array of maximum 100 characters. Transform the array such that the left and right
half of the string swap places.
## Problem 2
From standard input read the number N, the number K and the character C.
Then, read N character arrays (each in a new line). \
Print on screen the character arrays that contain the character C exactly K times regardless of the letter case.
If there are no such arrays, print the message `NONE`.

**Personal note regarding this problem:** \
*In the solution provided, the program treats spaces as new lines, regardless of whether the read method used is `scanf` or `fgets`.
This is not meant to happen, so I encourage you to find a solution to this problem.*
## Problem 3
Write a program which reads from a file named `text.txt` and determines and prints on standard output:
- the relative frequency of all lowercase letters
- the relative frequency of all uppercase letters 

The relative frequency of given characters is the quotient of the total occurrences of those characters and
the total amount of characters in the text (excluding spaces and special characters).

The `writeToFile()` function is given and should not be changed!