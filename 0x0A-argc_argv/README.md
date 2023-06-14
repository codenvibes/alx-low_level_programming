# **0x0A. C - ARGC, ARGV**

# Resources
Read or watch:

[Arguments to main](https://publications.gbdirect.co.uk//c_book/chapter10/arguments_to_main.html)

[argc and argv](http://crasseux.com/books/ctutorial/argc-and-argv.html)

[What does argc and argv mean?](https://www.youtube.com/watch?v=aP1ijjeZc24)

<details>
<summary>
<a href="https://www.google.com/webhp?q=unused+variable+C">how to compile with unused variables</a>
</summary>

In C, unused variables can sometimes generate warnings during the compilation process. These warnings are typically displayed to alert the programmer about potentially unnecessary variables that are not being used in the code. However, if you want to compile your code without generating warnings for unused variables, you can use specific compiler flags or directives depending on the compiler you are using. Here are a few common methods:

1. Disable warnings for unused variables using compiler flags:
   - For GCC: Use the `-Wno-unused-variable` flag during compilation to disable warnings specifically for unused variables.
   ```
   gcc -Wno-unused-variable yourfile.c -o yourprogram
   ```
   - For Clang: Use the `-Wno-unused-variable` flag to disable warnings for unused variables.
   ```
   clang -Wno-unused-variable yourfile.c -o yourprogram
   ```

2. Use pragmas or directives within your code:
   - For GCC or Clang: You can use the `__attribute__((unused))` directive before a variable declaration to indicate that the variable may be unused intentionally, suppressing the warning.
   ```c
   int unused_variable __attribute__((unused));
   ```

3. Assign a value or use the variable:
   - You can assign a value to the variable or use it in some way within your code to prevent the compiler from generating the warning. For example, you can use a dummy assignment:
   ```c
   int unused_variable;
   // ...
   unused_variable = 0;
   ```

It's worth noting that while disabling warnings for unused variables can be useful in certain scenarios, it's generally considered good practice to remove or properly utilize unused variables to ensure clean and maintainable code.
</details>

# Learning Objectives
- How to use arguments passed to your program
- What are two prototypes of `main` that you know of, and in which case do you use one or the other
- How to use `__attribute__((unused))` or `(void)` to compile functions with unused variables or parameters

# Requirements
- You are not allowed to use global variables
- No more than 5 functions per file
- The prototypes of all your functions and the prototype of the function `_putchar` should be included in your header file called `main.h`
- Don’t forget to push your header file
- You are allowed to use the standard library

# Quiz questions
<details>
<summary>

### Question #0
</summary>

In the following command, what is `argv[2]`?
```
$ ./argv "My School" "is fun"
```
- [ ] My School
- [ ] School
- [ ] ./argv
- [ ] NULL
- [x] is fun
- [ ] fun
- [ ] My
- [ ] is
- [ ] My School is fun
</details>

<details>
<summary>

### Question #1
</summary>

What is `argv[0]`
- [ ] The first command line argument
- [x] The program name
- [ ] It does not always exist
- [ ] NULL
</details>

<details>
<summary>

### Question #2
</summary>

What is `argv`?
- [x] An array of size `argc`
- [x] An array containing the program command line arguments
- [ ] An array containing the program compilation flags
</details>

<details>
<summary>

### Question #3
</summary>

What is `argv[argc]`?
- [ ] The program name
- [ ] The last command line argument
- [ ] The first command line argument
- [ ] It does not always exist
- [x] NULL
</details>

<details>
<summary>

### Question #4
</summary>

In the following command, what is `argv[2]`?
```
$ ./argv "My School is fun"
```
- [ ] My School
- [ ] School
- [ ] ./argv
- [x] NULL
- [ ] is fun
- [ ] fun
- [ ] My
- [ ] is
- [ ] My School is fun
</details>

<details>
<summary>

### Question #5
</summary>

In the following command, what is `argv[2]`?
```
$ ./argv My School is fun
```
- [ ] My School
- [x] School
- [ ] ./argv
- [ ] NULL
- [ ] is fun
- [ ] fun
- [ ] My
- [ ] is
- [ ] My School is fun
</details>

<details>
<summary>

### Question #6
</summary>

What is `argc`?
- [x] The size of the `argv` array
- [ ] The length of the first command line argument
- [ ] A flag set to 1 when command line arguments are present
- [x] The number of command line arguments
</details>

# Tasks
<details>
<summary>

### 0. It ain't what they call you, it's what you answer to
`mandatory`
</summary>

Write a program that prints its name, followed by a new line.
- If you rename the program, it will print the new name, without having to compile it again
- You should not remove the path before the name of the program
```
julien@ubuntu:~/0x0A. argc, argv$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-whatsmyname.c -o mynameis
julien@ubuntu:~/0x0A. argc, argv$ ./mynameis 
./mynameis
julien@ubuntu:~/0x0A. argc, argv$ mv mynameis mynewnameis
julien@ubuntu:~/0x0A. argc, argv$ ./mynewnameis 
./mynewnameis
julien@ubuntu:~/0x0A. argc, argv$ 
```
Repo:
- GitHub repository: alx-low_level_programming
- Directory: 0x0A-argc_argv
- File: [0-whatsmyname.c]()
</details>

<details>
<summary>

### 1. Silence is argument carried out by other means
`mandatory`
</summary>

Write a program that prints the number of arguments passed into it.
- Your program should print a number, followed by a new line
```
julien@ubuntu:~/0x0A. argc, argv$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-args.c -o nargs
julien@ubuntu:~/0x0A. argc, argv$ ./nargs 
0
julien@ubuntu:~/0x0A. argc, argv$ ./nargs hello
1
julien@ubuntu:~/0x0A. argc, argv$ ./nargs "hello, world"
1
julien@ubuntu:~/0x0A. argc, argv$ ./nargs hello, world
2
julien@ubuntu:~/0x0A. argc, argv$ 
```
Repo:
- GitHub repository: alx-low_level_programming
- Directory: 0x0A-argc_argv
- File: [1-args.c]()
</details>

<details>
<summary>

### 2. The best argument against democracy is a five-minute conversation with the average voter
`mandatory`
</summary>

Write a program that prints all arguments it receives.
- All arguments should be printed, including the first one
- Only print one argument per line, ending with a new line
```
julien@ubuntu:~/0x0A. argc, argv$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-args.c -o args
julien@ubuntu:~/0x0A. argc, argv$ ./args 
./args
julien@ubuntu:~/0x0A. argc, argv$ ./args You can do anything, but not everything.
./args
You
can
do
anything,
but
not
everything.
julien@ubuntu:~/0x0A. argc, argv$ 
```
Repo:
- GitHub repository: alx-low_level_programming
- Directory: 0x0A-argc_argv
- File: [2-args.c]()
</details>

<details>
<summary>

### 3. Neither irony nor sarcasm is argument
`mandatory`
</summary>

Write a program that multiplies two numbers.
- Your program should print the result of the multiplication, followed by a new line
- You can assume that the two numbers and result of the multiplication can be stored in an integer
- If the program does not receive two arguments, your program should print `Error`, followed by a new line, and return 1
```
julien@ubuntu:~/0x0A. argc, argv$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-mul.c -o mul
julien@ubuntu:~/0x0A. argc, argv$ ./mul 2 3
6
julien@ubuntu:~/0x0A. argc, argv$ ./mul 2 -3
-6
julien@ubuntu:~/0x0A. argc, argv$ ./mul 2 0
0
julien@ubuntu:~/0x0A. argc, argv$ ./mul 245 3245342
795108790
julien@ubuntu:~/0x0A. argc, argv$ ./mul
Error
julien@ubuntu:~/0x0A. argc, argv$ 
```
Repo:
- GitHub repository: alx-low_level_programming
- Directory: 0x0A-argc_argv
- File: [3-mul.c]()
</details>

<details>
<summary>

### 4. To infinity and beyond
`mandatory`
</summary>

Write a program that adds positive numbers.
- Print the result, followed by a new line
- If no number is passed to the program, print `0`, followed by a new line
- If one of the number contains symbols that are not digits, print `Error`, followed by a new line, and return 1
- You can assume that numbers and the addition of all the numbers can be stored in an `int`
```
julien@ubuntu:~/0x0A. argc, argv$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-add.c -o add
julien@ubuntu:~/0x0A. argc, argv$ ./add 1 1
2
julien@ubuntu:~/0x0A. argc, argv$ ./add 1 10 100 1000
1111
julien@ubuntu:~/0x0A. argc, argv$ ./add 1 2 3 e 4 5
Error
julien@ubuntu:~/0x0A. argc, argv$ ./add
0
julien@ubuntu:~/0x0A. argc, argv$ 
```
Repo:
- GitHub repository: alx-low_level_programming
- Directory: 0x0A-argc_argv
- File: [4-add.c]()
</details>

<details>
<summary>

### 5. Minimal Number of Coins for Change
`#advanced`
</summary>

Write a program that prints the minimum number of coins to make change for an amount of money.
- Usage: `./change cents`
- where `cents` is the amount of cents you need to give back
- if the number of arguments passed to your program is not exactly `1`, print `Error`, followed by a new line, and return 1
- you should use `atoi` to parse the parameter passed to your program
- If the number passed as the argument is negative, print `0`, followed by a new line
- You can use an unlimited number of coins of values 25, 10, 5, 2, and 1 cent
```
julien@ubuntu:~/0x0A. argc, argv$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 100-change.c -o change
julien@ubuntu:~/0x0A. argc, argv$ ./change 
Error
julien@ubuntu:~/0x0A. argc, argv$ ./change 10
1
julien@ubuntu:~/0x0A. argc, argv$ ./change 100
4
julien@ubuntu:~/0x0A. argc, argv$ ./change 101
5
julien@ubuntu:~/0x0A. argc, argv$ ./change 13
3
julien@ubuntu:~/0x0A. argc, argv$ 
```
Repo:
- GitHub repository: alx-low_level_programming
- Directory: 0x0A-argc_argv
- File: [100-change.c]()
</details>