<h1 align="center"><b>0x1C. C - MAKEFILES</b></h1>
<div align="center"><code>C</code></div>

<!-- # Background Context -->

<div align="center">
<br>

![gif](https://s3.amazonaws.com/intranet-projects-files/holbertonschool-low_level_programming/273/giphy-2.gif)
</div>

# Resources
<details>
<summary><b><a href="https://www.google.com/search?q=makefile">Makefile</a></b></summary>


</details>

<details>
<summary><b><a href="https://www.geeksforgeeks.org/how-to-install-make-on-ubuntu/">Installing the make utility</a></b></summary>


</details>

<details>
<summary><b><a href="https://www.gnu.org/software/make/manual/html_node/">make-official documentation</a></b></summary>


</details>


<!-- **man or help:**
- `` -->

# Learning Objectives
<details>
<summary><b><a href=" "> </a>What are <code>make</code>, Makefiles</b></summary>

A Makefile is a text file that describes how to build a software program. It contains a set of **rules** that tell the make utility how to compile and link source files, create executables, and run other tasks. Makefiles are typically used for C and C++ programs, but can also be used for other languages and tasks.

Makefiles are made up of a series of rules, each of which has two parts: a target and a list of prerequisites. The target is the file or task that the rule is responsible for creating. The prerequisites are the files or tasks that must be completed before the target can be created.

For example, the following rule tells make how to compile a C source file into an object file:

```
my_object_file.o : my_source_file.c
    gcc -c my_source_file.c
```

This rule says that the target `my_object_file.o` depends on the prerequisite `my_source_file.c`. If `my_source_file.c` is newer than `my_object_file.o`, then make will run the command `gcc -c my_source_file.c` to compile `my_source_file.c` into `my_object_file.o`.

Makefiles can also be used to define more complex tasks, such as linking object files into an executable file, running tests, and creating documentation. For example, the following rule tells make how to link two object files into an executable file:

```
my_executable : my_object_file_1.o my_object_file_2.o
    gcc -o my_executable my_object_file_1.o my_object_file_2.o
```

This rule says that the target `my_executable` depends on the prerequisites `my_object_file_1.o` and `my_object_file_2.o`. If either of the object files is newer than `my_executable`, then make will run the command `gcc -o my_executable my_object_file_1.o my_object_file_2.o` to link the object files into `my_executable`.


</details>

<details>
<summary><b><a href=" "> </a>When, why and how to use Makefiles</b></summary>

Makefiles are a powerful tool for automating the software build process. They can save developers a lot of time and effort, and they can help to ensure that programs are built correctly and consistently.

Here are some of the benefits of using Makefiles:

* **Automation:** Makefiles can automate the entire software build process, from compiling source files to linking executables to running tests. This can save developers a lot of time and effort, and it can help to ensure that programs are built correctly and consistently.
* **Reproducibility:** Makefiles can help to ensure that programs are built in a reproducible way. This means that the same Makefile can be used to build a program on different machines, and the results will be the same.
* **Flexibility:** Makefiles are very flexible and can be used to build a wide variety of software programs. They can also be used to automate other tasks, such as creating documentation or running tests.

Once you have created a Makefile, you can use the make utility to build your software program. To do this, simply run the following command in a terminal:
```
make
```
</details>

<details>
<summary><b><a href=" "> </a>What are rules and how to set and use them</b></summary>

**Rules** in a Makefile are instructions on how to build a particular target. A target can be a file, a directory, or a task. A rule has two parts: a target and a list of prerequisites. The prerequisites are the files or tasks that must be completed before the target can be created.

To set a rule, you use the following syntax:

```
target : prerequisites
    commands
```

The `target` is the file or task that the rule is responsible for creating. The `prerequisites` are the files or tasks that must be completed before the target can be created. The `commands` are the commands that make will run to create the target.

</details>

<details>
<summary><b><a href=" "> </a>What are explicit and implicit rules</b></summary>


</details>

<details>
<summary><b><a href=" "> </a>What are the most common / useful rules</b></summary>


</details>

<details>
<summary><b><a href=" "> </a>What are variables and how to set and use them</b></summary>


</details>

# Requirements
- Allowed editors: `vi`, `vim`, `emacs`
- OS: Ubuntu 20.04 LTS
- Version of `gcc`: 9.3.0
- Version of `make`: GNU Make 4.2.1
- All your files should end with a new line
- A `README.md` file, at the root of the folder of the project, is mandatory

# More Info
### Files
In the following tasks, we are going to use [these files](https://github.com/alx-tools/0x1B.c). We want to compile these only.

# Tasks
<details>
<summary>

### 0. make -f 0-Makefile
`mandatory`

File: [0-Makefile](https://github.com/codenvibes/alx-low_level_programming/blob/master/0x1C-makefiles/0-Makefile)
</summary>

Create your first Makefile.

Requirements:

- name of the executable: `school`
- rules: `all`
    - The `all` rule builds your executable
- variables: none
```
julien@ubuntu:~/0x1C. Makefiles$ make -f 0-Makefile 
gcc main.c school.c -o school
julien@ubuntu:~/0x1C. Makefiles$ ./school 
j#0000000000000000000000000000000000000
j#000000000000000000@Q**g00000000000000
j#0000000000000000*]++]4000000000000000
j#000000000000000k]++]++*N#000000000000
j#0000000000000*C+++]++]++]J*0000000000
j#00000000000@+]++qwwwp=]++++]*00000000
j#0000000000*+++]q#0000k+]+]++]4#000000
j#00000000*C+]+]w#0000*]+++]+]++0000000
j#0000we+]wW000***C++]++]+]++++40000000
j#000000000*C+]+]]+]++]++]++]+q#0000000
j#0000000*]+]+++++++]++]+++]+++J0000000
j#000000C++]=]+]+]+]++]++]+]+]+]=000000
j#00000k+]++]+++]+]++qwW0000000AgW00000
j#00000k++]++]+]+++qW#00000000000000000
j#00000A]++]++]++]++J**0000000000000000
j#000000e]++]+++]++]++]J000000000000000
j#0000000A]++]+]++]++]++000000000000000
j#000000000w]++]+]++]+qW#00000000000000
j#00000000000w]++++]*0##000000000000000
j#0000000000000Ag]+]++*0000000000000000
j#00000000000000000we]+]Q00000000000000
j#0000000000000@@+wgdA]+J00000000000000
j#0000000000000k?qwgdC=]4#0000000000000
j#00000000000000w]+]++qw#00000000000000
"!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
julien@ubuntu:~/0x1C. Makefiles$ 
```
</details>

<details>
<summary>

### 1. make -f 1-Makefile
`mandatory`

File: [1-Makefile](https://github.com/codenvibes/alx-low_level_programming/blob/master/0x1C-makefiles/1-Makefile)
</summary>

Requirements:

- name of the executable: `school`
- rules: `all`
    - The `all` rule builds your executable
- variables: `CC`, `SRC`
    - `CC`: the compiler to be used
    - `SRC`: the `.c` files
```
julien@ubuntu:~/0x1C. Makefiles$ make -f 1-Makefile
gcc main.c school.c -o school
julien@ubuntu:~/0x1C. Makefiles$ make -f 1-Makefile
gcc main.c school.c -o school
julien@ubuntu:~/0x1C. Makefiles$
```
</details>

<details>
<summary>

### 2. make -f 2-Makefile
`mandatory`

File: [2-Makefile](https://github.com/codenvibes/alx-low_level_programming/blob/master/0x1C-makefiles/2-Makefile)
</summary>

Create your first useful Makefile.

Requirements:

- name of the executable: `school`
- rules: `all`
    - The `all` rule builds your executable
- variables: `CC`, `SRC`, `OBJ`, `NAME`
    - `CC`: the compiler to be used
    - `SRC`: the `.c` files
    - `OBJ`: the `.o` files
    - `NAME`: the name of the executable
- The `all` rule should recompile only the updated source files
- You are not allowed to have a list of all the `.o` files
```
julien@ubuntu:~/0x1C. Makefiles$ make -f 2-Makefile
gcc    -c -o main.o main.c
gcc    -c -o school.o school.c
gcc main.o school.o -o school
julien@ubuntu:~/0x1C. Makefiles$ make -f 2-Makefile
gcc main.o school.o -o school
julien@ubuntu:~/0x1C. Makefiles$ echo "/* School */" >> main.c
julien@ubuntu:~/0x1C. Makefiles$ make -f 2-Makefile
gcc    -c -o main.o main.c
gcc main.o school.o -o school
julien@ubuntu:~/0x1C. Makefiles$ 
```
</details>

<details>
<summary>

### 3. make -f 3-Makefile
`mandatory`

File: [3-Makefile](https://github.com/codenvibes/alx-low_level_programming/blob/master/0x1C-makefiles/3-Makefile)
</summary>


</details>

<details>
<summary>

### 4. A complete Makefile
`mandatory`

File: [4-Makefile](https://github.com/codenvibes/alx-low_level_programming/blob/master/0x1C-makefiles/4-Makefile)
</summary>


</details>

<details>
<summary>

### 5. Island Perimeter
`mandatory`

File: [5-island_perimeter.py](https://github.com/codenvibes/alx-low_level_programming/blob/master/0x1C-makefiles/5-island_perimeter.py)
</summary>


</details>

<details>
<summary>

### 6. make -f 100-Makefile
`#advanced`

File: [100-Makefile](https://github.com/codenvibes/alx-low_level_programming/blob/master/0x1C-makefiles/100-Makefile)
</summary>


</details>
