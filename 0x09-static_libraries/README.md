# **0x09. C - STATIC LIBRARIES**

# Resources
[C static libraries](https://intranet.alxswe.com/concepts/61)

[What Is A “C” Library? What Is It Good For?]()

[Creating A Static “C” Library Using “ar” and “ranlib”]()

[Using A “C” Library In A Program]()

[What is difference between Dynamic and Static library(Static and Dynamic linking)](https://www.youtube.com/watch?v=eW5he5uFBNM) (stop at 4:44)

# Learning Objectives
<details>
<summary>

### What is a static library, how does it work and how to use it
</summary>

> **A static library is like a catalog of preassembled LEGO bricks for building spaceships. It stores frequently used bricks (functions or pieces of code) organized into modules. When building a spaceship, the compiler extracts only the required modules from the library and combines them with the program's code to create the final executable. This saves time by reusing code and eliminates the need to search for or rewrite the same code repeatedly.**

When you compile a program that uses a static library, the necessary object code from the library is extracted and merged into the final executable. This means that the code from the library becomes a part of your program, resulting in a standalone executable file.

Static libraries are created by compiling the source code of various functions and modules into object files. These object files are then bundled together into a single library file with a ".a" extension (on Unix-like systems, such as Linux) or a ".lib" extension (on Windows systems). The library file contains the compiled code for the functions and modules, but not the actual implementation details or source code.

Static libraries offer several advantages. They provide a way to reuse common code across multiple projects, reducing duplication and improving maintainability. They also enable faster compilation times since the library code is already compiled, and only the necessary portions are linked into the final executable.

To use a static library in your C program, you typically include the library's header files in your source code and link the library during the compilation process. This ensures that the necessary functions and resources from the library are available to your program at runtime.

Static Libraries:
- Windows   .lib    (library)
- Linux     .a      (Archive)

Dynamic Libraries:
- Windows   .dll    (Dynamic Link Library)
- Linux     .so     (Shared object)
</details>

<details>
<summary>

### How to create a Static C Library
</summary>

To create a static C library using the `ar` and `ranlib` commands, you can follow these steps:

1. Write your C source code files:
   Create the C source code files that you want to include in your library. Let's say you have two files: `file1.c` and `file2.c`.

2. Compile the source code files into object files:
   Use the `gcc` compiler to compile each source code file into an object file. Run the following commands for each file:
   ```shell
   gcc -c file1.c
   gcc -c file2.c
   ```
   This will produce `file1.o` and `file2.o` object files.

3. Create the archive using `ar`:
   Use the `ar` command to create an archive file (library) from the object files. Run the following command:
   ```shell
   ar rcs libyourlibrary.a file1.o file2.o
   ```
   This will create a static library file named `libyourlibrary.a` containing `file1.o` and `file2.o`.

4. Index the library using `ranlib`:
   Use the `ranlib` command to create an index for the library. Run the following command:
   ```shell
   ranlib libyourlibrary.a
   ```
   This will add an index to the library file, allowing faster symbol lookup.

That's it! You have created a static library `libyourlibrary.a` using `ar` and `ranlib`. You can now use this library by linking it with other programs during compilation using the `-l` flag followed by the library name (`-lyourlibrary`).
</details>

<details>
<summary>

### Basic usage of `ar`, `ranlib`, `nm`
</summary>
</details>

# Requirements

<details>
<summary>

### C
</summary>

- You are not allowed to use global variables
- No more than 5 functions per file
- You are not allowed to use the standard library. Any use of functions like `printf`, `puts`, etc… is forbidden
- You are allowed to use [_putchar](https://github.com/alx-tools/_putchar.c/blob/master/_putchar.c)
- You don’t have to push `_putchar.c`, we will use our file. If you do it won’t be taken into account
- In the following examples, the `main.c` files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own `main.c` files at compilation. Our `main.c` files might be different from the one shown in the examples
- The prototypes of all your functions and the prototype of the function `_putchar` should be included in your header file called `main.h`
- Don’t forget to push your header file
</details>

<details>
<summary>

### Bash
</summary>

- The first line of all your files should be exactly `#!/bin/bash`
- All your files must be executable
</details>


<details>
<summary>

### More Info
</summary>

You do not need to learn about dynamic libraries, yet.
</details>


# Quiz questions

<details>
<summary>

### Question #0
</summary>

What command(s) can be used to list the symbols stored in a static library?
- [x] ar
- [ ] ld
- [ ] ranlib
- [x] nm
</details>

<details>
<summary>

### Question #1
</summary>

What is the point of using `ranlib`?
- [ ] Create a library from a simple archive
- [ ] List the content of a library
- [x] Indexing an archive
- [ ] Creating an archive
</details>

<details>
<summary>

### Question #2
</summary>

What is the format of a static library?
- [ ] A shared ELF file
- [x] An archive
- [ ] An executable ELF file
- [ ] A relocatable ELF file
</details>

<details>
<summary>

### Question #3
</summary>

What command is used to create a static library from object files?
- [x] ar
- [ ] nm
- [ ] ranlib
- [ ] ld
- [ ] gcc/details>

# Tasks

<details>
<summary>

### 0. A library is not a luxury but one of the necessities of life
`mandatory`
</summary>

Create the static library `libmy.a` containing all the functions listed below:
```
int _putchar(char c);
int _islower(int c);
int _isalpha(int c);
int _abs(int n);
int _isupper(int c);
int _isdigit(int c);
int _strlen(char *s);
void _puts(char *s);
char *_strcpy(char *dest, char *src);
int _atoi(char *s);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
```
If you haven’t coded all of the above functions create empty ones with the right prototype.
Don’t forget to push your `main.h` file to your repository. It should at least contain all the prototypes of the above functions.
```
julien@ubuntu:~/0x09. Static Librairies$ ar -t libmy.a 
0-isupper.o
0-memset.o
0-strcat.o
1-isdigit.o
1-memcpy.o
1-strncat.o
100-atoi.o
2-strchr.o
2-strlen.o
2-strncpy.o
3-islower.o
3-puts.o
3-strcmp.o
3-strspn.o
4-isalpha.o
4-strpbrk.o
5-strstr.o
6-abs.o
9-strcpy.o
_putchar.o
julien@ubuntu:~/0x09. Static Librairies$ nm libmy.a 

0-isupper.o:
0000000000000000 T _isupper

0-memset.o:
0000000000000000 T _memset

0-strcat.o:
0000000000000000 T _strcat

1-isdigit.o:
0000000000000000 T _isdigit

1-memcpy.o:
0000000000000000 T _memcpy

1-strncat.o:
0000000000000000 T _strncat

100-atoi.o:
0000000000000000 T _atoi

2-strchr.o:
0000000000000000 T _strchr

2-strlen.o:
0000000000000000 T _strlen

2-strncpy.o:
0000000000000000 T _strncpy

3-islower.o:
0000000000000000 T _islower

3-puts.o:
                 U _putchar
0000000000000000 T _puts

3-strcmp.o:
0000000000000000 T _strcmp

3-strspn.o:
0000000000000000 T _strspn

4-isalpha.o:
0000000000000000 T _isalpha

4-strpbrk.o:
0000000000000000 T _strpbrk

5-strstr.o:
0000000000000000 T _strstr

6-abs.o:
0000000000000000 T _abs

9-strcpy.o:
0000000000000000 T _strcpy

_putchar.o:
0000000000000000 T _putchar
                 U write
julien@ubuntu:~/0x09. Static Librairies$ cat main.c 
#include "main.h"

int main(void)
{
    _puts("\"At the end of the day, my goal was to be the best hacker\"\n\t- Kevin Mitnick");
    return (0);
}
julien@ubuntu:~/0x09. Static Librairies$ gcc -std=gnu89 main.c -L. -lmy -o quote
julien@ubuntu:~/0x09. Static Librairies$ ./quote 
"At the end of the day, my goal was to be the best hacker"
    - Kevin Mitnick
julien@ubuntu:~/0x09. Static Librairies$ 
```
Repo:
- GitHub repository: alx-low_level_programming
- Directory: 0x09-static_libraries
- File: [libmy.a](), [main.h]()
</details>

<details>
<summary>

### 1. Without libraries what have we? We have no past and no future
`mandatory`
</summary>

Create a script called `create_static_lib.sh` that creates a static library called `liball.a` from all the `.c` files that are in the current directory.
```
julien@ubuntu:~/0x09. Static Librairies$ ls *.c
0-isupper.c  0-strcat.c  1-isdigit.c  1-strncat.c  2-strlen.c   3-islower.c  3-strcmp.c  4-isalpha.c  5-strstr.c  9-strcpy.c  _putchar.c
0-memset.c   100-atoi.c  1-memcpy.c   2-strchr.c   2-strncpy.c  3-puts.c     3-strspn.c  4-strpbrk.c  6-abs.c
julien@ubuntu:~/0x09. Static Librairies$ ./create_static_lib.sh 
julien@ubuntu:~/0x09. Static Librairies$ ls *.a
liball.a
julien@ubuntu:~/0x09. Static Librairies$ ar -t liball.a
0-isupper.o
0-memset.o
0-strcat.o
100-atoi.o
1-isdigit.o
1-memcpy.o
1-strncat.o
2-strchr.o
2-strlen.o
2-strncpy.o
3-islower.o
3-puts.o
3-strcmp.o
3-strspn.o
4-isalpha.o
4-strpbrk.o
5-strstr.o
6-abs.o
9-strcpy.o
_putchar.o
julien@ubuntu:~/0x09. Static Librairies$ 
```
Repo:
- GitHub repository: alx-low_level_programming
- Directory: 0x09-static_libraries
- File: [create_static_lib.sh]()
</details>