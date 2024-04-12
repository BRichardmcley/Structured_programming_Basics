# <p style='color:blue' align="center"><b>Structured Programming - The C Programming Language<br>Lecturer: Mr Tekoh Palma<br>Kelden – Software Engineering Level 1<br>Problem set 1</b></p>
<p align="center"><img src="https://github.com/BRichardmcley/Structured_programming_Basics/blob/main/Kelden%20CampusAL123%2020240412_103508.jpg" width=20% height=20% align="center"></p>
<hr>

# Swapping Two Numbers in C Without Using a Third Variable
This repository contains a simple C program that swaps the values of two variables without using a third variable.
 ## Explanation
The program swaps the values of two variables `a` and `b` without using a third variable. The swapping process involves three steps:
1. The sum of `a` and `b` is stored in `a`.
2. Now `a` is the sum of `a` and `b`, so subtracting `b` gives the original `a`, which is assigned to `b`.
3. At this point, `b` has the original `a`'s value, so subtracting `b` from `a` (which is the sum of `a` and `b`) gives the original `b`, which is assigned to `a`.

## Compilation and Execution

You can use the `gcc` compiler to compile and run this program. Here's how you can do it:

1. Save the program in a file, say `swap.c`.
2. Open a terminal in the directory containing `swap.c`.
3. Run `gcc -o swap swap.c` to compile the program. This will create an executable named `swap`.
4. Run `./swap` to execute the program.
# Swapping Two Numbers in C Without Using a Third Variable

This repository contains a simple C program that swaps the values of two variables without using a third variable.

## Explanation

The program swaps the values of two variables `a` and `b` without using a third variable. The swapping process involves three steps:

1. The sum of `a` and `b` is stored in `a`.
2. Now `a` is the sum of `a` and `b`, so subtracting `b` gives the original `a`, which is assigned to `b`.
3. At this point, `b` has the original `a`'s value, so subtracting `b` from `a` (which is the sum of `a` and `b`) gives the original `b`, which is assigned to `a`.

## Compilation and Execution

You can use the `gcc` compiler to compile and run this program. Here's how you can do it:

1. Save the program in a file, say `swap.c`.
2. Open a terminal in the directory containing `swap.c`.
3. Run `gcc -o swap swap.c` to compile the program. This will create an executable named `swap`.
4. Run `./swap` to execute the program.

# Calculating the Remainder Without Using the % Operator in C

This repository contains a simple C program that calculates the remainder of two numbers without using the `%` operator.

## Explanation

The program calculates the remainder of two numbers `dividend` and `divisor` without using the `%` operator. The process involves two steps:

1. The quotient of `dividend` and `divisor` is calculated.
2. The remainder is calculated by subtracting the product of the `quotient` and `divisor` from the `dividend`.

## Compilation Process

You can manually go through each of the four stages of the compilation process using `gcc`:

1. **Preprocessing**: This stage includes expansion of macros and inclusion of header files. You can run the preprocessor with the `-E` option:

    ```bash
    gcc -E remainder.c -o remainder.i
    ```
    This will generate the preprocessed code `remainder.i`.

2. **Compilation**: This stage translates the preprocessed code into assembly code. You can run the compiler with the `-S` option:

    ```bash
    gcc -S remainder.i -o remainder.s
    ```
    This will generate the assembly code `remainder.s`.

3. **Assembly**: This stage translates the assembly code into machine code, generating an object file. You can run the assembler with the `-c` option:

    ```bash
    gcc -c remainder.s -o remainder.o
    ```
    This will generate the object file `remainder.o`.

4. **Linking**: This stage links the object file with the libraries and generates the executable. You can run the linker by simply using `gcc` without any options:

    ```bash
    gcc remainder.o -o remainder
    ```
    This will generate the executable file `remainder`.

You can then run the executable with `./remainder`.

Please note that you can perform all these stages at once by running `gcc -o remainder remainder.c`. The `-o` option is used to specify the output file name.

# Calculating the Sum of Digits of a Three-Digit Number in C

This repository contains a simple C program that calculates the sum of digits of a three-digit number.

## Explanation

The program calculates the sum of digits of a three-digit number. The process involves three steps:

1. The last digit of the number is obtained by performing the operation `number % 10`.
2. The obtained digit is added to the sum.
3. The number is reduced by removing the last digit using the operation `number = number / 10`.

This process is repeated until the number is reduced to 0.

## Compilation Process

You can manually go through each of the four stages of the compilation process using `gcc`:

1. **Preprocessing**: This stage includes expansion of macros and inclusion of header files. You can run the preprocessor with the `-E` option:

    ```bash
    gcc -E sum_of_digits.c -o sum_of_digits.i
    ```
    This will generate the preprocessed code `sum_of_digits.i`.

2. **Compilation**: This stage translates the preprocessed code into assembly code. You can run the compiler with the `-S` option:

    ```bash
    gcc -S sum_of_digits.i -o sum_of_digits.s
    ```
    This will generate the assembly code `sum_of_digits.s`.

3. **Assembly**: This stage translates the assembly code into machine code, generating an object file. You can run the assembler with the `-c` option:

    ```bash
    gcc -c sum_of_digits.s -o sum_of_digits.o
    ```
    This will generate the object file `sum_of_digits.o`.

4. **Linking**: This stage links the object file with the libraries and generates the executable. You can run the linker by simply using `gcc` without any options:

    ```bash
    gcc sum_of_digits.o -o sum_of_digits
    ```
    This will generate the executable file `sum_of_digits`.

You can then run the executable with `./sum_of_digits`.

Please note that you can perform all these stages at once by running `gcc -o sum_of_digits sum_of_digits.c`. The `-o` option is used to specify the output file name.

Printing the Reverse of a Three-Digit Number in C

This repository contains a simple C program that prints the reverse of a three-digit number.

## Explanation

The program prints the reverse of a three-digit number. The process involves three steps:

1. The last digit of the number is obtained by performing the operation `number % 10`.
2. The obtained digit is printed.
3. The number is reduced by removing the last digit using the operation `number = number / 10`.

This process is repeated until the number is reduced to 0.

## Compilation Process

You can manually go through each of the four stages of the compilation process using `gcc`:

1. **Preprocessing**: This stage includes expansion of macros and inclusion of header files. You can run the preprocessor with the `-E` option:

    ```bash
    gcc -E reverse_number.c -o reverse_number.i
    ```
    This will generate the preprocessed code `reverse_number.i`.

2. **Compilation**: This stage translates the preprocessed code into assembly code. You can run the compiler with the `-S` option:

    ```bash
    gcc -S reverse_number.i -o reverse_number.s
    ```
    This will generate the assembly code `reverse_number.s`.

3. **Assembly**: This stage translates the assembly code into machine code, generating an object file. You can run the assembler with the `-c` option:

    ```bash
    gcc -c reverse_number.s -o reverse_number.o
    ```
    This will generate the object file `reverse_number.o`.

4. **Linking**: This stage links the object file with the libraries and generates the executable. You can run the linker by simply using `gcc` without any options:

    ```bash
    gcc reverse_number.o -o reverse_number
    ```
    This will generate the executable file `reverse_number`.

You can then run the executable with `./reverse_number`.

Please note that you can perform all these stages at once by running `gcc -o reverse_number reverse_number.c`. The `-o` option is used to specify the output file name.


Calculating Credit Card Balance After One Year in C

# This repository contains a simple C program that calculates the credit card balance after one year if a person only pays the minimum monthly payment required by the credit card company each month.

## Explanation

The program calculates the credit card balance after one year. The process involves the following steps for each month:

1. Calculate the monthly interest rate as the annual interest rate divided by 12.0.
2. Calculate the minimum monthly payment as the minimum monthly payment rate multiplied by the previous balance.
3. Calculate the monthly unpaid balance as the previous balance minus the minimum monthly payment.
4. Update the balance each month as the monthly unpaid balance plus the product of the monthly interest rate and the monthly unpaid balance.

The program prints the minimum monthly payment and the remaining balance for each month with no more than two decimal digits of accuracy. At the end of the year, the program prints the total amount paid that year and the remaining balance.

## Compilation Process

You can manually go through each of the four stages of the compilation process using `gcc`:

1. **Preprocessing**: This stage includes expansion of macros and inclusion of header files. You can run the preprocessor with the `-E` option:

    ```bash
    gcc -E credit_card_balance.c -o credit_card_balance.i
    ```
    This will generate the preprocessed code `credit_card_balance.i`.

2. **Compilation**: This stage translates the preprocessed code into assembly code. You can run the compiler with the `-S` option:

    ```bash
    gcc -S credit_card_balance.i -o credit_card_balance.s
    ```
    This will generate the assembly code `credit_card_balance.s`.

3. **Assembly**: This stage translates the assembly code into machine code, generating an object file. You can run the assembler with the `-c` option:

    ```bash
    gcc -c credit_card_balance.s -o credit_card_balance.o
    ```
    This will generate the object file `credit_card_balance.o`.

4. **Linking**: This stage links the object file with the libraries and generates the executable. You can run the linker by simply using `gcc` without any options:

    ```bash
    gcc credit_card_balance.o -o credit_card_balance
    ```
    This will generate the executable file `credit_card_balance`.

You can then run the executable with `./credit_card_balance`.

Please note that you can perform all these stages at once by running `gcc -o credit_card_balance credit_card_balance.c`. The `-o` option is used to specify the output file name.

Calculating Minimum Fixed Monthly Payment to Pay Off Credit Card Debt in a Year in C

This repository contains a simple C program that calculates the minimum fixed monthly payment needed to pay off a credit card balance within 12 months. The monthly payment is a constant amount that will be paid each month and is a multiple of 10FCFA.

## Explanation


 # The program calculates the minimum fixed monthly payment needed to pay off a credit card balance within 12 months. The process involves the following steps for each month until the balance is less than or equal to zero:

1. Calculate the monthly interest rate as the annual interest rate divided by 12.0.
2. Calculate the monthly unpaid balance as the previous balance minus the minimum fixed monthly payment.
3. Update the balance each month as the monthly unpaid balance plus the product of the monthly interest rate and the monthly unpaid balance.

The program prints the lowest monthly payment that will pay off all debt in under 1 year.

## Compilation Process

You can manually go through each of the four stages of the compilation process using `gcc`:

1. **Preprocessing**: This stage includes expansion of macros and inclusion of header files. You can run the preprocessor with the `-E` option:

    ```bash
    gcc -E credit_card_debt.c -o credit_card_debt.i
    ```
    This will generate the preprocessed code `credit_card_debt.i`.

2. **Compilation**: This stage translates the preprocessed code into assembly code. You can run the compiler with the `-S` option:

    ```bash
    gcc -S credit_card_debt.i -o credit_card_debt.s
    ```
    This will generate the assembly code `credit_card_debt.s`.

3. **Assembly**: This stage translates the assembly code into machine code, generating an object file. You can run the assembler with the `-c` option:

    ```bash
    gcc -c credit_card_debt.s -o credit_card_debt.o
    ```
    This will generate the object file `credit_card_debt.o`.

4. **Linking**: This stage links the object file with the libraries and generates the executable. You can run the linker by simply using `gcc` without any options:

    ```bash
    gcc credit_card_debt.o -o credit_card_debt
    ```
    This will generate the executable file `credit_card_debt`.

You can then run the executable with `./credit_card_debt`.

Please note that you can perform all these stages at once by running `gcc -o credit_card_debt credit_card_debt.c`. The `-o` option is used to specify the output file name.
# Telling whether or not a number is magic or not

This C program checks whether a given number is a magic number.

# Explanation

 The user provides an integer.
 The program calculates the sum of the digits of the input number.
 Next, it computes the reverse of the sum of digits.
 If the product of the sum of digits and its reverse equals the original input number, it’s considered a magic number.

 
## Compilation Process

You can manually go through each of the four stages of the compilation process using `gcc`:

1. **Preprocessing**: This stage includes expansion of macros and inclusion of header files. You can run the preprocessor with the `-E` option:

    ```bash

    gcc -E magic_number.c -o magic_number.i
    This will generate the preprocessed code `character.i`

    2. **Compilation**: This stage translates the preprocessed code into assembly code. You can run the compiler with the `-S` option:

    ```bash
    gcc -S magic_number.i -o magic_number.s
    ```
    This will generate the assembly code `magic_number.s`.
   
   3. **Assembly**: This stage translates the assembly code into machine code, generating an object file. You can run the assembler with the `-c` option:

    ```bash
    gcc -c magic_number.s -o magic_number.o
    ```
    This will generate the object file `magic_number.o`.

   4. **Linking**: This stage links the object file with the libraries and generates the executable. You can run the linker by simply using `gcc` without any options:

    ```bash
    gcc magic_number.o -o magic_number
    ```
    This will generate the executable file `magic_number`

# Compilation and execution

To compile and run this program:

Save the program in a file, magic_number.c.
Open a terminal in the directory containing magic_number.c.
Compile using gcc -o magic_number.c try2.
Execute the program with ./try2.

# Power Calculation Using Recursion in C
This C program computes the power of a given base raised to a specified exponent using recursion. The program follows these steps:

# Explanation
 The user provides the base and exponent.
 The power function recursively calculates the result by multiplying the base with the result of power(base, exponent - 1).
 If the exponent is zero, the function returns 1 (since any number raised to the power of 0 is 1).

 ## Compilation Process

You can manually go through each of the four stages of the compilation process using `gcc`:

1. **Preprocessing**: This stage includes expansion of macros and inclusion of header files. You can run the preprocessor with the `-E` option:

    ```bash

    gcc -E power.c -o power.i
    This will generate the preprocessed code `power.i`

    2. **Compilation**: This stage translates the preprocessed code into assembly code. You can run the compiler with the `-S` option:

        ```bash
    gcc -S power.i -o power.s
    ```
    This will generate the assembly code `power.s`.
   
   3. **Assembly**: This stage translates the assembly code into machine code, generating an object file. You can run the assembler with the `-c` option:

    ```bash
    gcc -c power.s -o power.o
    ```
    This will generate the object file `power.o`.

   4. **Linking**: This stage links the object file with the libraries and generates the executable. You can run the linker by simply using `gcc` without any options:

    ```bash
    gcc power.o -o power
    ```
    This will generate the executable file `power`

# Compilation and Execution
To compile and run this program:

Save the program in a file, power.c.
Open a terminal in the directory containing power.c.
Compile using gcc -o power.c try.
Execute the program with ./try.

# Character Type Identifier in C
This C program takes a character as input and identifies its type. 

# Explanation

 The user provides a character.
Switch Statement: The program uses a switch statement to categorize the character based on its type:
If the character is between ‘a’ and ‘z’, it’s considered a small letter.
If the character is between ‘A’ and ‘Z’, it’s considered a capital letter.
If the character is between ‘0’ and ‘9’, it’s considered a digit.
Otherwise, it’s categorized as a special character.
The program prints the type of the character.

## Compilation Process

You can manually go through each of the four stages of the compilation process using `gcc`:

1. **Preprocessing**: This stage includes expansion of macros and inclusion of header files. You can run the preprocessor with the `-E` option:

    ```bash

    gcc -E character.c -o character.i
    This will generate the preprocessed code `character.i`

    2. **Compilation**: This stage translates the preprocessed code into assembly code. You can run the compiler with the `-S` option:

    ```bash
    gcc -S character.i -o charcter.s
    ```
    This will generate the assembly code `character.s`.
   
   3. **Assembly**: This stage translates the assembly code into machine code, generating an object file. You can run the assembler with the `-c` option:
       ```bash
    gcc -c character.s -o character.o
    ```
    This will generate the object file `character.o`.

   4. **Linking**: This stage links the object file with the libraries and generates the executable. You can run the linker by simply using `gcc` without any options:

    ```bash
    gcc character.o -o character
    ```
    This will generate the executable file `character`
# Compilation and Execution
To compile and run this program:

Save the program in a file,character.c.
Open a terminal in the directory containing character.c.
Compile using gcc character.c -o try1.
Execute the program with ./try1.

# Minimum Fixed Monthly Payment Calculator in C
This C program computes the minimum fixed monthly payment required to pay off a credit card balance within a year.

# Explanation

The user provides the initial balance (credit card balance) and the annual interest rate (expressed as a decimal).
The program calculates the monthly interest rate by dividing the annual interest rate by 12.
It starts with an initial guess of $10 and iteratively increases the payment until the balance is paid off within a year.
The outer loop increments the minimum fixed monthly payment by $10 in each iteration.
The inner loop simulates 12 months of payments:
Deducts the monthly payment from the balance.
Adds the monthly interest on the remaining balance.
The process continues until the balance is paid off (monthlyUnpaidBalance becomes zero).
The program prints the lowest payment needed to pay off the loan.

## Compilation Process

You can manually go through each of the four stages of the compilation process using `gcc`:

1. **Preprocessing**: This stage includes expansion of macros and inclusion of header files. You can run the preprocessor with the `-E` option:

    ```bash

    gcc -E payment.c -o payment.i
    This will generate the preprocessed code `payment.i`

    2. **Compilation**: This stage translates the preprocessed code into assembly code. You can run the compiler with the `-S` option:

    ```bash
    gcc -S payment.i -o payment.s
    ```
   
   This will generate the assembly code `payment.s`.
   
   3. **Assembly**: This stage translates the assembly code into machine code, generating an object file. You can run the assembler with the `-c` option:
       ```bash
    gcc -c payment.s -o payment.o
    ```
    This will generate the object file `payment.o`.

   4. **Linking**: This stage links the object file with the libraries and generates the executable. You can run the linker by simply using `gcc` without any options:

    ```bash
    gcc payment.o -o payment
    ```
    This will generate the executable file `payment`
# Compilation and Execution
To compile and run this program:

Save the program in a file, payment.c.
Open a terminal in the directory containing payment.c.
Compile using gcc payment.c -o try3.
Execute the program with ./try3.
