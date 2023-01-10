# CodeWars
All my solutions to the katas done in CodeWars

# Index
1. [Matrix Determinant](#matrix-determinant)
2. [Moving Zeros To The End](#moving-zeros-to-the-end)
3. [Sudoku Solution Validator](#sudoku-solution-validator)
4. [Mexican Wave](#mexican-wave)
5. [Find Unique Number](#find-the-unique-number)

# Matrix Determinant
Write a function that accepts a square matrix (N x N 2D array) and returns the determinant of the matrix.

How to take the determinant of a matrix -- it is simplest to start with the smallest cases:

A 1x1 matrix |a| has determinant a.

A 2x2 matrix [ [a, b], [c, d] ] or

~~~
|a  b|
|c  d|
~~~

has determinant: a*d - b*c.

**Solution in file *[matrixDeterminant.cpp](./solutions/matrixDeterminant.cpp)***

# Moving Zeros To The End
Write an algorithm that takes an array and moves all of the zeros to the end, preserving the order of the other elements.
~~~
move_zeros({1, 0, 1, 2, 0, 1, 3}) // returns {1, 1, 2, 1, 3, 0, 0}
~~~

**Solution in file *[movingZerosEnd.cpp](./solutions/movingZerosEnd.cpp)***

# Sudoku Solution Validator
Write a function that accepts a 2D array representing a Sudoku board, and returns true if it is a valid solution, or false otherwise. The cells of the sudoku board may also contain 0's, which will represent empty cells. Boards containing one or more zeroes are considered to be invalid solutions.

**Solution in file *[sudokuSolutionValidator.cpp](./solutions/sudokuSolutionValidator.cpp)***

# Mexican Wave

**Introduction:**

The wave (known as the Mexican wave in the English-speaking world outside North America) is an example of metachronal rhythm achieved in a packed stadium when successive groups of spectators briefly stand, yell, and raise their arms. Immediately upon stretching to full height, the spectator returns to the usual seated position.

The result is a wave of standing spectators that travels through the crowd, even though individual spectators never move away from their seats. In many large arenas the crowd is seated in a contiguous circuit all the way around the sport field, and so the wave is able to travel continuously around the arena; in discontiguous seating arrangements, the wave can instead reflect back and forth through the crowd. When the gap in seating is narrow, the wave can sometimes pass through it. Usually only one wave crest will be present at any given time in an arena, although simultaneous, counter-rotating waves have been produced. (Source Wikipedia)

**Task:**

In this simple Kata your task is to create a function that turns a string into a Mexican Wave. You will be passed a string and you must return that string in an array where an uppercase letter is a person standing up. 

**Rules:**

1. The input string will always be lower case but maybe empty.

2. If the character in the string is whitespace then pass over it as if it was an empty seat

**Solution in file *[mexicanWave.cpp](./solutions/mexicanWave.cpp)***

# Find the unique number
There is an array with some numbers. All numbers are equal except for one. Try to find it!
~~~
find_uniq(std::vector<float>{1, 1, 1, 2, 1, 1});  // --> 2
find_uniq(std::vector<float>{0, 0, 0.55, 0, 0});  // --> 0.55
~~~
It’s guaranteed that array contains at least 3 numbers.

**Solution in file *[findUniqueNumber.cpp](./solutions/findUniqueNumber.cpp)***