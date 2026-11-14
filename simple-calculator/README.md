
# Simple Calculator

A terminal-based interactive calculator written in C.

## Compilation

gcc -Wall -Werror -Wextra -pedantic -std=gnu89 calculator.c -o calculator

## Run

./calculator

## Supported Operations

1. Addition
2. Subtraction
3. Multiplication
4. Division
0. Quit

## Numeric Behavior

The calculator uses double-precision floating-point numbers.

It supports integers and decimal operands.

Results are displayed using the %g format.

## Input

Menu choices are integers from 0 to 4.
Operands are read using scanf.

## Error Handling

Invalid menu numbers display "Invalid choice".

Division by zero displays "Error: division by zero".

## Known Limitations

Non-numeric input is not handled with full recovery.

Floating-point calculations may have rounding limitations.

