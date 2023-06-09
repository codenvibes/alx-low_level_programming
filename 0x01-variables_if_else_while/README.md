# **0x01. C - VARIABLES, IF, ELSE, WHILE**

# Resources
### [Everything you need to know to start with C.pdf](https://s3.amazonaws.com/alx-intranet.hbtn.io/uploads/misc/2022/4/e0ccf91eec6b977a9e00ed384dc285df9c2772e3.pdf?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIARDDGGGOUSBVO6H7D%2F20230524%2Fus-east-1%2Fs3%2Faws4_request&X-Amz-Date=20230524T062206Z&X-Amz-Expires=86400&X-Amz-SignedHeaders=host&X-Amz-Signature=8c35f4df15ea6b2f78dc6c5bc162221e9edf7fa0fa88a999fcf956aa8c22e9cb) (You do not have to learn everything in there yet, but make sure you read it entirely first and make sure you understand the slides: “comments”, “Data types | Integer types”, “Declaration”, “Characters”, “Arithmetic operators”, “Variables assignments”, “Comparisons”, “Logical operators”, “if, if…else”, “while loops”.)
### [Keywords and identifiers](https://publications.gbdirect.co.uk//c_book/chapter2/keywords_and_identifiers.html)
### [integers](https://publications.gbdirect.co.uk//c_book/chapter2/integral_types.html)
### [Arithmetic Operators in C](https://www.tutorialspoint.com/cprogramming/c_arithmetic_operators.htm)
### [If statements in C](https://www.cprogramming.com/tutorial/c/lesson2.html)
### [if…else statement](https://www.tutorialspoint.com/cprogramming/if_else_statement_in_c.htm)
### [Relational operators](https://www.tutorialspoint.com/cprogramming/c_relational_operators.htm)
### [Logical operators](https://www.fresh2refresh.com/c-programming/c-operators-expressions/c-logical-operators/)
### [while loop in C](https://www.tutorialspoint.com/cprogramming/c_while_loop.htm)
### [While loop](https://www.youtube.com/watch?v=Ju1LYO9pkaI)

<details>
<summary>

### [C – Increment/decrement Operators](https://www.fresh2refresh.com/c-programming/c-operators-expressions/c-increment-decrement-operators/)

</summary>

```
#include <stdio.h>

int main()
{
    int a = 1;
    int b = 1;
    int c = 1;
    int d = 1;

    printf("a++ : %d   a : %d\n", a++, a);
    printf("++b : %d   b : %d\n", ++b, b);
    printf("c-- : %d   c : %d\n", c--, c);
    printf("--d : %d   d : %d\n", --d, d);
}
```
output:
```
a++ : 1   a : 2
++b : 2   b : 2
c-- : 1   c : 0
--d : 0   d : 0
```
Four integer variables (`a`, `b`, `c`, and `d`) are declared and initialized to a value of 1.

<details>
<summary>

```
printf("a++ : %d   a : %d\n", a++, a);
```
</summary>

In this line, `a++` is a post-increment operation. The current value of `a` (which is 1) is used in the expression first, and then `a` is incremented. So, the value printed is 1. However, note that the subsequent use of `a` in the same statement (`a`) will reflect the updated value after the increment. Therefore, the value printed as `a` is 2.
</details>

<details>
<summary>

```
printf("++b : %d   b : %d\n", ++b, b);
```
</summary>

Here, `++b` is a pre-increment operation. It increments `b` to 2 and then uses the updated value in the expression. Hence, the value printed as `++b` is 2. The subsequent use of `b` in the same statement (`b`) will also reflect the updated value. Therefore, the value printed as `b` is 2.
</details>

<details>
<summary>

```
printf("c-- : %d   c : %d\n", c--, c);
```
</summary>

In this line, `c--` is a post-decrement operation. The current value of `c` (which is 1) is used in the expression first, and then c is decremented. So, the value printed is 1. However, note that the subsequent use of `c` in the same statement (`c`) will reflect the updated value after the decrement. Therefore, the value printed as `c` is 0.
</details>

<details>
<summary>

```
printf("--d : %d   d : %d\n", --d, d);
```
</summary>

In this line, `--d` is a pre-decrement operation. It decrements `d` to 0 and then uses the updated value in the expression. Hence, the value printed as `--d` is 0. The subsequent use of `d` in the same statement (`d`) will also reflect the updated value. Therefore, the value printed as `d` is 0.
</details>

</details>


# Notes
<img src="https://media.geeksforgeeks.org/wp-content/cdn-uploads/Operators-In-C.png">

<details>
<summary>

### The if Statement 
</summary>

```
if (expression)
  statements
```
The expression evaluates to either **true** or **false**, and statements can be a single statement or a code block enclosed by curly braces { }.
An expression that evaluates to a non-zero value is considered true.

For example:
```
int in_stock = 20;
if (in_stock)
  printf("Order received.\n"); 
```
</details>

<details>
<summary>

### The if-else Statement 
</summary>

```
#include <stdio.h>

int main() {
  int score = 89;
  
  if (score >= 90)
    printf("Top 10%%.\n");
  else
    printf("Less than 90.\n");
    
  return 0;
}
```
</details>

<details>
<summary>

### ?: operator
</summary>

Another way to form an if-else statement is by using the ?: operator in a conditional expression. The ?: operator can have only one statement associated with the if and the else.
```
#include <stdio.h>

int main() {
  int y;
  int x = 3;

  y = (x >= 5) ?  5 : x;

/* This is equivalent to:
  if (x >= 5)
    y = 5;
  else
    y = x;
*/

  return 0;
}
```
</details>

<details>
<summary>

### Logical Operators
</summary>

#### The && Operator  
The logical AND operator `&&` returns a true result only when both expressions are true.
> A compound Boolean expression is evaluated **from left to right**. Evaluation stops when no further test is needed for determining the result, so be sure to consider the arrangement of operands when one result affects the outcome of a later result.
#### The || Operator 
The logical OR operator `||` returns a true result when any one expression or both expressions are true. 
```
if (n == 999 || (n > 0 && n <= 100))
  printf("Input valid.\n");
```
> Parentheses are used for clarity even though && has higher precedence than || and will be evaluated first.
#### The ! Operator 
The logical NOT operator ! returns the reverse of its value. 

NOT true returns false, and NOT false returns true.
```
if (!(n == 'x' || n == 'X'))
  printf("Roman numeral is not 10.\n");
```
</details>

<details>
<summary>

### The while Loop 
</summary>

The **while** statement is called a **loop structure** because it executes statements repeatedly while an expression is true, looping over and over again.

The expression evaluates to either true or false, and statements can be a single statement or, more commonly, a code block enclosed by curly braces { }.
```
#include <stdio.h>

int main() {
  int count = 1;
  
  while (count < 8) {
    printf("Count = %d\n", count);
    count++;
  }
    
  return 0;
}
```
</details>

<details>
<summary>

### The do-while Loop 
</summary>

> The do-while loop executes the loop statements before evaluating the expression to determine if the loop should be repeated.

It takes the form: 
```
do {
  statements
} while (expression);
```
The expression evaluates to either true or false, and statements can be a single statement or a code block enclosed by curly braces { }.
```
#include <stdio.h>

int main() {
  int count = 1;
  
  do {
    printf("Count = %d\n", count);
    count++;
  } while (count < 8);
    
  return 0;
}
```
Note the semicolon after the while statement.

The do-while loop always executes at least once, even if the expression evaluates to false.
</details>

<details>
<summary>

### break and continue 
</summary>

The break statement was introduced for use in the switch statement. It is also useful for immediately exiting a loop.

For example, the following program uses a break to exit a while loop:
```
int num = 5;
  
while (num > 0) {
  if (num == 3)
    break;
  printf("%d\n", num);
  num--;
}
```
This program displays:

5

4

and then exits the loop.

When you want to remain in the loop, but skip ahead to the next iteration, you use the continue statement.

For example:
```
int num = 5;
  
while (num > 0) {
  num--;
  if (num == 3)
    continue;
      
  printf("%d\n", num);
}
```
The program output displays:

4

2

1

0

As you can see, the value 3 is skipped.

In the code above, if num was decremented after the continue statement an infinite loop would be created.
</details>

<details>
<summary>

### The for Loop 
</summary>

The for statement is a loop structure that executes statements a fixed number of times. 

It takes the form: 
```
for (init_expr; loop_condition; loop_expr) {
  statements;
}
```
The **initvalue** is a counter set to an initial value. This part of the for loop is performed only once.

The **condition** is a Boolean expression that compares the counter to a value before each loop iteration, stopping the loop when false is returned.

The **increment** increases (or decreases) the counter by a set value.

For example, the program below displays 0 through 9:
```
int i;
int max = 10;
  
for (i = 0; i < max; i++) {
  printf("%d\n", i);
}
```
The for loop can contain multiple expressions separated by commas in each part. 

For example:
```
for (x = 0, y = num; x < y; i++, y--) { 
  statements; 
}
```
Also, you can skip the initvalue, condition and/or increment.

For example:
```
int i=0;
int max = 10;
for (; i < max; i++) {
  printf("%d\n", i);
}
```
Loops can also be nested.

When writing a program this way, there is an outer loop and an inner loop. For each iteration of the outer loop the inner loop repeats its entire cycle.

In the following example, nested for loops are used to output a multiplication table:
```
int i, j;
int table = 10;
int max = 12;

for (i = 1; i <= table; i++) {
  for (j = 0; j <= max; j++) {
    printf("%d x %d = %d\n", i, j, i*j);
  }
  printf("\n"); /* blank line between tables */ 
}
```
A break in an inner loop exits that loop and execution continues with the outer loop.

A continue statement works similarly in nested loops.
</details>

## man or help:
- `ascii` (You do not need to learn about `scanf`, `getc`, `getchar`, `EOF`, `EXIT_SUCCESS`, `time`, `rand`, `srand`, `RAND_MAX`, `for` loops, `do...while` loops, functions.)

# Learning Objectives
- What are the arithmetic operators and how to use them
- What are the logical operators (sometimes called boolean operators) and how to use them
- What the the relational operators and how to use them
- What values are considered TRUE and FALSE in C
- What are the boolean operators and how to use them
- How to use the `if`, `if ... else` statements
- How to use comments
- How to declare variables of types `char`, `int`, `unsigned int`
- How to assign values to variables
- How to print the values of variables of type `char`, `int`, `unsigned int` with `printf`
- How to use the `while` loop
- How to use variables with the `while` loop
- How to print variables using `printf`
- What is the `ASCII` character set
- What are the purpose of the `gcc` flags `-m32` and `-m64`

# Requirements
- Allowed editors: `vi`, `vim`, `emacs`
- All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -`Wall -Werror -Wextra -pedantic -std=gnu89`
- All your files should end with a new line
- A `README.md` file, at the root of the folder of the project
- There should be no errors and no warnings during compilation
- You are not allowed to use `system`
- Your code should use the `Betty` style. It will be checked using betty-style.pl and betty-doc.pl

# Quiz questions

<details>
<summary><h2 style="display: inline">Question #0</h2></summary>
<div>

Which of the following are valid `while` or `do/while` statements in ANSI C and Betty-compliant? (Considering `a` and `b` two variables of type `int`)

Please select all correct answers
- [x]
    ```
    a = 0;
    while (a < b)
    {
        printf("%d\n", a);
        a++;
    }
    ```
- [ ]
    ```
    a = 0;
    do while (a < b)
    {
        printf("%d\n", a);
        a++;
    }
    ```
- [x]
    ```
    a = 0;
    while (a < b)
        printf("%d\n", a++);
    ```
- [ ]
    ```
    a = 0;
    while (a < b)
    (
        printf("%d\n", a);
        a++;
    )
    ```
- [x]
    ```
    a = 0;
    do {
        printf("%d\n", a);
        a++;
    } while (a < b);
    ```
- [ ]
    ```
    while (a = 0; a < b; a++)
    {
        printf("%d\n", a);
    }
    ```
</div>
</details>

<details>
<summary><h2 style="display: inline">Question #1</h2></summary>
<div>

What is the size of the `float` data type?
- [x] 4 bytes
- [ ] 8 bytes
- [ ] 2 bytes
- [ ] 1 byte
</div>
</details>

<details>
<summary><h2 style="display: inline">Question #2</h2></summary>
<div>

What is the size of the `char` data type?
- [ ] 4 bytes
- [ ] 8 bytes
- [ ] 2 bytes
- [x] 1 byte
</div>
</details>

<details>
<summary><h2 style="display: inline">Question #3</h2></summary>
<div>

Which of the following are valid `if` statements in ANSI C and Betty-compliant? (Considering `a` and `b` two variables of type `int`)

Please select all correct answers
- [ ]
    ```
    if ((((((a > b))))))
    {
    return (a);
    }
    ```
- [x]
    ```
    if (a > b)
    return (a);
    ```
- [ ]
    ```
    if {a > b}
    (
    return {a};
    )
    ```
- [x]
    ```
    if (a > b)
    {
    return (a);
    }
    ```
- [ ]
    ```
    if a > b
    {
    return (a);
    }
    ```
</div>
</details>

<details>
<summary><h2 style="display: inline">Question #4</h2></summary>
<div>

Which of the following are valid `for` statements in ANSI C and Betty-compliant? (Considering `a` and `b` two variables of type `int`)

Please select all correct answers
- [ ]
    ```
    a = 0;
    for (a < b;;)
    {
        printf("%d\n", a++);
    }
    ```
- [x]
    ```
    a = 0;
    for (; a < b;)
    {
        printf("%d\n", a++);
    }
    ```
- [ ]
    ```
    for (int a = 0; a < b; a++)
    {
        printf("%d\n", a);
    }
    ```
- [x]
    ```
    for (a = 0; a < b; a++)
        printf("%d\n", a);
    ```
- [x]
    ```
    for (a = 0; a < b; a++)
    {
        printf("%d\n", a);
    }
    ```
</div>
</details>

<details>
<summary><h2 style="display: inline">Question #5</h2></summary>
<div>

What is the size of the `unsigned int` data type?
- [x] 4 bytes
- [ ] 8 bytes
- [ ] 2 bytes
- [ ] 1 byte
</div>
</details>

# Tasks
## 0. Positive anything is better than negative nothing
`mandatory`

This program will assign a random number to the variable `n` each time it is executed. Complete the source code in order to print whether the number stored in the variable `n` is positive or negative.
- You can find the source code [here](https://github.com/holbertonschool/0x01.c/blob/master/0-positive_or_negative_c)
- The variable n will store a different value every time you will run this program
- You don’t have to understand what rand, srand, RAND_MAX do. Please do not touch this code
- The output of the program should be:
    - The number, followed by
        - if the number is greater than 0: is positive
        - if the number is 0: is zero
        - if the number is less than 0: is negative
    - followed by a new line
```
julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-positive_or_negative.c -o 0-positive_or_negative
julien@ubuntu:~/0x01$ ./0-positive_or_negative 
-520693284 is negative
julien@ubuntu:~/0x01$ ./0-positive_or_negative 
-973398895 is negative
julien@ubuntu:~/0x01$ ./0-positive_or_negative 
-199220452 is negative
julien@ubuntu:~/0x01$ ./0-positive_or_negative 
561319348 is positive
julien@ubuntu:~/0x01$ ./0-positive_or_negative 
561319348 is positive
julien@ubuntu:~/0x01$ ./0-positive_or_negative 
266853958 is positive
julien@ubuntu:~/0x01$ ./0-positive_or_negative 
-48147767 is negative
julien@ubuntu:~/0x01$ ./0-positive_or_negative 
0 is zero
julien@ubuntu:~/0x01$ 
```
Repo:
- GitHub repository: alx-low_level_programming
- Directory: 0x01-variables_if_else_while
- File: [0-positive_or_negative.c]()
    
## 1. The last digit
`mandatory`

This program will assign a random number to the variable `n` each time it is executed. Complete the source code in order to print the last digit of the number stored in the variable `n`.
- You can find the source code [here](https://github.com/holbertonschool/0x01.c/blob/master/1-last_digit_c)
- The variable n will store a different value every time you run this program
- You don’t have to understand what `rand`, `srand`, and `RAND_MAX` do. Please do not touch this code
- The output of the program should be:
    - The string `Last digit of`, followed by
    - `n`, followed by
    - the string `is`, followed by
        - if the last digit of `n` is greater than 5: the string `and is greater than 5`
        - if the last digit of `n` is 0: the string `and is 0`
        - if the last digit of `n` is less than 6 and not 0: the string `and is less than 6 and not 0`
    - followed by a new line
```
julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-last_digit.c -o 1-last_digit
julien@ubuntu:~/0x01$ ./1-last_digit 
Last digit of 629438752 is 2 and is less than 6 and not 0
julien@ubuntu:~/0x01$ ./1-last_digit 
Last digit of -748255693 is -3 and is less than 6 and not 0
julien@ubuntu:~/0x01$ ./1-last_digit 
Last digit of -1052791662 is -2 and is less than 6 and not 0
julien@ubuntu:~/0x01$ ./1-last_digit 
Last digit of -284805734 is -4 and is less than 6 and not 0
julien@ubuntu:~/0x01$ ./1-last_digit 
Last digit of -284805734 is -4 and is less than 6 and not 0
julien@ubuntu:~/0x01$ ./1-last_digit 
Last digit of 491506926 is 6 and is greater than 5
julien@ubuntu:~/0x01$ ./1-last_digit 
Last digit of 954249937 is 7 and is greater than 5
julien@ubuntu:~/0x01$ ./1-last_digit 
Last digit of 652334952 is 2 and is less than 6 and not 0
julien@ubuntu:~/0x01$ ./1-last_digit 
Last digit of -729688197 is -7 and is less than 6 and not 0
julien@ubuntu:~/0x01$ ./1-last_digit 
Last digit of -729688197 is -7 and is less than 6 and not 0
julien@ubuntu:~/0x01$ ./1-last_digit 
Last digit of 45528266 is 6 and is greater than 5
julien@ubuntu:~/0x01$ ./1-last_digit 
Last digit of 45528266 is 6 and is greater than 5
julien@ubuntu:~/0x01$ ./1-last_digit 
Last digit of 809065140 is 0 and is 0
julien@ubuntu:~/0x01$
```
Repo:
- GitHub repository: alx-low_level_programming
- Directory: 0x01-variables_if_else_while
- File: [1-last_digit.c]()
    
## 2. I sometimes suffer from insomnia. And when I can't fall asleep, I play what I call the alphabet game
`mandatory`

Write a program that prints the alphabet in lowercase, followed by a new line.
- You can only use the `putchar` function (every other function (`printf`, `puts`, etc…) is forbidden)
- All your code should be in the `main` function
- You can only use `putchar` twice in your code
```
julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-print_alphabet.c -o 2-print_alphabet
julien@ubuntu:~/0x01$ ./2-print_alphabet 
abcdefghijklmnopqrstuvwxyz
julien@ubuntu:~/0x01$
```
Repo:
- GitHub repository: alx-low_level_programming
- Directory: 0x01-variables_if_else_while
- File: [2-print_alphabet.c]()
    
## 3. alphABET
`mandatory`

Write a program that prints the alphabet in lowercase, and then in uppercase, followed by a new line.
- You can only use the `putchar` function (every other function (`printf`, `puts`, etc…) is forbidden)
- All your code should be in the `main` function
- You can only use `putchar` three times in your code
```
julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-print_alphabets.c -o 3-print_alphabets
julien@ubuntu:~/0x01$ ./3-print_alphabets | cat -e
abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ$
julien@ubuntu:~/0x01$ 
```
Repo:
- GitHub repository: alx-low_level_programming
- Directory: 0x01-variables_if_else_while
- File: [3-print_alphabets.c]()
    
## 4. When I was having that alphabet soup, I never thought that it would pay off
`mandatory`

Write a program that prints the alphabet in lowercase, followed by a new line.
- Print all the letters except `q` and `e`
- You can only use the `putchar` function (every other function (`printf`, `puts`, etc…) is forbidden)
- All your code should be in the `main` function
- You can only use `putchar` twice in your code
```
julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-print_alphabt.c -o 4-print_alphabt
julien@ubuntu:~/0x01$ ./4-print_alphabt 
abcdfghijklmnoprstuvwxyz
julien@ubuntu:~/0x01$ ./4-print_alphabt | grep [eq]
julien@ubuntu:~/0x01$ 
```
Repo:
- GitHub repository: alx-low_level_programming
- Directory: 0x01-variables_if_else_while
- File: [4-print_alphabt.c]()
    
## 5. Numbers
`mandatory`

Write a program that prints all single digit numbers of base 10 starting from 0, followed by a new line.
- All your code should be in the main function
```
julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 5-print_numbers.c -o 5-print_numbers
julien@ubuntu:~/0x01$ ./5-print_numbers 
0123456789
julien@ubuntu:~/0x01$ 
```
Repo:
- GitHub repository: alx-low_level_programming
- Directory: 0x01-variables_if_else_while
- File: [5-print_numbers.c]()
    
## 6. Numberz
`mandatory`

Write a program that prints all single digit numbers of base 10 starting from `0`, followed by a new line.
- You are not allowed to use any variable of type `char`
- You can only use the `putchar` function (every other function (`printf`, `puts`, etc…) is forbidden)
- You can only use `putchar` twice in your code
- All your code should be in the `main` function
```
julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 6-print_numberz.c -o 6-print_numberz
julien@ubuntu:~/0x01$ ./6-print_numberz 
0123456789
julien@ubuntu:~/0x01$ 
```
Repo:
- GitHub repository: alx-low_level_programming
- Directory: 0x01-variables_if_else_while
- File: [6-print_numberz.c]()
    
## 7. Smile in the mirror
`mandatory`

Write a program that prints the lowercase alphabet in reverse, followed by a new line.
- You can only use the `putchar` function (every other function (`printf`, `puts`, etc…) is forbidden)
- All your code should be in the `main` function
- You can only use `putchar` twice in your code
```
julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 7-print_tebahpla.c -o 7-print_tebahpla
julien@ubuntu:~/0x01$ ./7-print_tebahpla
zyxwvutsrqponmlkjihgfedcba
julien@ubuntu:~/0x01$
```
Repo:
- GitHub repository: alx-low_level_programming
- Directory: 0x01-variables_if_else_while
- File: [7-print_tebahpla.c]()
    
## 8. Hexadecimal
`mandatory`

Write a program that prints all the numbers of base 16 in lowercase, followed by a new line.
- You can only use the `putchar` function (every other function (`printf`, `puts`, etc…) is forbidden)
- All your code should be in the `main` function
- You can only use `putchar` three times in your code
```
julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 8-print_base16.c -o 8-print_base16
julien@ubuntu:~/0x01$ ./8-print_base16
0123456789abcdef
julien@ubuntu:~/0x01$
```
Repo:
- GitHub repository: alx-low_level_programming
- Directory: 0x01-variables_if_else_while
- File: [8-print_base16.c]()
    
## 9. Patience, persistence and perspiration make an unbeatable combination for success
`mandatory`

Write a program that prints all possible combinations of single-digit numbers.
- Numbers must be separated by `,`, followed by a space
- Numbers should be printed in ascending order
- You can only use the `putchar` function (every other function (`printf`, `puts`, etc…) is forbidden)
- All your code should be in the `main` function
- You can only use `putchar` four times maximum in your code
- You are not allowed to use any variable of type `char`
```
julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 9-print_comb.c -o 9-print_comb
julien@ubuntu:~/0x01$ ./9-print_comb | cat -e
0, 1, 2, 3, 4, 5, 6, 7, 8, 9$
julien@ubuntu:~/0x01$ 
```
Repo:
- GitHub repository: alx-low_level_programming
- Directory: 0x01-variables_if_else_while
- File: [9-print_comb.c]()
    
## 10. Inventing is a combination of brains and materials. The more brains you use, the less material you need
`#advanced`

Write a program that prints all possible different combinations of two digits.
- Numbers must be separated by `,`, followed by a space
- The two digits must be different
- `01` and `10` are considered the same combination of the two digits `0` and `1`
- Print only the smallest combination of two digits
- Numbers should be printed in ascending order, with two digits
- You can only use the `putchar` function (every other function (`printf`, `puts`, etc…) is forbidden)
- You can only use `putchar` five times maximum in your code
- You are not allowed to use any variable of type `char`
- All your code should be in the `main` function
```
julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 100-print_comb3.c -o 100-print_comb3
julien@ubuntu:~/0x01$ ./100-print_comb3
01, 02, 03, 04, 05, 06, 07, 08, 09, 12, 13, 14, 15, 16, 17, 18, 19, 23, 24, 25, 26, 27, 28, 29, 34, 35, 36, 37, 38, 39, 45, 46, 47, 48, 49, 56, 57, 58, 59, 67, 68, 69, 78, 79, 89
julien@ubuntu:~/0x01$ 
```
Repo:
- GitHub repository: alx-low_level_programming
- Directory: 0x01-variables_if_else_while
- File: [100-print_comb3.c]()
    
## 11. The success combination in business is: Do what you do better... and: do more of what you do...
`#advanced`

Write a program that prints all possible different combinations of three digits.
- Numbers must be separated by ,, followed by a space
- The three digits must be different
- `012`, `120`, `102`, `021`, `201`, `210` are considered the same combination of the three digits `0`, `1` and `2`
- Print only the smallest combination of three digits
- Numbers should be printed in ascending order, with three digits
- You can only use the `putchar` function (every other function (`printf`, `puts`, etc…) is forbidden)
- You can only use `putchar` six times maximum in your code
- You are not allowed to use any variable of type `char`
- All your code should be in the `main` function
```
julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 101-print_comb4.c -o 101-print_comb4
julien@ubuntu:~/0x01$ ./101-print_comb4
012, 013, 014, 015, 016, 017, 018, 019, 023, 024, 025, 026, 027, 028, 029, 034, 035, 036, 037, 038, 039, 045, 046, 047, 048, 049, 056, 057, 058, 059, 067, 068, 069, 078, 079, 089, 123, 124, 125, 126, 127, 128, 129, 134, 135, 136, 137, 138, 139, 145, 146, 147, 148, 149, 156, 157, 158, 159, 167, 168, 169, 178, 179, 189, 234, 235, 236, 237, 238, 239, 245, 246, 247, 248, 249, 256, 257, 258, 259, 267, 268, 269, 278, 279, 289, 345, 346, 347, 348, 349, 356, 357, 358, 359, 367, 368, 369, 378, 379, 389, 456, 457, 458, 459, 467, 468, 469, 478, 479, 489, 567, 568, 569, 578, 579, 589, 678, 679, 689, 789
julien@ubuntu:~/0x01$ 
```
Repo:
- GitHub repository: alx-low_level_programming
- Directory: 0x01-variables_if_else_while
- File: [101-print_comb4.c]()
    
## 12. Software is eating the World
`#advanced`

Write a program that prints all possible combinations of two two-digit numbers.
- The numbers should range from `0` to `99`
- The two numbers should be separated by a space
- All numbers should be printed with two digits. 1 should be printed as `01`
- The combination of numbers must be separated by comma, followed by a space
- The combinations of numbers should be printed in ascending order
- `00` `01` and `01 00` are considered as the same combination of the numbers 0 and 1
- You can only use the `putchar` function (every other function (`printf`, `puts`, etc…) is forbidden)
- You can only use `putchar` eight times maximum in your code
- You are not allowed to use any variable of type `char`
- All your code should be in the `main` function
```
julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 102-print_comb5.c -o 102-print_comb5
julien@ubuntu:~/0x01$ ./102-print_comb5
00 01, 00 02, 00 03, 00 04, 00 05, 00 06, 00 07, 00 08, 00 09, 00 10, 00 11, [...] 40 91, 40 92, 40 93, 40 94, 40 95, 40 96, 40 97, 40 98, 40 99, 41 42, 41 43, 41 44, 41 45, 41 46, 41 47, 41 48, 41 49, 41 50, 41 51, 41 52, 41 53 [...] 93 95, 93 96, 93 97, 93 98, 93 99, 94 95, 94 96, 94 97, 94 98, 94 99, 95 96, 95 97, 95 98, 95 99, 96 97, 96 98, 96 99, 97 98, 97 99, 98 99
```
Repo:
- GitHub repository: alx-low_level_programming
- Directory: 0x01-variables_if_else_while
- File: [102-print_comb5.c]()