# CodeWars
All my solutions to the katas done in [CodeWars](https://codewars.com)

**[My profile.](https://www.codewars.com/users/Alejandro-GDLF)**

# Index
1. [Matrix Determinant](#matrix-determinant)
2. [Moving Zeros To The End](#moving-zeros-to-the-end)
3. [Sudoku Solution Validator](#sudoku-solution-validator)
4. [Mexican Wave](#mexican-wave)
5. [Find Unique Number](#find-the-unique-number)
6. [Product Of Consecutive Fib Numbers](#product-of-consecutive-fib-numbers)
7. [Unique In Order](#unique-in-order)
8. [Does My Number Look Big In This?](#does-my-number-look-big-in-this)
9. [RGB To Hex Conversion](#rgb-to-hex-conversion)
10. [Find The Next Perfect Square](#find-the-perfect-square)
11. [Complementary DNA](#complementary-dna)
12. [Isograms](#isograms)
13. [Decode The Morse Code](#decode-the-morse-code)
14. [Take A Ten Minutes Walk](#take-a-ten-minutes-walk)

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

# Product of consecutive Fib numbers
The Fibonacci numbers are the numbers in the following integer sequence (Fn):

> 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233...

such as

> F(n) = F(n-1) + F(n-2) with F(0) = 0 and F(1) = 1.

Given a number, say prod (for product), we search two Fibonacci numbers F(n) and F(n+1) verifying

> F(n) * F(n+1) = prod.

Your function productFib takes an integer (prod) and returns an array:

~~~
[F(n), F(n+1), true] or {F(n), F(n+1), 1} or (F(n), F(n+1), True)
~~~

depending on the language if F(n) * F(n+1) = prod.

If you don't find two consecutive F(n) verifying F(n) * F(n+1) = prodyou will return

~~~
[F(n), F(n+1), false] or {F(n), F(n+1), 0} or (F(n), F(n+1), False)
~~~

F(n) being the smallest one such as F(n) * F(n+1) > prod.

**Solution in file *[productOfConsecutiveFibNumbers.cpp](./solutions/productOfConsecutiveFibNumbers.cpp)***


# Unique In Order

Implement the function unique_in_order which takes as argument a sequence and returns a list of items without any elements with the same value next to each other and preserving the original order of elements.

For example:
~~~
uniqueInOrder("AAAABBBCCDAABBB") == {'A', 'B', 'C', 'D', 'A', 'B'}
uniqueInOrder("ABBCcAD")         == {'A', 'B', 'C', 'c', 'A', 'D'}
uniqueInOrder([1,2,2,3,3])       == {1,2,3}
~~~

**Solution in file *[uniqueInOrder.cpp](./solutions/uniqueInOrder.cpp)***

# Does my number look big in this?
A Narcissistic Number (or Armstrong Number) is a positive number which is the sum of its own digits, each raised to the power of the number of digits in a given base. In this Kata, we will restrict ourselves to decimal (base 10).

For example, take 153 (3 digits), which is narcisstic:
~~~
1^3 + 5^3 + 3^3 = 1 + 125 + 27 = 153
~~~

and 1652 (4 digits), which isn't:

~~~
1^4 + 6^4 + 5^4 + 2^4 = 1 + 1296 + 625 + 16 = 1938

~~~

**The Challenge:**

Your code must return true or false (not 'true' and 'false') depending upon whether the given number is a Narcissistic number in base 10. This may be True and False in your language, e.g. PHP.

Error checking for text strings or other invalid inputs is not required, only valid positive non-zero integers will be passed into the function.

**Solution in file *[doesMyNumberLookBig.cpp](./solutions/doesMyNumberLookBig.cpp)***

# RGB To Hex Conversion
The rgb function is incomplete. Complete it so that passing in RGB decimal values will result in a hexadecimal representation being returned. Valid decimal values for RGB are 0 - 255. Any values that fall out of that range must be rounded to the closest valid value.

Note: Your answer should always be 6 characters long, the shorthand with 3 will not work here.

The following are examples of expected output values:

~~~
rgb(255, 255, 255) # returns FFFFFF
rgb(255, 255, 300) # returns FFFFFF
rgb(0,0,0) # returns 000000
rgb(148, 0, 211) # returns 9400D3
~~~

**Solution in file *[rgbToHex.cpp](./solutions/rgbToHex.cpp)***

# Find The Perfect Square
You might know some pretty large perfect squares. But what about the NEXT one?

Complete the findNextSquare method that finds the next integral perfect square after the one passed as a parameter. Recall that an integral perfect square is an integer n such that sqrt(n) is also an integer.

If the parameter is itself not a perfect square then -1 should be returned. You may assume the parameter is non-negative.

**Examples:(Input --> Output)**
~~~
121 --> 144
625 --> 676
114 --> -1 since 114 is not a perfect square
~~~

**Solution in file *[findThePerfectSquare.cpp](./solutions/findThePerfectSquare.cpp)***

# Complementary DNA
Deoxyribonucleic acid (DNA) is a chemical found in the nucleus of cells and carries the "instructions" for the development and functioning of living organisms.

If you want to know more: http://en.wikipedia.org/wiki/DNA

In DNA strings, symbols "A" and "T" are complements of each other, as "C" and "G". Your function receives one side of the DNA (string, except for Haskell); you need to return the other complementary side. DNA strand is never empty or there is no DNA at all (again, except for Haskell).

More similar exercise are found here: http://rosalind.info/problems/list-view/ (source)

**Examples**
~~~
"ATTGC" --> "TAACG"
"GTAT" --> "CATA"
~~~

**Solution in file *[complementaryDNA.cpp](./solutions/complementaryDNA.cpp)***

# Isograms
An isogram is a word that has no repeating letters, consecutive or non-consecutive. Implement a function that determines whether a string that contains only letters is an isogram. Assume the empty string is an isogram. Ignore letter case.

**Example: (Input --> Output)**
~~~
"Dermatoglyphics" --> true 
"aba" --> false 
"moOse" --> false (ignore letter case)
~~~
**Solution in file *[isograms.cpp](./solutions/isograms.cpp)***

# Decode the Morse Code
In this kata you have to write a simple Morse code decoder. While the Morse code is now mostly superseded by voice and digital data communication channels, it still has its use in some applications around the world.
The Morse code encodes every character as a sequence of "dots" and "dashes". For example, the letter A is coded as ·−, letter Q is coded as −−·−, and digit 1 is coded as ·−−−−. The Morse code is case-insensitive, traditionally capital letters are used. When the message is written in Morse code, a single space is used to separate the character codes and 3 spaces are used to separate words. For example, the message HEY JUDE in Morse code is ···· · −·−−   ·−−− ··− −·· ·.

**NOTE:** Extra spaces before or after the code have no meaning and should be ignored.

In addition to letters, digits and some punctuation, there are some special service codes, the most notorious of those is the international distress signal SOS (that was first issued by Titanic), that is coded as ···−−−···. These special codes are treated as single special characters, and usually are transmitted as separate words.

Your task is to implement a function that would take the morse code as input and return a decoded human-readable string.

~~~
decodeMorse('.... . -.--   .--- ..- -.. .')
//should return "HEY JUDE"
~~~

**Solution in file *[decodeMorseCode.cpp](./solutions/decodeMorseCode.cpp)***

# Take a Ten Minutes Walk
You live in the city of Cartesia where all roads are laid out in a perfect grid. You arrived ten minutes too early to an appointment, so you decided to take the opportunity to go for a short walk. The city provides its citizens with a Walk Generating App on their phones -- everytime you press the button it sends you an array of one-letter strings representing directions to walk (eg. ['n', 's', 'w', 'e']). You always walk only a single block for each letter (direction) and you know it takes you one minute to traverse one city block, so create a function that will return true if the walk the app gives you will take you exactly ten minutes (you don't want to be early or late!) and will, of course, return you to your starting point. Return false otherwise.

> **Note:** you will always receive a valid array containing a random assortment of direction letters ('n', 's', 'e', or 'w' only). It will never give you an empty array (that's not a walk, that's standing still!).

**Solution in file *[takeATenMinutesWalk.cpp](./solutions/takeATenMinutesWalk.cpp)***