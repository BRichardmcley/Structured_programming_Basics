# <p style='color:blue' align="center"><b>Structured Programming - The C Programming Language<br>Lecturer: Mr Tekoh Palma<br>Kelden – Software Engineering Level 1<br>Problem set 1</b></p><br>
# Swapping Two Numbers in C Without Using a Third Variable

This repository contains a simple C program that swaps the values of two variables without using a third variable.

 Explanation

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
#Telling Whether A Number Is Magic or Not

DESCRIPTION

This C program tells the user whether the number he/she entered is a magic number or not.

CODE EXPLANATION

The lines 
Int sumofdigits (int num) {
        If (num==0)
        {
                return 0;
        } else {
                return (num%10) + sumofdigits (num/10);
        }
}
•	This function, sumofdigits, calculates the sum of the digits of an integer.
•	It uses recursion to break down the number into individual digits and adds them up.
•	If the input num is zero, it returns zero (base case).
•	Otherwise, it computes the last digit using num % 10 and recursively calls itself with the remaining digits (num / 10).
The lines 
int reverse(int num)
{
        Int reversed=0;
        While (num! =0) {
                Int digit= num%10;
                reversed=reversed*10+digit;
                num/=10;
        }
        return reversed;
}
•	The reverse function reverses the digits of an integer.
•	It uses a while loop to extract each digit from the input number and build the reversed number.
•	The variable reversed accumulates the reversed digits.
•	The loop continues until num becomes zero.
The lines 
Int is_magic_number (int n) {
        Int sum= sumofdigits (n);
        Int reversed= reverse (sum);
        return (sum*reversed==n);
}
•	The is_magic_number function checks if a given number is a “magic number.”
•	It calculates the sum of digits using sumofdigits of the input number n and the sum variable holds it value
•	It calculates the reverse using the reversed sum and stores it value in the variable reverse.
•	The line “(sum*reversed==n);” evaluate if sum multiply by reversed is equal to n( which is original number input) if yes then the number is a magic number, if no then it is not a magic number.
HOW TO COMPILE AND RUN THE CODE
•	To compile the code use gcc magic_number.c  -o try2
•	To run the code use ./try2

returns the value of x raised to the power of y.
DESCRIPTION
This C program calculate the result when you raised integer to a base.
CODE EXPLANATION
The function “int _pow_recursion (int x, int y)” calculate the power of x raise to the y exponent
•	If  y is 0, it will return 1 since anything raise to the power 0 is 1
•	If y is negative, it will return -1 indicating an error
The line “return x* _pow_recursion(x, y-1);” 
Will return the value when x is multiply by _pow_recursion(x, y-1) that is
•	_pow_recursion(x, y-1) calculate the value of x raise to the power of y-1
•	The result of this calculation is multiplied by x
•	This process continues until y reaches 0 because anything raise to the 0 is 1
EXAMPLE: let calculate 2 raise to 3,
“Return x* _pow_recursion(x, y-1);” will function this way
•	_pow_recursion(2, 3)
Recursively call y-1 which will result to 
•	_pow_recursion(2, 2(3-1)) this line calculate 2 raise to the 2 which gives 4
•	_pow_recursion(2, 1(2-1)) this line calculate 2 raise to the 1 which is 2
•	_pow_recursion(2, 0(1-1)) this line calculate 2 raise to 0 which is 1 
At the end it will multiply 4*2*1 which is 8
Therefore 2 raise to the 3 is 8
The line “int answer = _pow_recursion (base, exponent);”
Calls the _pow_recursion function to compute the result 
The line “if (answer== -1)” says that if the answer is -1 then it should return error problem with your input else it will give you a value.
HOW TO COMPILE AND RUN THE PROGRAM
•	Compile the program using gcc power.c –o try
•	And run using ./try
Determine which type of character is entered
DESCRIPTION
This C program determines the type of character you enter. It classifies your entry according to 
•	Capital letter
•	Small letter
•	Digits
•	Special character
CODE EXPLANATION
•	The line “char character;”
 Declare a character variable called “character”.This variable will store the user’s input character
•	The line “case 'a'...'z'” Checks if ch is a lowercase letter (between ‘a’ and ‘z’). If true, it executes the following line.
•	printf("%c is a small letter\n",ch); which prints a message indicating that the input character is a small letter.
•	 The line “case 'A'...'Z'” this checks if ch is an uppercase letter (between ‘A’ and ‘Z’).
•	The line “case '0'...'9'” Checks if ch is a digit (between ‘0’ and ‘9’).
if none of the above matches, it will return that the character entered is a special character
HOW TO COMPILE AND RUN THE CODE
•	Compile the code using “gcc character.c -o try1”
•	Run the code using “./try1”
Minimum Fixed Monthly Payment 
This C program calculates the minimum fixed monthly payment needed to pay off a loan within one year, considering an annual interest rate. It uses an iterative approach to find the optimal payment amount.
CODE EXPLANATION
float monthlyUnpaidBalance = balance;: Initializes the monthly unpaid balance to the initial loan balance.
while (monthlyUnpaidBalance > 0) {: Begins a loop that continues as long as the loan is not completely pay off
minimumFixedMonthlyPayment += 10;: Increases the minimum fixed monthly payment by 10 units in each iteration.
while (month <= 12 && monthlyUnpaidBalance > 0) {: Begins an inner loop that runs for a maximum of 12 months or until the loan is fully paid off.
monthlyUnpaidBalance -= minimumFixedMonthlyPayment;: Subtracts the minimum fixed monthly payment from the monthly unpaid balance.
monthlyUnpaidBalance += monthlyInterestRate * monthlyUnpaidBalance;: Adds the interest accrued during the month to the unpaid balance.
calculate_minimum_fixed_monthly_payment function with the provided loan balance and interest rate.
HOW TO COMPILE AND RUN THE CODE
•	Compile the code using “gcc payment.c -o try3”
•	Run the code using “./try3”
