# push_swap Project Overview

## Introduction

`push_swap` is a C program designed to sort a list of integers using two
stacks and a restricted set of operations. The goal is to produce the
shortest possible sequence of operations to sort the data. This project
is commonly associated with algorithm optimization challenges, such as
those found in the 42 curriculum.

## Objectives

-   Parse and validate input integers.
-   Implement two stacks (A and B) with allowed operations such as:
    -   `sa`, `sb`, `ss` -- swap operations
    -   `pa`, `pb` -- push operations
    -   `ra`, `rb`, `rr` -- rotate operations
    -   `rra`, `rrb`, `rrr` -- reverse rotate operations
-   Develop an efficient algorithm to generate the smallest sequence of
    operations for sorting.
-   Handle edge cases such as duplicate inputs, invalid numbers, and
    integer overflows.

## Project Structure

-   **`src/`** -- Core program logic, sorting methods, stack operations.
-   **`include/`** -- Header files defining structures and function
    prototypes.
-   **`libft/`** -- Custom utility library with implementations of
    standard C functions.
-   **`Makefile`** -- Build automation for compiling and cleaning the
    project.

## Key Features

-   Custom stack implementation
-   Multiple sorting strategies depending on input size
-   Memory-safe handling of dynamic data structures
-   Modular and maintainable code organization

## How to Build

``` bash
make
```

## How to Run

``` bash
./push_swap <list of integers>
```

### Example

``` bash
./push_swap 3 2 1
```

## Output

The program outputs a list of stack operations which, when executed,
sort the input numbers.

Example:

    pb
    sa
    pa

## Notes

-   The efficiency of the algorithm is crucial---fewer operations result
    in a better score.
-   This repository can be used as a reference or starting point for
    learning data structure manipulation and algorithm optimization in
    C.

