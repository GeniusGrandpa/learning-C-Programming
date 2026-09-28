# C Programming / Integration and Process Concept

This section introduces the basic structure of a C program, the role of the `main()` function, commonly used GCC compiler flags, and the relationship between a program and a process. It also explains how an operating system loads and executes a compiled program.

## Topics Covered

- Structure of a C program
- The `main()` function and its return type
- Common GCC compiler flags
- Difference between a program and a process
- How the operating system loads and executes a program

## 1. Structure of a C Program

A C program is generally organized into several parts, such as header files, functions, and the `main()` function.

```c
#include <stdio.h>

int main(void)
{
    printf("Hello, World!\n");
    return 0;
}
````
## Main Components

-  `#include <stdio.h>`: Includes the Standard Input/Output library, which provides function such as printf().
- `int main(void)` : Defines the program's entry point.
- {
