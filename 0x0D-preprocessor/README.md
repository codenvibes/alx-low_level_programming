# **0x0D. C - PREPROCESSOR**


# Resources

[Understanding C program Compilation Process]()

[Object-like Macros]()

[Macro Arguments]()

[Pre Processor Directives in C]()

[The C Preprocessor]()

[Standard Predefined Macros]()

[include guard]()

[Common Predefined Macros]()

# Learning Objectives
What are macros and how to use them

What are the most common predefined macros

How to include guard your header files


# Requirements
- Allowed editors: `vi`, `vim`, `emacs`
- All your files will be compiled on Ubuntu 20.04 LTS using `gcc`, using the options `-Wall` `-Werror` `-Wextra` `-pedantic` `-std=gnu89`
- All your files should end with a new line
- A `README.md` file, at the root of the folder of the project is mandatory
Your code should use the `Betty` style. It will be checked using betty-style.pl and betty-doc.pl
- You are not allowed to use global variables
- No more than 5 functions per file
- The only C standard library functions allowed are `malloc`, `free` and `exit`. Any use of functions like `printf`, `puts`, `calloc`, `realloc` etc… is forbidden
- You are allowed to use _putchar
- You don’t have to push `_putchar.c`, we will use our file. If you do it won’t be taken into account
In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own `main.c` files at compilation. Our `main.c` files might be different from the one shown in the examples
- Don’t forget to push your header file
- All your header files should be include guarded

# Quiz questions
<details>
<summary>

### Question #0
</summary>

This code will try to allocate 1024 bytes in the heap:
```
#define BUFFER_SIZE 1024
malloc(BUFFER_SIZE)
```
- [ ] False
- [x] True
</details>

<details>
<summary>

### Question #1
</summary>

What does the macro `TABLESIZE` expand to?
```
#define BUFSIZE 1020
#define TABLESIZE BUFSIZE
#undef BUFSIZE
#define BUFSIZE 37
```
- [ ] nothing
- [x] 37
- [ ] 1020
</details>

<details>
<summary>

### Question #2
</summary>

The preprocessor removes all comments
- [ ] False
- [x] True
</details>

<details>
<summary>

### Question #3
</summary>

The preprocessor generates object code
- [x] False
- [ ] True
</details>

<details>
<summary>

### Question #4
</summary>

The preprocessor generates assembly code
- [x] False
- [ ] True
</details>

<details>
<summary>

### Question #5
</summary>

This is the correct way to define the macro `SUB`:
```
#define SUB(a, b) a - b
```
- [ ] No, it should be written this way:
```
#define SUB(a, b) (a) - (b)
```
- [x] No, it should be written this way:
```
#define SUB(a, b) ((a) - (b))
```
- [ ] No, it should be written this way:
```
#define SUB(a, b) (a - b)
```
- [ ] Yes
</details>

<details>
<summary>

### Question #6
</summary>

The macro `__FILE__` expands to the name of the current input file, in the form of a C string constant.
- [ ] False
- [x] True
</details>

<details>
<summary>

### Question #7
</summary>

The preprocessor links our code with libraries.
- [x] False
- [ ] True
</details>

<details>
<summary>

### Question #8
</summary>

What will be the last 5 lines of the output of the command `gcc -E` on this code?
```
#include <stdlib.h>

int main(void)
{
    NULL;
    return (EXIT_SUCCESS);
}
```
- [x]
    ```
    int main(void)
    {
    ((void *)0);
    return (0);
    }
    ```
- [ ]
    ```
    int main(void)
    {
    '\0';
    return (0);
    }
    ```
- [ ]
    ```
    int main()
    {
    0;
    return (0);
    }
    ```
- [ ]    
    ```
    int main(void)
    {
    0;
    return (0);
    }
    ```
</details>

<details>
<summary>

### Question #9
</summary>

What is the `gcc` option that runs only the preprocessor?
- [ ] -P
- [ ] -preprocessor
- [ ] -pedantic
- [x] -E
- [ ] -p
- [ ] -cisfun
- [ ] -a
</details>

<details>
<summary>

### Question #10
</summary>

`NULL` is a macro
- [ ] False
- [x] True
</details>

<details>
<summary>

### Question #11
</summary>

What will be the output of this program? (on a standard 64 bits, Linux machine)
```
#include <stdio.h>
#include <stdlib.h>

#define int char

int main(void)
{
    int i;

    i = 5;
    printf ("sizeof(i) = %lu", sizeof(i));
    return (EXIT_SUCCESS);
}
```
- [ ] It does not compile
- [x] sizeof(i) = 1
- [ ] sizeof(i) = 5
- [ ] sizeof(i) = 4
- [ ] sizeof(i) = 8
- [ ] Segmentation Fault
</details>

<details>
<summary>

### Question #12
</summary>

This portion of code is actually using the library stdlib.
```
#include <stdlib.h>
```
- [x] False
- [ ] True
</details>

<details>
<summary>

### Question #13
</summary>

What are the steps of compilation?
- [ ] preprocessor 2.compiler 3. linker 4. assembler
- [x] preprocessor 2.compiler 3. assembler 4. linker
- [ ] compiler 2. preprocessor 3. assembler 4. linker
</details>

<details>
<summary>

### Question #14
</summary>

Why should we use include guards in our header files?
- [x] To avoid the problem of double inclusion when dealing with the include directive.
- [ ] Because we said so, and we should never ask why.
</details>


# Tasks
<details>
<summary>

### 0. Object-like Macro
`mandatory`

File: [0-object_like_macro.h]()
</summary>

Create a header file that defines a macro named `SIZE` as an abbreviation for the token `1024`.
```
julien@ubuntu:~/0x0c. macro, structures$ cat 0-main.c
#include "0-object_like_macro.h"
#include "0-object_like_macro.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int s;

    s = 98 + SIZE;
    printf("%d\n", s);
    return (0);
}
julien@ubuntu:~/0x0c. macro, structures$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c -o a
julien@ubuntu:~/0x0c. macro, structures$ ./a 
1122
julien@ubuntu:~/0x0c. macro, structures$ 
```
</details>

<details>
<summary>

### 1. Pi
`mandatory`

File: [1-pi.h]()
</summary>

Create a header file that defines a macro named `PI` as an abbreviation for the token `3.14159265359`.
```
julien@ubuntu:~/0x0c. macro, structures$ cat 1-main.c
#include "1-pi.h"
#include "1-pi.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    float a;
    float r;

    r = 98;
    a = PI * r * r;
    printf("%.3f\n", a);
    return (0);
}
julien@ubuntu:~/0x0c. macro, structures$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c -o b
julien@ubuntu:~/0x0c. macro, structures$ ./b
30171.855
julien@ubuntu:~/0x0c. macro, structures$ 
```
</details>

<details>
<summary>

### 2. File name
`mandatory`

File: [2-main.c]()
</summary>

Write a program that prints the name of the file it was compiled from, followed by a new line.
- You are allowed to use the standard library
```
julien@ubuntu:~/0x0c. macro, structures$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c -o c
julien@ubuntu:~/0x0c. macro, structures$ ./c 
2-main.c
julien@ubuntu:~/0x0c. macro, structures$ cp 2-main.c 02-main.c
julien@ubuntu:~/0x0c. macro, structures$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 02-main.c -o cc
julien@ubuntu:~/0x0c. macro, structures$ ./cc
02-main.c
julien@ubuntu:~/0x0c. macro, structures$ 
```
</details>

<details>
<summary>

### 3. Function-like macro
`mandatory`

File: [3-function_like_macro.h]()
</summary>

Write a function-like macro `ABS(x)` that computes the absolute value of a number `x`.
```
julien@ubuntu:~/0x0c. macro, structures$ cat 3-main.c
#include <stdio.h>
#include "3-function_like_macro.h"
#include "3-function_like_macro.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int i;
    int j;

    i = ABS(-98) * 10;
    j = ABS(98) * 10;
    printf("%d, %d\n", i, j);
    return (0);
}
julien@ubuntu:~/0x0c. macro, structures$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c -o d
julien@ubuntu:~/0x0c. macro, structures$ ./d 
980, 980
julien@ubuntu:~/0x0c. macro, structures$ 
```
</details>

<details>
<summary>

### 4. SUM
`mandatory`

File: [4-sum.h]()
</summary>

Write a function-like macro `SUM(x, y)` that computes the sum of the numbers `x` and `y`.
```
julien@ubuntu:~/0x0c. macro, structures$ cat 4-main.c
#include <stdio.h>
#include "4-sum.h"
#include "4-sum.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int s;

    s = SUM(98, 1024);
    printf("%d\n", s);
    return (0);
}
julien@ubuntu:~/0x0c. macro, structures$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-main.c -o e
julien@ubuntu:~/0x0c. macro, structures$ ./e 
1122
julien@ubuntu:~/0x0c. macro, structures$ 
```
</details>