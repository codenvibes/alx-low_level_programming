# **0x0A. C - ARGC, ARGV**

# Resources
Read or watch:

[Arguments to main](https://publications.gbdirect.co.uk//c_book/chapter10/arguments_to_main.html)

[argc and argv](http://crasseux.com/books/ctutorial/argc-and-argv.html)

[What does argc and argv mean?](https://www.youtube.com/watch?v=aP1ijjeZc24)

[how to compile with unused variables]()

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

### 
</summary>


</details>

<details>
<summary>

### 
</summary>


</details>

<details>
<summary>

### 
</summary>


</details>

<details>
<summary>

### 
</summary>


</details>

<details>
<summary>

### 
</summary>


</details>

<details>
<summary>

### 
</summary>


</details>