# **0x12. C - SINGLY LINKED LISTS** `C`
`Algorithm`
`Data structure`

# Concepts
[Data Structures](https://intranet.alxswe.com/concepts/120)

# Resources
[Linked Lists](https://www.youtube.com/watch?v=udapt4FGY20&t=130s)

[Youtube](https://www.youtube.com/results?search_query=linked+lists)

# Learning Objectives
When and why using linked lists vs arrays

How to build and use linked lists

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

# More Info
Please use this data structure for this project:
```
/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;
```

# Quiz questions
<details>
<summary>

### Question #0
</summary>

What’s the “tail” of a linked list?
- [ ] It’s the node with the highest value
- [ ] It’s the node with the lowest value
- [ ] It’s the first node
- [x] It’s the node with the pointer to the next equals to `NULL`
</details>

<details>
<summary>

### Question #1
</summary>

What’s the “head” of a linked list?
- [ ] It’s the node with the lowest value
- [ ] It’s the node with the pointer to the next equals to `NULL`
- [x] It’s the first node
- [ ] It’s the node with the highest value
- [ ] It’s the last node
</details>

<details>
<summary>

### Question #2
</summary>

In a singly linked list, what are possible directions to traverse it? (select all possible answers)
- [ ] Backward
- [x] Forward
</details>

<details>
<summary>

### Question #3
</summary>

Arrays Vs Linked Lists: select all true statements
- [x] Array can contain as value a structure
- [ ] We can add elements indefinitely to an array
- [x] Memory is aligned for an Array - each elements are back to back in the memory
- [ ] We can easily remove an element from an Array
- [ ] Memory is aligned for a Linked list - each elements are back to back in the memory
- [x] Linked list can contain as value a structure
- [x] We can easily removed an element from a Linked list
- [x] We can add elements indefinitely to a linked list
</details>

<details>
<summary>

### Question #4
</summary>

What’s a node? (select all possible answers)
- [ ] It’s an integer
- [x] It’s a space allocated in memory
- [ ] It’s a cell in an array
- [x] It’s a structure with a pointer to the next node and value information
- [ ] It’s a server
</details>
