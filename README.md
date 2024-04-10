**Structured Programming - The C Programming Language
Lecturer: Mr Tekoh Palma
Kelden – Software Engineering Level 1**
Problem set 1
SECTION A: This section have been divided into three whereby each member of the group is to work and submit to the group first for formal explanation then the group does all possible correctios before the member is permited 
to commit on github.
# Swapping Two Numbers in C Without Using a Third Variable

This repository contains a simple C program that swaps the values of two variables without using a third variable.

## Explanation

The program swaps the values of two variables `a` and `b` without using a third variable. The swapping process involves three steps:

1. The sum of `a` and `b` is stored in `a`.
2. Now `a` is the sum of `a` and `b`, so subtracting `b` gives the original `a`, which is assigned to `b`.
3. At this point, `b` has the original `a`'s value, so subtracting `b` from `a` (which is the sum of `a` and `b`) gives the original `b`, which is assigned to `a`.

## Compilation and Execution

You can use the `gcc` compiler to compile and run this program. Here's how you can do it:
Preprocessing: This stage includes expansion of macros and inclusion of header files. You can run the preprocessor with the -E option:
gcc -E swap.c -o swap.i
This will generate the preprocessed code swap.i.
Compilation: This stage translates the preprocessed code into assembly code. You can run the compiler with the -S option:
gcc -S swap.i -o swap.s
This will generate the assembly code swap.s.
Assembly: This stage translates the assembly code into machine code, generating an object file. You can run the assembler with the -c option:
gcc -c swap.s -o swap.o
This will generate the object file swap.o.
Linking: This stage links the object file with the libraries and generates the executable. You can run the linker by simply using gcc without any options:
gcc swap.o -o swap
