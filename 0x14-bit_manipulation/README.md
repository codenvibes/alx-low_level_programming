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
- The prototypes of all your functions and the prototype of the function `_putchar` should be included in your header file called `lists.h`
- Don’t forget to push your header file
- All your header files should be include guarded
</details>

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
- [ ] 0x02
- [x] 0x01
- [ ] 0x00
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
- [ ] `0x01`
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
- [ ] `0x00`
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

