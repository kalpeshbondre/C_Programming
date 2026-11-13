# Assignment 5 – C Programming

## Description
This assignment contains C programs based on conditional statements, logical operators, relational operators, and decision-making. These programs solve problems related to finding the greatest number, checking leap years, calculating grades, checking divisibility, and identifying character types.

## Programs List

| Sr. No. | Program Name | Description |
|---|---|---|
| 1 | FindGreatest | Finds the greatest among three numbers. |
| 2 | CheckLeapYear | Checks whether a year is a leap year or invalid. |
| 3 | DisplayGrade | Displays a student's grade based on marks. |
| 4 | CheckMultipleDivisibility | Checks whether a number is divisible by 3, 5, or both. |
| 5 | CheckCharacterType | Identifies an uppercase letter, lowercase letter, digit, or special character. |

## Program Details

### 1. FindGreatest
- Accepts three integers from the user.
- Compares the numbers using relational operators.
- Displays the greatest number.

### 2. CheckLeapYear
- Accepts a year from the user.
- Checks whether the year is valid.
- Uses the modulus (`%`) operator to check divisibility by 4.
- Displays whether it is a leap year.

### 3. DisplayGrade
- Accepts student marks as a floating-point number.
- Assigns grades based on the marks:
  - 90 and above: Grade A
  - 75 to below 90: Grade B
  - 60 to below 75: Grade C
  - 40 to below 60: Grade D
  - Below 40: Fail

### 4. CheckMultipleDivisibility
- Accepts an integer from the user.
- Checks divisibility by 3 and 5 using the modulus (`%`) operator.
- Displays whether the number is divisible by 3, 5, both, or neither.

### 5. CheckCharacterType
- Accepts a character from the user.
- Checks whether the character is uppercase, lowercase, a digit, or a special character.
- Uses relational and logical operators.

## Concepts Covered
- Conditional Statements (`if`, `else if`, `else`)
- Relational Operators
- Logical Operators (`&&`)
- Modulus Operator (`%`)
- Character Comparison
- Floating-Point Numbers
- User Input and Output (`scanf()` and `printf()`)
- Functions in C

## Technologies Used
- **Programming Language:** C
- **Compiler:** GCC
- **Editor:** Visual Studio Code

## Folder Structure

```text
Assignment_5/
├── README.md
├── program5_1.c
├── program5_2.c
├── program5_3.c
├── program5_4.c
└── program5_5.c
```

## How to Compile and Run

Compile a program using GCC:

```bash
gcc program5_1.c -o program5_1
```

Run the program on Windows:

```bash
program5_1.exe
```

Replace the filename with the required source file to compile and run another program.

## Coding Standards
- Use meaningful function and variable names.
- Include the required header files.
- Follow proper indentation and formatting.
- Use functions to organize program logic.
- Add comments to explain the code where necessary.

## Author
**Kalpesh Balappa Bondre**

**Date:** 22/10/2026

