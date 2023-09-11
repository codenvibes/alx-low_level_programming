# **0x1A. C - HASH TABLES**
`C` `Algorithm` `Data structure`

<!-- # Background Context -->

# Resources
- [What is a HashTable Data Structure - Introduction to Hash Tables , Part 0](https://www.youtube.com/watch?v=MfhjkfocRR0)
- [Hash function](https://en.wikipedia.org/wiki/Hash_function)
- [Hash table](https://en.wikipedia.org/wiki/Hash_table)
- [All about hash tables](https://www.digitalocean.com/community/tutorials/hash-table-in-c-plus-plus)
- [why hash tables and not arrays](https://stackoverflow.com/questions/31930046/what-is-a-hash-table-and-how-do-you-make-it-in-c)

<!-- man or help:
- `` -->

# Learning Objectives
<details>
<summary><h3>What is a hash function</h3></summary>
</details>

<details>
<summary><h3>What makes a good hash function</h3></summary>
</details>

<details>
<summary><h3>What is a hash table, how do they work and how to use them</h3></summary>
</details>

<details>
<summary><h3>What is a collision and what are the main ways of dealing with collisions in the context of a hash table</h3></summary>
</details>

<details>
<summary><h3>What are the advantages and drawbacks of using hash tables</h3></summary>
</details>

<details>
<summary><h3>What are the most common use cases of hash tables</h3></summary>
</details>

# Requirements
- Allowed editors: `vi`, `vim`, `emacs`
- All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
- All your files should end with a new line
- A `README.md` file, at the root of the folder of the project is mandatory
- Your code should use the `Betty` style. It will be checked using [betty-style.pl](https://github.com/alx-tools/Betty/blob/master/betty-style.pl) and [betty-doc.pl](https://github.com/alx-tools/Betty/blob/master/betty-doc.pl)
- You are not allowed to use global variables
- No more than 5 functions per file
- You are allowed to use the C standard library
- The prototypes of all your functions should be included in your header file called `hash_tables.h`
- Don’t forget to push your header file
- All your header files should be include guarded

# More Info
<details>
<summary><h3>Data Structures</h3></summary>

Please use these data structures for this project:
```c
/**
 * struct hash_node_s - Node of a hash table
 *
 * @key: The key, string
 * The key is unique in the HashTable
 * @value: The value corresponding to a key
 * @next: A pointer to the next node of the List
 */
typedef struct hash_node_s
{
     char *key;
     char *value;
     struct hash_node_s *next;
} hash_node_t;

/**
 * struct hash_table_s - Hash table data structure
 *
 * @size: The size of the array
 * @array: An array of size @size
 * Each cell of this array is a pointer to the first node of a linked list,
 * because we want our HashTable to use a Chaining collision handling
 */
typedef struct hash_table_s
{
     unsigned long int size;
     hash_node_t **array;
} hash_table_t;
```
</details>

<details>
<summary><h3>Tests</h3></summary>

We strongly encourage you to work all together on a set of tests
</details>

<details>
<summary><h3>Python Dictionaries</h3></summary>

Python dictionaries are implemented using hash tables. When you will be done with this project, you will be able to better understand the power and simplicity of Python dictionaries. So much is actually happening when you type `d = {'a': 1, 'b': 2}`, but everything looks so simple for the user. Python doesn’t use the exact same implementation than the one you will work on today though. If you are curious on how it works under the hood, here is a good blog post about how dictionaries are implemented in Python 2.7 (not mandatory).

Note that all dictionaries are not implemented using hash tables and there is a difference between a dictionary and a hash table. [Read more here](https://stackoverflow.com/questions/2061222/what-is-the-true-difference-between-a-dictionary-and-a-hash-table) (not mandatory).
</details>

# Tasks
<details>
<summary>

### 0. 0. >>> ht = {}
`mandatory`

File: [0-hash_table_create.c]()
</summary>


</details>

<details>
<summary>

### 1. djb2
`mandatory`

File: [1-djb2.c]()
</summary>


</details>

<details>
<summary>

### 2. key -> index
`mandatory`

File: [2-key_index.c]()
</summary>


</details>

<details>
<summary>

### 3. >>> ht['betty'] = 'cool'
`mandatory`

File: [3-hash_table_set.c]()
</summary>


</details>

<details>
<summary>

### 4. >>> ht['betty']
`mandatory`

File: [4-hash_table_get.c]()
</summary>


</details>

<details>
<summary>

### 5. >>> print(ht)
`mandatory`

File: [5-hash_table_print.c]()
</summary>


</details>

<details>
<summary>

### 6. >>> del ht
`mandatory`

File: [6-hash_table_delete.c]()
</summary>


</details>

<details>
<summary>

### 7. $ht['Betty'] = 'Cool'
`#advanced`

File: [100-sorted_hash_table.c]()
</summary>


</details>

