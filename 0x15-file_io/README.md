# **0x15. C - FILE I/O**
`C`
`Syscall`

# Resources
[File descriptors]()

[C Programming in Linux Tutorial #024 - open() read() write() Functions]()

man or help:
- `open`
- `close`
- `read`
- `write`
- `dprintf`

# Learning Objectives
- Look for the right source of information online
- How to create, open, close, read and write files
- What are file descriptors
- What are the 3 standard file descriptors, what are their purpose and what are their `POSIX` names
- How to use the I/O system calls `open`, `close`, `read` and `write`
- What are and how to use the flags `O_RDONLY`, `O_WRONLY`, `O_RDWR`
- What are file permissions, and how to set them when creating a file with the `open` system call
- What is a system call
- What is the difference between a function and a system call

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
- Allowed syscalls: `read`, `write`, `open`, `close`
- You are allowed to use [_putchar](https://github.com/alx-tools/_putchar.c/blob/master/_putchar.c)
- You don’t have to push `_putchar.c`, we will use our file. If you do it won’t be taken into account
- In the following examples, the `main.c` files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own `main.c` files at compilation. Our `main.c` files might be different from the one shown in the examples
- The prototypes of all your functions and the prototype of the function `_putchar` should be included in your header file called `main.h`
- Don’t forget to push your header file
- All your header files should be include guarded
- Tip: always prefer using symbolic constants (`POSIX`) vs numbers when it makes sense. For instance `read(STDIN_FILENO, ...` vs `read(0, ...`
</details>

# Quiz questions
<details>
<summary>

### Question #0
</summary>

What is the return value of the system call `open` if it fails?
- [ ] 98
- [x] -1
- [ ] 0
</details>

<details>
<summary>

### Question #1
</summary>

Most of the time, on a classic, modern Linux system, what will be the value of the first file descriptor you will get after opening a new file with `open` (if `open` succeeds of course):
- [ ] 1
- [ ] 6
- [x] 3
- [ ] 4
- [ ] 2
- [ ] 5
- [ ] 0
</details>

<details>
<summary>

### Question #2
</summary>

What is the correct combination of `oflag`s used to open a file with the mode write only, create it if it doesn’t exist and append new content at the end if it already exists?
- [x] `O_WRONLY | O_CREAT | O_APPEND`
- [ ] `O_RDWR | O_CREAT | O_APPEND`
- [ ] `O_WRONLY | O_CREAT | O_EXCL`
- [ ] `O_WRONLY`
</details>

<details>
<summary>

### Question #3
</summary>

What is the `unistd` symbolic constant for the Standard error?
- [x] STDERR_FILENO
- [ ] STDOUT_FILENO
- [ ] STDIN_FILENO
</details>

<details>
<summary>

### Question #4
</summary>

What is the `unistd` symbolic constant for the standard output?
- [ ] STDERR_FILENO
- [x] STDOUT_FILENO
- [ ] STDIN_FILENO
</details>

<details>
<summary>

### Question #5
</summary>

why? #AlwaysAskWhy
- [ ] Because this will be the first opened file descriptor and we start counting starting from `1`
- [ ] I don’t care I never ask why, just let me access the tasks!
- [ ] Because this will be the third opened file descriptor for my process
- [x] Because most of the time, I will already have `stdin` (value 0), `stdout` (value `1`) and `stderr` (value 2) opened when my program starts executing.
- [ ] Because this will be the second opened file descriptor for my process
- [ ] Because this will be the first opened file descriptor and in CS we start counting starting from `0`
</details>

<details>
<summary>

### Question #6
</summary>

What happens if you try to write “Best” to the standard input on Ubuntu 14.04 LTS?
- [ ] The text will be printed on the terminal but I can’t pipe it
- [x] The text will be printed on the terminal on the standard output
- [ ] Segmentation fault
- [ ] Nothing

> Tips: Just try it! :)
</details>

<details>
<summary>

### Question #7
</summary>


</details>

<details>
<summary>

### Question #8
</summary>


</details>

<details>
<summary>

### Question #9
</summary>


</details>

<details>
<summary>

### Question #10
</summary>


</details>

<details>
<summary>

### Question #11
</summary>


</details>

<details>
<summary>

### Question #12
</summary>


</details>

<details>
<summary>

### Question #13
</summary>


</details>

<details>
<summary>

### Question #14
</summary>


</details>

# Tasks
<details>
<summary>

### 
</summary>


</details>