# This includes a simple C program for input and output.

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

### Compilation

The C source code goes through several stages before becoming an executable program.

The basic compilation pipeline is:

```text
main.c
  |
  | Preprocessing (-E)
  v
main.i
  |
  | Compilation (-S)
  v
main.s
  |
  | Assembly (-c)
  v
main.o
  |
  | Linking
  v
main
````

### 1. Preprocessing

The first stage is preprocessing.

Use the `-E` option:

```bash
gcc -E main.c -o main.i
```

This processes preprocessor directives such as:

```c
#include <stdio.h>
```

The result is a preprocessed C file:

```text
main.i
```

### 2. Compilation to Assembly

The next stage converts the preprocessed C code into **assembly language**.

Use the `-S` option:

```bash
gcc -S main.c -o main.s
```

This produces:

```text
main.s
```

The `.s` file contains assembly instructions for the target architecture.

The important point is:

```text
C Source Code
      |
      v
Assembly Language
```

For example, instead of C code such as:

```c
int number;
```

the generated assembly contains architecture-specific instructions.

The exact assembly output depends on the processor architecture and compiler.


### 3. Assembly

The assembly language is then converted into machine-code object code.

Use the `-c` option:

```bash
gcc -c main.s -o main.o
```

This produces:

```text
main.o
```

The `.o` file is an object file containing machine code and other information needed for linking.

You can also let GCC perform the compilation and assembly stages together:

```bash
gcc -c main.c -o main.o
```

### 4. Linking

The final stage is linking.

The object file is linked to produce the executable:

```bash
gcc main.o -o main
```

This creates:

```text
main
```

The linker resolves references to functions and connects the program with the required libraries.

For example, the program uses:

```c
printf()
```

which is provided through the standard C library.


### 5. Running the Executable

After linking, the executable can be run.

On Linux/macOS:

```bash
./main
```

On Windows:

```bash
main.exe
```

For the example program, the user can enter:

```text
enter a number: 42
```

and the program produces:

```text
You entered: 42
```


## Complete GCC Process

The complete process can be performed manually:

```bash
gcc -E main.c -o main.i
gcc -S main.i -o main.s
gcc -c main.s -o main.o
gcc main.o -o main
```

This produces:

```text
main.c
  |
  | gcc -E
  v
main.i
  |
  | gcc -S
  v
main.s
  |
  | gcc -c
  v
main.o
  |
  | gcc
  v
main
  |
  | ./main
  v
Process
```

There is also a simpler way. GCC can perform all the necessary stages automatically:

```bash
gcc main.c -o main
```

The stages are still performed internally:

```text
Preprocessing
      |
      v
Compilation
      |
      v
Assembly
      |
      v
Linking
      |
      v
Executable
```

### GCC Options Used

|Option|Purpose|
|---|---|
|`-E`|Preprocess the source code|
|`-S`|Compile the source code into assembly|
|`-c`|Assemble into an object file without linking|
|`-o`|Specify the output filename|

### Final Compilation Pipeline

```text
                  main.c
                    |
                    | -E
                    v
              Preprocessed Code
                 main.i
                    |
                    | -S
                    v
             Assembly Language
                 main.s
                    |
                    | -c
                    v
               Object Code
                 main.o
                    |
                    | Link
                    v
                Executable
                  main
                    |
                    | Run
                    v
                 Process
```
