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

Those two codes do the same thing:
```
typedef struct point point;
struct point {
   int    x;
   int    y;
};
point p = {1, 2};
```
```
typedef struct point point;
struct point {
   int    x;
   int    y;
};
point p = { .y = 2, .x = 1 };
```
- [ ] False: the members of the structures will not have the same values
- [ ] False: the second does not compile
- [x] True
</details>

<details>
<summary>

### Question #1
</summary>

The general syntax for a struct declaration in C is:
```
struct tag_name {
   type member1;
   type member2;
   /* declare as many members as desired, but the entire structure size must be known to the compiler. */
};
```
- Maybe
- False
- True
</details>

<details>
<summary>

### Question #2
</summary>

Given this code:
```
struct point {
   int x;
   int y;
};
struct point my_point = { 3, 7 };
struct point *p = &my_point;
```
To set the member y of my variable my_point to 98, I can do (select all valid answers):
- [x] (*p).y = 98;
- [x] p->y = 98;
- [ ] p.y = 98;
- [ ] my_point->y = 98;
- [x] my_point.y = 98;
</details>

<details>
<summary>

### Question #3
</summary>

You should write documentation for all the structures you create
- [x] As soon as I write my structure.
- [ ] I’ll do it 5 minutes before the deadline when I try Betty on my header file
- [x] True
</details>