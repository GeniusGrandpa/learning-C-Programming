# C Programming / Integration and Process Concept

Basic introduction to C programming, GCC compilation, executables, and processes.
### Topics

- Basic C program structure
- `main()` function
- GCC installation
- GCC compilation stages
- GCC options: `-E`, `-S`, `-c`, `-o`
- Program vs. process
- How the OS runs a program

### Requirements

- GCC
- Terminal
- Text editor such as nano or vim. 

### Check if GCC is installed:

```bash
gcc --version
````

### If not installed then follow these steps for Installing GCC

### Ubuntu / Debian

```bash
sudo apt update
sudo apt install build-essential
```

### Fedora

```bash
sudo dnf install gcc
```

### macOS

```bash
xcode-select --install
```

### Windows

Install a GCC-based environment such as MinGW-w64 and make sure `gcc` is available in `PATH`.

Verify the installation:

```bash
gcc --version
```


### Basic C Program

Create a file named `main.c`:

```c
#include <stdio.h>

int main(void)
{
    printf("Hello, World!\n");
    return 0;
}
```

### GCC Compilation Steps

GCC can perform the different stages of compilation.

The basic pipeline is:

```text
main.c
  |
  v
Preprocessing
  |
  v
main.i
  |
  v
Compilation
  |
  v
main.s
  |
  v
Assembly
  |
  v
main.o
  |
  v
Linking
  |
  v
main
```

### 1. Preprocessing `-E`

The `-E` option runs only the preprocessing stage.

```bash
gcc -E main.c -o main.i
```

This produces:

```text
main.i
```

The preprocessor handles directives such as:

```c
#include <stdio.h>
#define MAX 100
```

### 2. Compilation `-S`

The `-S` option generates assembly code.

```bash
gcc -S main.c -o main.s
```

This produces:

```text
main.s
```

Now the C source code is translated into assembly language.


### 3. Assembly `-c`

The `-c` option produces an object file without performing the final linking step.

```bash
gcc -c main.s -o main.o
```

This produces:

```text
main.o
```

GCC can also perform the compilation and assembly stages together:

```bash
gcc -c main.c -o main.o
```


### 4. Linking

The object file is linked to create the final executable.

```bash
gcc main.o -o main
```

This produces:

```text
main
```

The linker combines the object code with the required libraries and resolves references needed by the program.


## Complete Compilation Example

The individual stages can be performed manually:

```bash
gcc -E main.c -o main.i
gcc -S main.c -o main.s
gcc -c main.s -o main.o
gcc main.o -o main
```

The resulting files are:

```text
main.c
main.i
main.s
main.o
main
```

GCC can also perform the required stages automatically:

```bash
gcc main.c -o main
```

### Common GCC Options

|Option|Purpose|
|---|---|
|`-E`|Run the preprocessor only|
|`-S`|Generate assembly code|
|`-c`|Generate an object file without linking|
|`-o`|Specify the output filename|

### `-o`

The `-o` option specifies the name of the output file.

For example:

```bash
gcc main.c -o program
```

creates an executable named:

```text
program
```

Without `-o`, GCC normally uses a default executable name.


### Running the Program

On Linux/macOS:

```bash
./main
```

On Windows:

```bash
main.exe
```

Expected output:

```text
Hello, World!
```

### Program vs. Process

A **program** is a set of instructions stored on the system.

A **process** is a running instance of a program.

```text
Program on Disk
      |
      +---- Execution 1 ----> Process A
      |
      +---- Execution 2 ----> Process B
```

The same executable can therefore be used to create multiple processes.

Each process has its own execution state and operating-system-managed resources, such as:

- Process ID (PID)
    
- Virtual address space
    
- Stack
    
- Heap
    
- CPU register state
    
- Open file descriptors
    

### How the OS Runs the Program

When we execute:

```bash
./main
```

the general flow is:

```text
Executable
    |
    v
Shell
    |
    v
Operating System
    |
    v
Process
    |
    v
Executable Loading
    |
    v
Runtime Initialization
    |
    v
main()
    |
    v
Program Execution
    |
    v
Process Termination
```

The operating system loads the executable and prepares the process's execution environment.

Before `main()` runs, startup/runtime code performs the required initialization and eventually calls `main()`.


### Complete Workflow

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
                |
                v
              main()
                |
                v
            Execution
                |
                v
           Termination
```

### Key Concepts

- **`.c` file** : C source code.
    
- **Preprocessor** : Processes directives such as `#include` and `#define`.
    
- **Compiler** :  Converts C code into assembly.
    
- **Assembler** : Converts assembly into object code.
    
- **Object file** : Contains machine code and information used during linking.
    
- **Linker** : Produces the final executable.
    
- **Executable** : A program that can be loaded and executed.
    
- **Program** : Passive instructions stored on the system.
    
- **Process** : A running instance of a program.
    
- **PID** : Identifier assigned to a process.
    
- **`main()`** : Standard entry function of a hosted C program.
    

### Summary

The main GCC compilation pipeline is:

```text
Source Code
    |
    | -E
    v
Preprocessed Code
    |
    | -S
    v
Assembly
    |
    | -c
    v
Object File
    |
    | Link
    v
Executable
    |
    | Run
    v
Process
```

The basic commands are:

```bash
gcc -E main.c -o main.i
gcc -S main.c -o main.s
gcc -c main.c -o main.o
gcc main.o -o main
./main
```

Or, for a simple compilation:

```bash
gcc main.c -o main
./main
```
