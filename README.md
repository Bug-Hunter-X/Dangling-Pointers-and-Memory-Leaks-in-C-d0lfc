# Dangling Pointers and Memory Leaks in C

This repository demonstrates two common and dangerous errors in C programming: dangling pointers and memory leaks.

**bug.c:** This file contains the code exhibiting the errors.  The code demonstrates a dangling pointer (pointer to memory that has been freed) and potential memory leaks (memory allocated but not freed).

**bugSolution.c:** This file shows how to fix those errors to ensure robust and reliable code.  Solutions are provided for the dangling pointer and memory leaks through careful memory management.

## Running the Code

1.  Clone this repository.
2.  Compile the C code using a C compiler (like GCC):
    ```bash
    gcc bug.c -o bug
    gcc bugSolution.c -o bugSolution
    ```
3.  Run the executables:
    ```bash
    ./bug
    ./bugSolution
    ```

Observe the differences in behavior between the buggy and corrected versions.