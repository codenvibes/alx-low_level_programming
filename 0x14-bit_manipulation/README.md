# 0x14. C - BIT MANIPULATION
`C`

<img src="https://github.com/codenvibes/alx-low_level_programming/blob/master/0x14-bit_manipulation/bitwise.PNG" width="500"/>

# Learning Objectives
Look for the right source of information without too much help

How to manipulate bits and use bitwise operators

# Requirements
<details>
<summary>

### General
</summary>

- Allowed editors: `vi`, `vim`, `emacs`
- All your files will be compiled on Ubuntu 20.04 LTS using `gcc`, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- All your files should end with a new line
- A `README.md` file, at the root of the folder of the project is mandatory
- Your code should use the `Betty` style. It will be checked using [betty-style.pl](https://github.com/alx-tools/Betty/blob/master/betty-style.pl) and [betty-doc.pl](https://github.com/alx-tools/Betty/blob/master/betty-doc.pl)
- You are not allowed to use global variables
- No more than 5 functions per file
- The only C standard library functions allowed are `malloc`, `free` and `exit`. Any use of functions like `printf`, `puts`, `calloc`, `realloc` etc… is forbidden
- You are allowed to use [_putchar](https://github.com/alx-tools/_putchar.c/blob/master/_putchar.c)
- You don’t have to push `_putchar.c`, we will use our file. If you do it won’t be taken into account
- In the following examples, the `main.c` files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own `main.c` files at compilation. Our `main.c` files might be different from the one shown in the examples
- The prototypes of all your functions and the prototype of the function `_putchar` should be included in your header file called `main.h`
- Don’t forget to push your header file
- All your header files should be include guarded
</details>

# Notes
[![img](https://camo.githubusercontent.com/d63ab8b391579cb9574e4a487de2f04cb9ed4bda7008d6c3c37d90ce903b2bb5/68747470733a2f2f6d656469612e6765656b73666f726765656b732e6f72672f77702d636f6e74656e742f63646e2d75706c6f6164732f4f70657261746f72732d496e2d432e706e67)](https://www.geeksforgeeks.org/bitwise-operators-in-c-cpp/)

[C – Bit wise Operators](https://www.fresh2refresh.com/c-programming/c-operators-expressions/c-bit-wise-operators/)


# Quiz questions
<details>
<summary>

### Question #0
</summary>

`0x89 >> 3 =` ?
- [x] 0x11
- [ ] 0x08
- [ ] 0x22
- [ ] 0x44
- [ ] 0x89
</details>

<details>
<summary>

### Question #1
</summary>

What is `98` in base2?
- [ ] 0b10011000
- [x] 0b01100010
- [ ] 0b01010010
</details>

<details>
<summary>

### Question #2
</summary>

`0x01 << 1 =` ?
- [ ] 0x03
- [ ] 0x10
- [x] 0x02
- [ ] 0x01
- [ ] 0x00
</details>

<details>
<summary>

### Question #3
</summary>

What is `0x89` in base2?
- [ ] 0b01101001
- [ ] 0b10001000
- [x] 0b10001001
- [ ] 0b10101001
</details>

<details>
<summary>

### Question #4
</summary>

What is `98` in base16?
- [ ] 0x96
- [ ] 0x98
- [x] 0x62
</details>

<details>
<summary>

### Question #5
</summary>

`0x44 | 0x22 =` ?
- [x] `0x66`
- [ ] `0x44`
- [ ] `0x22`
</details>

<details>
<summary>

### Question #6
</summary>

What is `0b001010010` in base10?
- [ ] 83
- [ ] 84
- [x] 82
- [ ] 81
</details>

<details>
<summary>

### Question #7
</summary>

`0x01 & 0x00 =` ?
- [ ] `0x02`
- [ ] `0x01`
- [x] `0x00`
</details>

<details>
<summary>

### Question #8
</summary>

`0x01 | 0x01 =` ?
- [ ] `0x02`
- [x] `0x01`
- [ ] `0x00`
</details>

<details>
<summary>

### Question #9
</summary>

What is `0b01101101` in base16?
- [ ] 0x7D
- [ ] 0xD6
- [ ] 0x6E
- [x] 0x6D
- [ ] 0x36
</details>

<details>
<summary>

### Question #10
</summary>

`0x13 << 1 =` ?
- [ ] 0x4C
- [ ] 0x98
- [x] 0x26
- [ ] 0x13
</details>

<details>
<summary>

### Question #11
</summary>

`~ 0x98 =` ?
- [ ] 0x68
- [x] 0x67
- [ ] 0x66
</details>

<details>
<summary>

### Question #12
</summary>

`0x01 | 0x00 =` ?
- [ ] `0x02`
- [x] `0x01`
- [ ] `0x00`
</details>

<details>
<summary>

### Question #13
</summary>

`0x02 >> 1 =` ?
- [ ] 0x00
- [x] 0x01
- [ ] 0x02
</details>

<details>
<summary>

### Question #14
</summary>

`0x89 & 0x01 =` ?
- [ ] `0x88`
- [ ] `0x89`
- [x] `0x01`
- [ ] `0x00`
</details>

<details>
<summary>

### Question #15
</summary>

`0x88 & 0x01 =` ?
- [ ] `0x88`
- [ ] `0x89`
- [ ] `0x01`
- [x] `0x00`
</details>

<details>
<summary>

### Question #16
</summary>

What is `0x89` in base10?
- [x] 137
- [ ] 139
- [ ] 135
- [ ] 89
</details>

<details>
<summary>

### Question #17
</summary>

`0x66 & 0x22 =` ?
- [ ] `0x66`
- [ ] `0x44`
- [x] `0x22`
</details>

<details>
<summary>

### Question #18
</summary>

`0x01 & 0x01 =` ?
- [ ] `0x02`
- [x] `0x01`
- [ ] `0x00`
</details>

<details>
<summary>

### Question #19
</summary>

`~ 0x12 =` ?
- [ ] 0xEE
- [ ] 0x21
- [ ] 0xFD
- [x] 0xED
</details>

# Tasks

<details>
<summary>

### 0. 0
`mandatory`

File: [0-binary_to_uint.c]()
</summary>

Write a function that converts a binary number to an unsigned int.

- Prototype: `unsigned int binary_to_uint(const char *b);`
- where b is pointing to a string of `0` and `1` chars
- Return: the converted number, or 0 if
    - there is one or more chars in the string `b` that is not `0` or `1`
    - `b` is `NULL`
```
julien@ubuntu:~/0x14. Binary$ cat 0-main.c
#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    unsigned int n;

    n = binary_to_uint("1");
    printf("%u\n", n);
    n = binary_to_uint("101");
    printf("%u\n", n);
    n = binary_to_uint("1e01");
    printf("%u\n", n);
    n = binary_to_uint("1100010");
    printf("%u\n", n);
    n = binary_to_uint("0000000000000000000110010010");
    printf("%u\n", n);
    return (0);
}
julien@ubuntu:~/0x14. Binary$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-binary_to_uint.c -o a
julien@ubuntu:~/0x14. Binary$ ./a 
1
5
0
98
402
julien@ubuntu:~/0x14. Binary$ 
```
</details>

<details>
<summary>

### 1. 1
`mandatory`

File: [1-print_binary.c]()
</summary>

Write a function that prints the binary representation of a number.

- Prototype: `void print_binary(unsigned long int n);`
- Format: see example
- You are not allowed to use arrays
- You are not allowed to use `malloc`
- You are not allowed to use the `%` or `/` operators
```
julien@ubuntu:~/0x14. Binary$ cat 1-main.c 
#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_binary(0);
    printf("\n");
    print_binary(1);
    printf("\n");
    print_binary(98);
    printf("\n");
    print_binary(1024);
    printf("\n");
    print_binary((1 << 10) + 1);
    printf("\n");
    return (0);
}
julien@ubuntu:~/0x14. Binary$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-print_binary.c _putchar.c -o b
julien@ubuntu:~/0x14. Binary$ ./b 
0
1
1100010
10000000000
10000000001
julien@ubuntu:~/0x14. Binary$ 
```
</details>

<details>
<summary>

### 2. 10
`mandatory`

File: [2-get_bit.c]()
</summary>

Write a function that returns the value of a bit at a given index.

- Prototype: `int get_bit(unsigned long int n, unsigned int index);`
- where `index` is the index, starting from `0` of the bit you want to get
- Returns: the value of the bit at index `index` or `-1` if an error occured
```
julien@ubuntu:~/0x14. Binary$ cat 2-main.c
#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int n;

    n = get_bit(1024, 10);
    printf("%d\n", n);
    n = get_bit(98, 1);
    printf("%d\n", n);
    n = get_bit(1024, 0);
    printf("%d\n", n);
    return (0);
}
julien@ubuntu:~/0x14. Binary$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-get_bit.c -o c  
julien@ubuntu:~/0x14. Binary$ ./c
1
1
0
julien@ubuntu:~/0x14. Binary$ 
```
</details>

<details>
<summary>

### 3. 11
`mandatory`

File: [3-set_bit.c]()
</summary>

Write a function that sets the value of a bit to `1` at a given index.

- Prototype: `int set_bit(unsigned long int *n, unsigned int index);`
- where `index` is the index, starting from `0` of the bit you want to set
- Returns: `1` if it worked, or `-1` if an error occurred
```
julien@ubuntu:~/0x14. Binary$ cat 3-main.c
#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    unsigned long int n;

    n = 1024;
    set_bit(&n, 5);
    printf("%lu\n", n);
    n = 0;
    set_bit(&n, 10);
    printf("%lu\n", n);
    n = 98;
    set_bit(&n, 0);
    printf("%lu\n", n);
    return (0);
}
julien@ubuntu:~/0x14. Binary$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c 3-set_bit.c -o d
julien@ubuntu:~/0x14. Binary$ ./d
1056
1024
99
julien@ubuntu:~/0x14. Binary$ 
```
</details>

<details>
<summary>

### 4. 100
`mandatory`

File: [4-clear_bit.c]()
</summary>

Write a function that sets the value of a bit to 0 at a given index.

- Prototype: `int clear_bit(unsigned long int *n, unsigned int index);`
- where `index` is the index, starting from `0` of the bit you want to set
- Returns: `1` if it worked, or `-1` if an error occurred
```
julien@ubuntu:~/0x14. Binary$ cat 4-main.c
#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    unsigned long int n;

    n = 1024;
    clear_bit(&n, 10);
    printf("%lu\n", n);
    n = 0;
    clear_bit(&n, 10);
    printf("%lu\n", n);
    n = 98;
    clear_bit(&n, 1);
    printf("%lu\n", n);
    return (0);
}
julien@ubuntu:~/0x14. Binary$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-main.c 4-clear_bit.c -o e
julien@ubuntu:~/0x14. Binary$ ./e
0
0
96
julien@ubuntu:~/0x14. Binary$ 
```
</details>

<details>
<summary>

### 5. 101
`mandatory`

File: [5-flip_bits.c]()
</summary>

Write a function that returns the number of bits you would need to flip to get from one number to another.

- Prototype: `unsigned int flip_bits(unsigned long int n, unsigned long int m);`
- You are not allowed to use the `%` or `/` operators
```
julien@ubuntu:~/0x14. Binary$ cat 5-main.c
#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    unsigned int n;

    n = flip_bits(1024, 1);
    printf("%u\n", n);
    n = flip_bits(402, 98);
    printf("%u\n", n);
    n = flip_bits(1024, 3);
    printf("%u\n", n);
    n = flip_bits(1024, 1025);
    printf("%u\n", n);
    return (0);
}
julien@ubuntu:~/0x14. Binary$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 5-main.c 5-flip_bits.c -o f
julien@ubuntu:~/0x14. Binary$ ./f
2
5
3
1
julien@ubuntu:~/0x14. Binary$ 
```
</details>

<details>
<summary>

### 6. Endianness
`#advanced`


File: [100-get_endianness.c]()
</summary>

Write a function that checks the endianness.

- Prototype: `int get_endianness(void);`
- Returns: `0` if big endian, `1` if little endian
```
julien@ubuntu:~/0x14. Binary$ cat 100-main.c
#include <stdio.h>
#include "main.h"

int main(void)
{
    int n;

    n = get_endianness();
    if (n != 0)
    {
        printf("Little Endian\n");
    }
    else
    {
        printf("Big Endian\n");
    }
    return (0);
}
julien@ubuntu:~/0x14. Binary$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 100-main.c 100-get_endianness.c -o h
julien@ubuntu:~/0x14. Binary$ ./h 
Little Endian
julien@ubuntu:~/0x14. Binary$ lscpu | head
Architecture:          x86_64
CPU op-mode(s):        32-bit, 64-bit
Byte Order:            Little Endian
CPU(s):                1
On-line CPU(s) list:   0
Thread(s) per core:    1
Core(s) per socket:    1
Socket(s):             1
NUMA node(s):          1
Vendor ID:             GenuineIntel
julien@ubuntu:~/0x14. Binary$
```
</details>

<details>
<summary>

### 7. Crackme3
`#advanced`

File: [101-password](https://github.com/alx-tools/0x13.c)
</summary>

Find the password for [this program](https://github.com/alx-tools/0x13.c).
- Save the password in the file `101-password`
- Your file should contain the exact password, no new line, no extra space
```
julien@ubuntu:~/0x14. Binary$ ./crackme3 `cat 101-password`
Congratulations!
julien@ubuntu:~/0x14. Binary$ 
```
</details>