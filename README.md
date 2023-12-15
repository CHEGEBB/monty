
# C - Stacks, Queues - LIFO, FIFO and Monty Interpreter 🚀
## Introduction
Welcome to the C - Stacks, Queues - LIFO, FIFO and Monty Interpreter project! Developed by CHEGEBB and Diana, this interpreter brings Monty byte codes to life, enabling a unique stack with specific operations.

## Project Overview
Monty 0.98, a scripting language compiled into Monty byte codes, is at the heart of our interpreter. It relies on a distinctive stack, offering operations such as stack manipulation, queues, LIFO, and FIFO.

## File Structure
monty.h: Header file with struct declarations and function prototypes.
main.c: Main entry point for the interpreter, handling command-line arguments and file operations.
stack_operations.c: Implementation of stack and queue operations.
opcode_functions.c: Implementation of opcode functions.
error_handling.c: Functions for error handling.
execute_monty.c: Logic for reading and executing Monty byte codes.
README.md: You're currently reading it! 📖
Compilation & Execution
Compile the project using the following command:

```bash
Copy code
gcc -Wall -Werror -Wextra -pedantic -std=c89 *.c -o monty
```
## Run the interpreter with:

```bash
Copy code
./monty <filename>
Monty Bytecode Files
Monty byte code files have a .m extension. Instructions are one per line, and additional spaces before or after the opcode and its argument are allowed.

Example Monty byte code:

monty
Copy code
push 0
push 1
pop
add
pall
Error Handling
Incorrect Command-Line Arguments:
Print: USAGE: monty file
File Opening Failure:
Print: Error: Can't open file <file>
Invalid Instruction:
Print: L<line_number>: unknown instruction <opcode>
Memory Allocation Failure:
Print: Error: malloc failed
```
## GitHub Repository
We maintain our project on GitHub. Remember to have one repository per group to avoid any score deductions.

Feel free to collaborate, test, and improve the interpreter. Happy coding! 🚀

## Authors: CHEGEBB and Diana
