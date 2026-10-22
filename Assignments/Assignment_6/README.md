# Assignment 6 – C Programming

## Description
This assignment contains C programs based on conditional statements, logical operators, relational operators, and decision-making. The programs solve practical problems related to electricity bill calculation, admission eligibility, shopping discounts, triangle validity, and employee bonuses.

## Programs List

| Sr. No. | Program Name | Description |
|---|---|---|
| 1 | CalculateElectricityBill | Calculates the electricity bill based on consumed units and different rates. |
| 2 | CheckAdmission | Checks admission eligibility based on marks and age. |
| 3 | CalculateDiscount | Calculates the shopping discount and payable amount based on the purchase amount. |
| 4 | CheckTriangle | Checks whether three given sides form a valid triangle. |
| 5 | CalculateBonus | Calculates an employee's bonus based on salary and years of service. |

## Program Details

### 1. CalculateElectricityBill
- Accepts electricity consumption in units.
- Displays an error message if the units are negative.
- Calculates the bill using the following rates:
  - Up to 100 units: ₹5 per unit
  - 101 to 200 units: ₹7 per additional unit, with the first 100 units charged at ₹5 each
  - Above 200 units: ₹10 per additional unit, with the earlier slabs charged at their respective rates
- Displays the final bill amount.

### 2. CheckAdmission
- Accepts student marks and age.
- Checks admission eligibility using conditional statements.
- Displays eligible, not eligible, or invalid input according to the conditions in the program.
- Eligibility requires marks of at least 60 and an age of at least 17.

### 3. CalculateDiscount
- Accepts the purchase amount.
- Displays an error message for a negative amount.
- Calculates the discount according to the purchase amount:
  - Below ₹1,000: No discount
  - ₹1,000 to below ₹5,000: 10% discount
  - ₹5,000 and above: 20% discount
- Displays the final payable amount after applying the discount.

### 4. CheckTriangle
- Accepts the lengths of three sides.
- Checks whether all sides are positive.
- Uses the triangle inequality conditions to determine whether the sides form a valid triangle.
- Displays `Valid Triangle` or `Invalid Triangle`.

### 5. CalculateBonus
- Accepts the employee's salary and years of service.
- Displays an error message if the salary is non-positive or years of service are negative.
- Calculates the bonus according to years of service:
  - More than 10 years: 15% bonus
  - 5 to 10 years: 10% bonus
  - Below 5 years: 5% bonus
- Displays the calculated bonus amount.

## Concepts Covered
- Conditional Statements (`if`, `else if`, `else`)
- Relational Operators
- Logical Operators (`&&`, `||`)
- Arithmetic Operators
- Percentage and Discount Calculations
- Decision-Making
- Input Validation
- Functions in C
- User Input and Output (`scanf()` and `printf()`)

## Technologies Used
- **Programming Language:** C
- **Compiler:** GCC
- **Editor:** Visual Studio Code

## Folder Structure

```text
Assignment_6/
├── README.md
├── program6_1.c
├── program6_2.c
├── program6_3.c
├── program6_4.c
└── program6_5.c
```

## How to Compile and Run

Compile a program using GCC:

```bash
gcc program6_1.c -o program6_1
```

Run the program on Windows:

```bash
program6_1.exe
```

Replace the filename with the required source file to compile and run another program.

## Coding Standards
- Use meaningful function and variable names.
- Include the required header files.
- Follow proper indentation and formatting.
- Use functions to organize program logic.
- Validate input where required.
- Add comments to explain the code where necessary.

## Author
**Kalpesh Balappa Bondre**

**Date:** 22/10/2026

