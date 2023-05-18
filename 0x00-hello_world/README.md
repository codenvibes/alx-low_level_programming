# **0x00. C - HELLO, WORLD**

# Notes📝:
[Everything you need to know to start with C.pdf](https://intranet.alxswe.com/rltoken/P01aLj9BDfDUOv-y9x82Yw)

- B (forerunner to C) - Ken Thompson 
- **C - Dennis Ritchie** 
- UNIX - Dennis Ritchie and Ken Thompson 
- Linux & Git - Linus Torvalds 
- SOL (a query language, later extended) 
- Python -Guido van Rossum 
- Java - James Gosling 
- JavaScript - Brendan Eich 

<br>

Brian Kernighan' became widely known through co-authorship of the first book on the C programming language with Dennis Ritchie.

<br>

## Why learn C? 
- Increasingly important for embedded programming. 
- Many languages have a C pedigree.

## `gcc -Wall -Werror -Wextra -pedantic -std=gnu89`
This is a command to compile a C program using the GNU C Compiler (gcc) with a set of compiler options that enforce stricter coding standards and error checking. Here's a breakdown of each option: 
- `-Wall`: Enables all warnings about possible coding issues. 
- `-Werror`: Treats all warnings as errors, causing the compilation to fail if any warnings are generated. 
- `-Wextra`: Enables additional warnings not covered by -Wall. 
- `-pedantic`: Generates warnings about code that violates the ANSI C standard. 
- `-std=gnu89`: Specifies that the C code should be compiled using the C89 standard, which is also known as ANSI C or ISO C90, but with GNU extensions. 

Overall, this command is useful for catching potential issues in C code early on in the development process, improving code quality, and ensuring compliance with the C standard. 

```
#include <stdio.h>
/**
* main - In C, int main(void) is a function prototype for the main
*	function of a C program.
*
* Description: The main function is the entry point of a C program, which
*	means that it is the first function that gets executed when
*	the program is run. The int part of the function prototype
*	indicates that the main function returns an integer value,
*	which is used to indicate the status of the program when it
*	exits.
*
* The void part of the function prototype indicates that the
* main function takes no arguments. In other words, it doesn't
* accept any inputs from the user via the command line or other
* means.
*
* Include's a "header" file that defines input/output routines
*
* Return: 0  (This statement terminates the main() function and returns
*     the value 0 to the calling process. The number 0 generally means 
*     that our program has successfully executed. Any other number indicates
*     that the program has failed.)
*/
int main(void)
{
	printf("Hello World!\n");
	return (0);
}
```

## [Data Types](https://www.tutorialspoint.com/cprogramming/c_data_types.htm)

## Data Type Modifiers 
- `long`, `long long` - extended on some systems (can be used with int, double) 
- `short` - takes half space on some systems 
- `signed/unsigned (int/char)` - An unsigned number contains just zero or positive values, whereas a signed number has both positive and negative numbers along with the value zero. The maximum value of signed numbers is half that of unsigned numbers. 

## `sizeof`
C has a built-in sizeof operator that gives the memory requirements for a particular data type.
The `sizeof(variable)` operator computes the size of a variable. And, to print the result returned by `sizeof`, we use either `%lu` or `%zu` format specifier. 

```
#include <stdio.h>
/**
 * main - sizeof operator
 * Descriprion: sizeof evaluates the size of a variable
 * Return: 0 (success)
 */

int main(void)
{
	int intType;
	float floatType;
	double doubleType;
	char charType;

	printf("Size of int: %zu bytes\n", sizeof(intType));
	printf("Size of float: %lu bytes\n", sizeof(floatType));
	printf("Size of double: %lu bytes\n", sizeof(doubleType));
	printf("Size of char: %zu bytes\n", sizeof(charType));

	return (0);
}
```

## [Format specifiers / Conversion specifiers](https://www.freecodecamp.org/news/format-specifiers-in-c/)

## Variables 
A variable is a name for an area in memory.

## [Type Casting](https://github.com/codenvibes/playground/blob/master/alx-low_level_programming/0x00-hello_world/playground/type_casting.c)

## [Learning to program in C part 2](https://intranet.alxswe.com/rltoken/3a5y1N-0FlTaPbKRxlRLlQ)

## Understanding C program Compilation Process
1.	Preprocessing (`gcc -E` Preprocess only; do not compile, assemble or link.) - the preprocessor stage scans the source code file for preprocessor directives (e.g., #include, #define) and expands them to produce a modified version of the code called the "preprocessed" code. 
      - removes comments. 
      - includes header file code in source code. 
      - replace macro names with code. 
2.	Compilation (`gcc -S` Compile only; do not assemble or link. ) - The compiler stage translates the preprocessed code into assembly language, which is a low-level, human-readable representation of the machine code that the computer can execute. 
      - generates assembly code. 
3.	Assembly (`gcc -c` Compile and assemble, but do not link.)- The assembler stage takes the assembly code and translates it into machine code, which is a binary representation of the program that the computer can execute directly. 
      - converts assembly code to object code/machine language. 
4.	Linking - The linker stage combines the machine code produced by the assembler with any necessary system libraries and produces a final executable file that can be run on the target system. 
```
echo $? 
```
**This code is a command to print the exit status of the previously executed command in the terminal**. In Unix-like systems, including Linux and macOS, every command that is executed returns an exit status which is a number indicating whether the command was executed successfully or not. 
In this case, `echo $?` is asking the shell to print the exit status of the last command that was executed. The `$?` is a shell variable that holds the exit status of the last executed command, and `echo` is a command that prints its arguments to the terminal. 
This can be useful for debugging and troubleshooting purposes, especially when working with scripts or automated processes that rely on the exit status of commands.

## Input/Output
Formatted output - `printf()` - displays formatted output to `stdout` 
```
printf("who:%s size: %d cost: %5.2f","you",12,1.2); 
```
- [printf.c](https://github.com/codenvibes/playground/blob/master/alx-low_level_programming/0x00-hello_world/playground/printf.c)

<div><code>scanf()</code> - reads formatted input from standard input.
<div>Input: y 101 </div>
</div>

```
      `char c;` 
      `int i;` 
      `scanf("%s %d", &c, &i);` 
```
`y` → c

`101` → i

- [io_demo.c](https://github.com/codenvibes/playground/blob/master/alx-low_level_programming/0x00-hello_world/playground/io_demo.c)
- [io_demo0.c](https://github.com/codenvibes/playground/blob/master/alx-low_level_programming/0x00-hello_world/playground/io_demo0.c)

## Printing text using `puts`
The `puts` function in C is used to print a string followed by a newline character to the standard output stream. It is defined in the stdio.h header file.

Printing a string to the console:
```
#include <stdio.h>

int main() {
    puts("Hello, world!");
    return 0;
}
```
Output:
```
Hello, world!
```


## Printing text using `putchar`

# Tasks☑️:
## 0. Preprocessor
Write a script that runs a C file through the preprocessor and save the result into another file.- The C file name will be saved in the variable `$CFILE`- The output should be saved in the file `c`
```
julien@ubuntu:~/c/0x00$ cat main.c 
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    return (0);
}
julien@ubuntu:~/c/0x00$ export CFILE=main.c
julien@ubuntu:~/c/0x00$ ./0-preprocessor 
julien@ubuntu:~/c/0x00$ tail c
# 942 "/usr/include/stdio.h" 3 4

# 2 "main.c" 2


# 3 "main.c"
int main(void)
{
 return (0);
}
julien@ubuntu:~/c/0x00$ 
```
Repo:
- GitHub repository: alx-low_level_programming
- Directory: 0x00-hello_world
- File: `0-preprocessor`
## 1. Compiler
Write a script that compiles a C file but does not link.
- The C file name will be saved in the variable `$CFILE`
- The output file should be named the same as the C file, but with the extension `.o` instead of `.c`.
   - Example: if the C file is `main.c`, the output file should be `main.o`
```
julien@ubuntu:~/c/0x00$ export CFILE=main.c
julien@ubuntu:~/c/0x00$ cat main.c
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    return (0);
}
julien@ubuntu:~/c/0x00$ ./1-compiler 
julien@ubuntu:~/c/0x00$ ls
0-preprocessor  1-compiler   c            main.o
Makefile               100-intel      main.c  main.s
julien@ubuntu:~/c/0x00$ cat -v main.o | head
^?ELF^B^A^A^@^@^@^@^@^@^@^@^@^A^@>^@^A^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^P^B^@^@^@^@^@^@^@^@^@^@@^@^@^@^@^@@^@^K^@^H^@UHM-^IM-eM-8^@^@^@^@]M-C^@GCC: (Ubuntu 5.4.0-6ubuntu1~16.04.2) 5.4.0 20160609^@^T^@^@^@^@^@^@^@^AzR^@^Ax^P^A^[^L^G^HM-^P^A^@^@^\^@^@^@^\^@^@^@^@^@^@^@^K^@^@^@^@A^N^PM-^F^BC^M^FF^L^G^H^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^A^@^@^@^D^@M-qM-^?^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^C^@^A^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^C^@^B^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^C^@^C^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^C^@^E^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^C^@^F^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^C^@^D^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^H^@^@^@^R^@^A^@^@^@^@^@^@^@^@^@^K^@^@^@^@^@^@^@^@main.c^@main^@^@^@^@ ^@^@^@^@^@^@^@^B^@^@^@^B^@^@^@^@^@^@^@^@^@^@^@^@.symtab^@.strtab^@.shstrtab^@.text^@.data^@.bss^@.comment^@.note.GNU-stack^@.rela.eh_frame^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^[^@^@^@^A^@^@^@^F^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@@^@^@^@^@^@^@^@^K^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^A^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@!^@^@^@^A^@^@^@^C^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@K^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^A^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@'^@^@^@^H^@^@^@^C^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@K^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^A^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@,^@^@^@^A^@^@^@0^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@K^@^@^@^@^@^@^@5^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^A^@^@^@^@^@^@^@^A^@^@^@^@^@^@^@5^@^@^@^A^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@M-^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^A^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@J^@^@^@^A^@^@^@^B^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@M-^@^@^@^@^@^@^@^@8^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^H^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@E^@^@^@^D^@^@^@@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@M- ^A^@^@^@^@^@^@^X^@^@^@^@^@^@^@    ^@^@^@^F^@^@^@^H^@^@^@^@^@^@^@^X^@^@^@^@^@^@^@^Q^@^@^@^C^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@M-8^A^@^@^@^@^@^@T^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^A^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^A^@^@^@^B^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@M-8^@^@^@^@^@^@^@M-X^@^@^@^@^@^@^@
^@^@^@^H^@^@^@^H^@^@^@^@^@^@^@^X^@^@^@^@^@^@^@  ^@^@^@^C^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@M-^P^A^@^@^@^@^@^@^M^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^A^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@julien@ubuntu:~/c/0x00$ 
```
Repo:
- GitHub repository: alx-low_level_programming
- Directory: 0x00-hello_world
- File: `1-compiler`
## 2. Assembler
Write a script that generates the assembly code of a C code and save it in an output file.
- The C file name will be saved in the variable `$CFILE`
- The output file should be named the same as the C file, but with the extension `.s` instead of `.c`.
   - Example: if the C file is `main.c`, the output file should be `main.s`
```
julien@ubuntu:~/c/0x00$ export CFILE=main.c
julien@ubuntu:~/c/0x00$ cat main.c
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    return (0);
}
julien@ubuntu:~/c/0x00$ ./2-assembler
julien@ubuntu:~/c/0x00$ ls
0-preprocessor  1-compiler  2-assembler c  main.c  main.s  Makefile
julien@ubuntu:~/c/0x00$ cat main.s
    .file   "main.c"
    .text
    .globl  main
    .type   main, @function
main:
.LFB0:
    .cfi_startproc
    pushq   %rbp
    .cfi_def_cfa_offset 16
    .cfi_offset 6, -16
    movq    %rsp, %rbp
    .cfi_def_cfa_register 6
    movl    $0, %eax
    popq    %rbp
    .cfi_def_cfa 7, 8
    ret
    .cfi_endproc
.LFE0:
    .size   main, .-main
    .ident  "GCC: (Ubuntu 5.4.0-6ubuntu1~16.04.2) 5.4.0 20160609"
    .section    .note.GNU-stack,"",@progbits
julien@ubuntu:~/c/0x00$ 
```
Repo:
- GitHub repository: alx-low_level_programming
- Directory: 0x00-hello_world
- File: `2-assembler`
## 3. Name
Write a script that compiles a C file and creates an executable named `cisfun`.
- The C file name will be saved in the variable `$CFILE`
```
julien@ubuntu:~/c/0x00$ export CFILE=main.c
julien@ubuntu:~/c/0x00$ cat main.c
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    return (0);
}
julien@ubuntu:~/c/0x00$ ./3-name 
julien@ubuntu:~/c/0x00$ ls
0-preprocessor  1-compiler   3-name  cisfun  main.o  Makefile
100-intel       2-assembler  c       main.c  main.s
julien@ubuntu:~/c/0x00$ 
```
Repo:
- GitHub repository: alx-low_level_programming
- Directory: 0x00-hello_world
- File: `3-name`
## 4. Hello, puts
Write a C program that prints exactly `"Programming is like building a multilingual puzzle`, followed by a new line.
- Use the function `puts`
- You are not allowed to use `printf`
- Your program should end with the value `0`
```
julien@ubuntu:~/c/0x00$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 4-puts.c && ./a.out
"Programming is like building a multilingual puzzle
julien@ubuntu:~/c/0x00$ echo $?
0
julien@ubuntu:~/c/0x00$ 
```
Repo:
- GitHub repository: alx-low_level_programming
- Directory: 0x00-hello_world
- File: `4-puts.c`
## 5. Hello, printf
Write a C program that prints exactly `with proper grammar, but the outcome is a piece of art,`, followed by a new line.
- Use the function `printf`
- You are not allowed to use the function `puts`
- Your program should return `0`
- Your program should compile without warning when using the `-Wall` `gcc` option
```
julien@ubuntu:~/c/0x00$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 5-printf.c
julien@ubuntu:~/c/0x00$ ./a.out 
with proper grammar, but the outcome is a piece of art,
julien@ubuntu:~/c/0x00$ echo $?
0
julien@ubuntu:~/c/0x00$ 
```
Repo:
- GitHub repository: alx-low_level_programming
- Directory: 0x00-hello_world
- File: `5-printf.c`
## 6. Size is not grandeur, and territory does not make a nation
Write a C program that prints the size of various types on the computer it is compiled and run on.
- You should produce the exact same output as in the example
- Warnings are allowed
- Your program should return `0`
- You might have to install the package `libc6-dev-i386` on your Linux to test the `-m32` `gcc` option
```
julien@ubuntu:~/c/0x00$ gcc 6-size.c -m32 -o size32 2> /tmp/32
julien@ubuntu:~/c/0x00$ gcc 6-size.c -m64 -o size64 2> /tmp/64
julien@ubuntu:~/c/0x00$ ./size32
Size of a char: 1 byte(s)
Size of an int: 4 byte(s)
Size of a long int: 4 byte(s)
Size of a long long int: 8 byte(s)
Size of a float: 4 byte(s)
julien@ubuntu:~/c/0x00$ ./size64
Size of a char: 1 byte(s)
Size of an int: 4 byte(s)
Size of a long int: 8 byte(s)
Size of a long long int: 8 byte(s)
Size of a float: 4 byte(s)
julien@ubuntu:~/c/0x00$ echo $?
0
julien@ubuntu:~/c/0x00$ 
```
Repo:
- GitHub repository: alx-low_level_programming
- Directory: 0x00-hello_world
- File: `6-size.c`
## 7. Intel
Write a script that generates the assembly code (Intel syntax) of a C code and save it in an output file.
- The C file name will be saved in the variable `$CFILE`.
- The output file should be named the same as the C file, but with the extension `.s` instead of `.c`.
   - Example: if the C file is `main.c`, the output file should be `main.s`
> By default, `gcc` generates assembly code in the AT&T syntax, but you can use the `-masm=intel` option to generate assembly code in the Intel syntax.
```
julien@ubuntu:~/c/0x00$ export CFILE=main.c
julien@ubuntu:~/c/0x00$ cat main.c
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    return (0);
}
julien@ubuntu:~/c/0x00$ ./100-intel 
julien@ubuntu:~/c/0x00$ cat main.s
    .file   "main.c"
    .intel_syntax noprefix
    .text
    .globl  main
    .type   main, @function
main:
.LFB0:
    .cfi_startproc
    push    rbp
    .cfi_def_cfa_offset 16
    .cfi_offset 6, -16
    mov rbp, rsp
    .cfi_def_cfa_register 6
    mov eax, 0
    pop rbp
    .cfi_def_cfa 7, 8
    ret
    .cfi_endproc
.LFE0:
    .size   main, .-main
    .ident  "GCC: (Ubuntu 5.4.0-6ubuntu1~16.04.2) 5.4.0 20160609"
    .section    .note.GNU-stack,"",@progbits
julien@ubuntu:~/c/0x00$ 
```
Repo:
- GitHub repository: alx-low_level_programming
- Directory: 0x00-hello_world
- File: `100-intel`
## 8. UNIX is basically a simple operating system, but you have to be a genius to understand the simplicity
Write a C program that prints exactly `and that piece of art is useful" - Dora Korpar, 2015-10-19`, followed by a new line, to the standard error.
- You are not allowed to use any functions listed in the NAME section of the man (3) `printf` or man (3) `puts`
- Your program should return 1
- Your program should compile without any warnings when using the `-Wall` `gcc` option
```
julien@ubuntu:~/c/0x00$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -o quote 101-quote.c
julien@ubuntu:~/c/0x00$ ./quote
and that piece of art is useful" - Dora Korpar, 2015-10-19
julien@ubuntu:~/c/0x00$ echo $?
1
julien@ubuntu:~/c/0x00$ ./quote 2> q
julien@ubuntu:~/c/0x00$ cat q
and that piece of art is useful" - Dora Korpar, 2015-10-19
julien@ubuntu:~/c/0x00$ grep printf < 101-quote.c
julien@ubuntu:~/c/0x00$ grep put < 101-quote.c
julien@ubuntu:~/c/0x00$ 
```
Repo:
- GitHub repository: alx-low_level_programming
- Directory: 0x00-hello_world
- File: `101-quote.c`