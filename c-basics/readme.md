# This includes a C program for input and output.

### About

This program demonstrates basic input and output operations in C. It asks the user to enter a number, then stores the value in a variable, and at last displays the number entered by the user.

### Source Code

```c
/* C Program begins with comment */

#include <stdio.h>

int main() {
    int number;

    printf("enter a number: ");
    scanf("%i", &number);

    printf("You entered: %i", number);

    return 0;
}
```

## Explanation Part

### 1. Comment

```c
/* C Program begins with comment */
```

This is a comment. Comments are ignored by the compiler and are used to provide information about the code.

### 2. Including the Standard I/O Library

```c
#include <stdio.h>
```

This includes the standard input/output library.

It provides functions such as:

- `printf()` : It is used to display output.
    
- `scanf()` : It is used to receive input from the user.
    

### 3. The `main()` Function

```c
int main() {
```

`main()` is the standard entry point of a hosted C program.

The program begins its execution from `main()`.

The `int` indicates that the function returns an integer value.

### 4. Declaring the Variable

```c
int number;
```

This declares an integer variable named `number`.

The variable is used to store the number entered by the user.

### 5. Asking for Input

```c
printf("enter a number: ");
```

`printf()` displays a message on the terminal asking the user to enter a number.

Example:

```text
enter a number:
```

### 6. Reading User Input

```c
scanf("%i", &number);
```

`scanf()` reads input entered by the user.

The format specifier:

```text
%i
```

indicates that an integer value is expected.

The `&number` provides the address of the `number` variable so that `scanf()` can store the entered value there.

For example, if the user enters:

```text
25
```

then `number` will contain:

```text
25
```

### 7. Displaying the Result

```c
printf("You entered: %i", number);
```

This displays the value stored in `number`.

If the user enters:

```text
25
```

the output will be:

```text
You entered: 25
```

The `%i` format specifier is replaced by the value stored in `number`.

### 8. Returning from `main()`

```c
return 0;
```

This returns `0` from `main()` and conventionally indicates successful program termination.

## Program Flow

The program follows this basic sequence:

```text
Program Starts
      |
      v
    main()
      |
      v
Declare integer variable
      |
      v
Ask user for a number
      |
      v
Read number using scanf()
      |
      v
Display the entered number
      |
      v
  return 0
      |
      v
Program Ends
```

### For example

If the user enters `input`

```text
enter a number: 42
```

Then the `output` would be 

```text
You entered: 42
```

The `function` used while writing source code

|Function|Purpose|
|---|---|
|`printf()`|Displays output|
|`scanf()`|Reads input from the user|

### Concepts Demonstrated

This program demonstrates:

- C comments
    
- Header files
    
- The `main()` function
    
- Variable declaration
    
- Integer data type
    
- User `input`
    
- Formatted output
    
- `scanf()` and `printf()`
    
- Format specifiers
    
- The address-of operator `&`
    
- Returning a status from `main()`
    

## Compilation

The program can be saved as:

```text
main.c
```

Compile it using GCC:

```bash
gcc main.c -o main
```

### Run on Linux/macOS

```bash
./main
```

### Run on Windows

```bash
main.exe
```
