# CPP-15-RECURSION
## AIM

To study and implement recursion in C++ through four different programs:

Factorial of a number

Reverse digits of a number

Reverse a string

Sum of natural numbers

## OBJECTIVES

To understand the principle of recursion and its working mechanism.

To learn how problems can be broken down into smaller subproblems.

To differentiate recursion from iteration.

## THEORY
### What is Recursion?

Recursion is a programming technique in which a function solves a problem by calling itself. 

The idea is based on solving complex problems by breaking them into smaller, more manageable subproblems of the same type. 

This continues until the problem becomes so small that it can be solved directly, known as the base case.

### A recursive function always has two essential parts:

Base Case (Termination Condition): Prevents infinite calling and stops recursion.

Recursive Case: Defines how the problem is reduced into a smaller subproblem and solved.

### Working of Recursion

When a recursive function is called, each call is stored on the function call stack in memory. 

Once the base case is reached, the stored calls begin to resolve in reverse order, unwinding the stack. 

This stack-based execution is the core of recursion.

### Types of Recursion

Direct Recursion: A function calls itself directly.

Indirect Recursion: One function calls another, and that function calls the first one.

Tail Recursion: The recursive call is the last operation performed in the function.

Head Recursion: The recursive call happens first, and then additional operations are performed.

### Advantages of Recursion

Provides elegant and clean solutions to complex problems.

Reduces the need for multiple loops and conditions.

Naturally fits problems like factorial, Fibonacci, reverse operations, and tree traversal.

Makes code closer to mathematical definitions.

### Disadvantages of Recursion

Uses more memory because of the call stack.

May be slower than iteration.

Risk of stack overflow if the base case is missing or incorrect.

### Comparision Table 
| Program        | Base Case Condition  | Recursive Formula            | Example Input | Example Output | Concept Focus            |
| -------------- | -------------------- | ---------------------------- | ------------- | -------------- | ------------------------ |
| Factorial      | n ≤ 1 → 1            | n × factorial(n-1)           | 5             | 120            | Multiplication recursion |
| Reverse Digits | n = 0 → stop         | print(n % 10), reverse(n/10) | 123           | 321            | Number reversal          |
| Reverse String | End of string → stop | reverse(str+1), print(str)   | HELLO         | OLLEH          | String reversal          |
| Sum of Numbers | n ≤ 1 → 1            | n + sum(n-1)                 | 5             | 15             | Addition recursion       |

## Algorithms
### Factorial of a Number

Start.

Input a number n.

Define a recursive function factorial(n):

If n <= 1 → return 1 (base case).

Else → return n * factorial(n-1) (recursive case).

Call factorial(n) and store the result.

Display the factorial.

Stop.

### Reverse Digits of a Number

Start.

Input a number n.

Define a recursive function reverseNumber(n):

If n == 0 → return (base case).

Else → print n % 10, then call reverseNumber(n / 10) (recursive case).

Call reverseNumber(n) to display digits in reverse.

Stop.

### Reverse a String

Start.

Input a string str.

Define a recursive function reverseString(str, index):

If str[index] == '\0' → return (base case).

Else → call reverseString(str, index + 1) first, then print str[index] (recursive case).

Call reverseString(str, 0) to display the string in reverse.

Stop.

### Sum of Natural Numbers

Start.

Input a number n.

Define a recursive function sumNumbers(n):

If n <= 1 → return 1 (base case).

Else → return n + sumNumbers(n-1) (recursive case).

Call sumNumbers(n) and store the result.

Display the sum.

Stop.

## PROGRAM DESCRIPTIONS
### Factorial of a Number

Aim: To calculate factorial using recursion.

Logic: Multiply the number by the factorial of the previous number until reaching 1.

Concepts Used: Recursion, mathematical definition of factorial, base and recursive cases.

### Reverse Digits of a Number

Aim: To display the reverse of an integer using recursion.

Logic: Extract the last digit, display it, and then recursively process the remaining digits.

Concepts Used: Arithmetic operations (modulus and division), recursion.

### Reverse a String

Aim: To reverse a string using recursive function calls.

Logic: Move towards the end of the string, then display characters in reverse order during stack unwinding.

Concepts Used: String traversal, pointers, recursion.

### Sum of Natural Numbers

Aim: To calculate the sum of first n natural numbers using recursion.

Logic: Add the number to the sum of all smaller numbers until reaching 1.

Concepts Used: Addition, recursion, mathematical induction principle.

## CONCEPTS USED

Recursion: Core principle in all programs.

Base Case and Recursive Case: Essential to stop infinite calls.

Stack Memory: Every recursive call is pushed to the stack until unwinding begins.

Mathematical Induction: Programs follow base step + recursive step.

Pointers and Strings: Used in the string reversal program.

Arithmetic Operations: Used in reversing digits and summation.

## Conclusion

Recursion is a powerful concept in programming that allows problems to be solved in a natural and elegant way by breaking them into smaller subproblems.

While recursion simplifies logic and provides cleaner solutions, it must be applied carefully because it consumes more memory and may cause stack overflow if the base case is missing. 

Recursion and iteration both have advantages, and the choice depends on efficiency requirements and problem nature.
