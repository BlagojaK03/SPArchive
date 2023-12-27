## Problem 1
On standard input, three numbers are read which represent times (in minutes) for 
three contestants that ran 5km in the Skopje marathon. \
The number of the fastest contestant needs to be printed. \
If more than one contestant got the fastest time, print the numbers of the contestants that did so.
## Problem 2
Write a program in which the input is a date (formatted DD MM YYYY), and the output is 0 or 1,
depending on if the date is valid.

Caution: To check the validity of the date, check if:
- the month is a number between 1 and 12
- the day corresponds to the number of days in the month
- the year in a date that starts with "29 02" is a leap year
  - leap years are years that are divisible by 400 or is divisible by 4, but not by 100
## Problem 3
Marko is driving on the highway. His car has N dashes of fuel left, and the car uses a dash every 100km.
Marko's goal is to get to the gas station first, which is M kilometers away, to get fuel for the tank
(an additional S dashes of fuel),
then he continues to his destination which is K kilometers away (K is always greater than M).

Example: \
Marko is 300 km away from the gas station and 700km away from his destination.
If Marko has 4 dashes of fuel, he can get to the gas station, and he will be left with a dash of fuel.
He gets an additional 2 dashes of fuel.
He still has 400km to reach the destination from the gas station. He will not have enough fuel to reach it.

On input, assign values to N, S, M and K. \
On output:
- Print 1 if Marko reaches his destination,
- Print 0 if Marko does not reach his destination, and
- Print -1 if Marko does not reach the gas station