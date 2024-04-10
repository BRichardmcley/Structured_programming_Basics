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

1. Save the program in a file, say `swap.c`.
2. Open a terminal in the directory containing `swap.c`.
3. Run `gcc -o swap swap.c` to compile the program. This will create an executable named `swap`.
4. Run `./swap` to execute the program.
