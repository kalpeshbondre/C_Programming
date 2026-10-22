# Assignment 4 – C Programming

## Description
This assignment contains C programs based on conditional statements and decision-making. The programs accept input from the user and perform different operations using `if`, `else if`, and `else` statements.

## Programs List

| Sr. No. | Program Name | Description |
|---|---|---|
| 1 | CheckNumber | Checks whether a number is positive, negative, or zero. |
| 2 | CheckEvenOdd | Checks whether a number is even or odd. |
| 3 | FindGreater | Finds the greater of two numbers or checks whether both numbers are equal. |
| 4 | CheckVotingEligibility | Checks voting eligibility based on age and identifies invalid age. |
| 5 | CheckCharacterType | Identifies whether a character is uppercase, lowercase, a digit, or a special character. |

## Program Details

### 1. CheckNumber
- Accepts an integer from the user.
- Checks whether the number is positive, negative, or zero.
- Uses `if`, `else if`, and `else` statements.

### 2. CheckEvenOdd
- Accepts an integer from the user.
- Uses the modulus (`%`) operator to check whether the number is divisible by 2.
- Displays whether the number is even or odd.

### 3. FindGreater
- Accepts two integers from the user.
- Compares both numbers using relational operators.
- Displays the greater number or indicates that both numbers are equal.

### 4. CheckVotingEligibility
- Accepts the user's age.
- Displays an invalid-age message if the age is negative.
- Checks whether the user is eligible to vote based on the age of 18 years.

### 5. CheckCharacterType
- Accepts a character from the user.
- Checks whether the character is an uppercase alphabet, lowercase alphabet, digit, or special character.
- Uses character comparisons and logical operators.

## Concepts Covered
- Conditional Statements (`if`, `else if`, `else`)
- Relational Operators
- Logical Operators (`&&`)
- Arithmetic Modulus Operator (`%`)
- Character Comparison
- User Input and Output (`scanf()` and `printf()`)
- Functions in C

## Technologies Used
- **Programming Language:** C
- **Compiler:** GCC
- **Editor:** Visual Studio Code

## Folder Structure

```text
Assignment_4/
├── README.md
├── program4_1.c
├── program4_2.c
├── program4_3.c
├── program4_4.c
└── program4_5.c
```

## How to Compile and Run

Compile a program using GCC:

```bash
gcc program4_1.c -o program4_1
```

Run the program on Windows:

```bash
program4_1.exe
```

Replace `program4_1.c` with the required source filename to compile another program.

## Coding Standards
- Use meaningful function and variable names.
- Include the required header files.
- Use proper indentation and formatting.
- Add comments to explain the program where necessary.
- Use functions to organize program logic.

## Author
**Kalpesh Balappa Bondre**

**Date:** 22/10/2026

