# **0x18. C - DYNAMIC LIBRARIES**
`C`

# Resources
- [What is difference between Dynamic and Static library (Static and Dynamic linking)](https://www.youtube.com/watch?v=eW5he5uFBNM)
- [create dynamic libraries on Linux](https://www.google.com/#q=linux+create+dynamic+library)

<!-- man or help:
- `` -->

# Learning Objectives
<details>
<summary><h3>What is a dynamic library, how does it work, how to create one, and how to use it</h3></summary>

A dynamic library, also known as a shared library, is a collection of code and data that can be used by multiple programs simultaneously. It contains functions, classes, and other code that can be linked to a program at runtime, rather than being compiled directly into the program's executable file. This allows for code reuse, efficient memory usage, and easier updates to the shared functionality without recompiling every program that uses it.

Here's how a dynamic library works:

1. **Compilation**: The code that you want to include in the dynamic library is compiled and linked into a separate file with a `.so` extension (on Linux/Unix) or a `.dll` extension (on Windows). This generates a dynamic library file that contains the compiled machine code.

2. **Linking**: When you compile your program that uses the dynamic library, the compiler only includes references to the functions and symbols from the library, not the actual code itself. The program's executable file contains placeholders for these references.

3. **Loading**: When the program is run, the operating system loader (such as the dynamic linker on Unix-like systems) locates and loads the dynamic library into memory. This is often done using the `dlopen()` function on Unix-like systems.

4. **Symbol Resolution**: The operating system resolves the references in the program's executable to the actual code addresses in the loaded dynamic library. This allows the program to access the functions and data from the library.

5. **Execution**: The program can now use the functions and data from the dynamic library as if they were part of the program's code. The dynamic library remains loaded in memory as long as there are programs using it.

To create and use a dynamic library in C:

**Creating a Dynamic Library:**

1. Write the code you want to include in the dynamic library.
2. Compile the code into a dynamic library using appropriate compiler flags. On Linux/Unix, this can be done using `gcc -shared -o libexample.so example.c`.

**Using a Dynamic Library:**

1. Write the code for your main program.
2. Compile the main program, including references to the functions from the dynamic library, using appropriate compiler flags. On Linux/Unix, this can be done using `gcc -o main main.c -L. -lexample`.

Here, `-L.` specifies that the compiler should look for libraries in the current directory, and `-lexample` tells it to link against `libexample.so` (or `libexample.dll` on Windows).

3. When you run the main program, the dynamic library will be loaded automatically, and your program will be able to use the functions from the library.

Remember that the specific steps and commands can vary based on your development environment and operating system. It's also important to manage things like versioning and dependencies properly when working with dynamic libraries.
</details>

<details>
<summary><h3>What is the environment variable <code>$LD_LIBRARY_PATH</code> and how to use it</h3></summary>

The `$LD_LIBRARY_PATH` environment variable is a variable used in Unix-like operating systems (such as Linux) to specify directories where the system should look for shared libraries before searching the default system paths. Shared libraries (dynamic libraries) are files containing compiled code that can be loaded and used by programs at runtime. By setting the `$LD_LIBRARY_PATH`, you can control where the system searches for these libraries when executing programs.

Here's how to use the `$LD_LIBRARY_PATH` environment variable:

1. **Setting the Environment Variable:**

   To set the `$LD_LIBRARY_PATH` environment variable, you can use the terminal. Open a terminal and use the following command:

   ```bash
   export LD_LIBRARY_PATH=/path/to/your/library/directory:$LD_LIBRARY_PATH
   ```

   Replace `/path/to/your/library/directory` with the actual path to the directory containing your shared library files. The `$LD_LIBRARY_PATH` variable can contain multiple paths separated by colons (`:`). The use of `$LD_LIBRARY_PATH` is temporary and affects the current shell session only.

2. **Using the Environment Variable:**

   After setting the `$LD_LIBRARY_PATH` variable, any program you run from the same terminal session will first search for shared libraries in the paths specified in this variable before looking in the system's default library paths.

   For example, if you have a program named `my_program` that uses a shared library named `libexample.so`, and you've set the `$LD_LIBRARY_PATH` to include the directory containing `libexample.so`, running `my_program` will use the shared library from the specified path.

3. **Using in Compilation:**

   When compiling a program that uses a dynamic library, you can also provide the library search path using the `-L` flag followed by the path. This can be helpful when you don't want to modify the `$LD_LIBRARY_PATH` globally. For example:

   ```bash
   gcc -o my_program my_program.c -L/path/to/library/directory -lexample
   ```

   This tells the compiler to look for libraries in the specified directory and link against the library named `libexample.so`.

Remember that setting `$LD_LIBRARY_PATH` globally for all programs is not always recommended, as it can potentially lead to conflicts and compatibility issues between different programs. It's generally better to use this variable selectively when needed, or use the `-L` flag during compilation.

Additionally, there are some security considerations when using `$LD_LIBRARY_PATH`, as it can potentially be exploited by malicious users. Therefore, it's important to be cautious when modifying this variable and only use it in controlled environments.
</details>

<details>
<summary><h3>What are the differences between static and shared libraries</h3></summary>

Static and shared libraries are two different ways of packaging and distributing code that can be used by programs. They have distinct advantages and disadvantages, and understanding their differences is important when deciding which approach to use.

**Static Libraries:**

1. **Compilation and Size:**
   - Static libraries are compiled into the final executable at compile time. This means that the code from the static library is copied into the executable itself.
   - This can result in larger executable files because each program using the library includes its own copy of the library's code.

2. **Independence:**
   - The static library becomes an integral part of the executable. It doesn't rely on external files or dependencies when the program runs.
   - This can lead to easier distribution of a single executable without worrying about sharing external library files.

3. **Isolation:**
   - Since each program has its own copy of the library's code, changes to the library won't affect already compiled programs.
   - This can be useful for ensuring stability in complex software ecosystems.

4. **Ease of Deployment:**
   - Distributing a program with a static library requires providing a single executable file without any external dependencies.
   - However, if multiple programs use the same static library, there's duplication of code across all these programs, leading to larger overall file sizes.

**Shared Libraries (Dynamic Libraries):**

1. **Compilation and Size:**
   - Shared libraries are compiled separately and remain as standalone files (e.g., `.so` on Linux/Unix, `.dll` on Windows).
   - Programs that use shared libraries reference these external files without including the library code within the executable.
   - This results in smaller executable files since they don't contain the library code.

2. **Independence:**
   - Shared libraries are external to the executable. Programs using shared libraries require the library files to be present on the system where they're run.
   - This can lead to version compatibility concerns and dependency management.

3. **Efficiency:**
   - Since multiple programs can share a single copy of a shared library, there's a potential for better memory usage. The library code is loaded into memory only once.

4. **Updates and Maintenance:**
   - Updates to shared libraries are reflected in all programs using the library, avoiding the need to recompile every program that uses it.
   - This can simplify maintenance and bug fixes, but it also requires careful versioning to avoid breaking existing programs.

5. **Flexibility:**
   - Shared libraries can be updated independently, making it easier to provide bug fixes or add new features to shared functionality.

In summary, static libraries offer simplicity and independence but can result in larger executable sizes and code duplication. Shared libraries provide efficiency and easier maintenance, but they require careful version management and can introduce external dependency concerns. The choice between static and shared libraries depends on factors like code reusability, distribution needs, efficiency, and version management strategies.
</details>

<details>
<summary><h3>Basic usage <code>nm</code>, <code>ldd</code>, <code>ldconfig</code></h3></summary>

`nm`, `ldd`, and `ldconfig` are command-line tools commonly used on Unix-like operating systems to inspect and manage dynamic libraries. They provide various ways to analyze, list, and configure libraries on your system. Here's a brief overview of each tool's basic usage:

1. **`nm` - Symbol Table Display Utility:**
   `nm` is used to display the symbols (functions, variables, etc.) contained in an object file or an executable. It's particularly useful for examining the symbols within dynamic libraries.

   Usage example:
   ```bash
   nm -D libexample.so
   ```
   This command lists the symbols in the `libexample.so` shared library, showing whether they are defined, undefined, or dynamic.

2. **`ldd` - List Dynamic Dependencies:**
   `ldd` is used to show the shared libraries that an executable or a shared library depends on. It's helpful to identify the runtime dependencies of a program.

   Usage example:
   ```bash
   ldd ./my_program
   ```
   This command lists the shared libraries required by `my_program` and also shows their absolute paths. If a library is not found, it will be indicated as "not found" or "not a dynamic executable."

3. **`ldconfig` - Dynamic Linker Run-Time Cache Configuration:**
   `ldconfig` updates the runtime linker cache, which is a system-wide database used by the dynamic linker to locate shared libraries. It's used after installing new shared libraries or updating the library cache.

   Usage examples:
   - To refresh the cache after adding new libraries:
     ```bash
     sudo ldconfig
     ```
   - To specify additional library paths to be included in the cache:
     ```bash
     echo "/path/to/your/library" | sudo tee /etc/ld.so.conf.d/my_library.conf
     sudo ldconfig
     ```
     This will add `/path/to/your/library` to the list of paths the dynamic linker searches.

Remember to replace placeholders like `libexample.so`, `./my_program`, and `/path/to/your/library` with the actual paths and filenames relevant to your use case.

These tools are particularly useful when dealing with shared libraries, diagnosing dependency issues, and ensuring that your programs can locate the required libraries at runtime.
</details>

# Requirements
<details><summary><h3>C</h3></summary>

- Allowed editors: `vi`, `vim`, `emacs`
- All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
- All your files should end with a new line
- A `README.md` file, at the root of the folder of the project is mandatory
- Your code should use the `Betty` style. It will be checked using [betty-style.pl](https://github.com/alx-tools/Betty/blob/master/betty-style.pl) and [betty-doc.pl](https://github.com/alx-tools/Betty/blob/master/betty-doc.pl)
- You are not allowed to use global variables
- No more than 5 functions per file
- You are not allowed to use the standard library. Any use of functions like `printf`, `puts`, etc… is forbidden
- You are allowed to use [_putchar](https://github.com/alx-tools/_putchar.c/blob/master/_putchar.c)
- You don’t have to push `_putchar.c`, we will use our file. If you do it won’t be taken into account
- In the following examples, the `main.c` files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own `main.c` files at compilation. Our `main.c` files might be different from the one shown in the examples
- The prototypes of all your functions and the prototype of the function `_putchar` should be included in your header file called `main.h`
- Don’t forget to push your header file
</details>

<details><summary><h3>Bash</h3></summary>

- Allowed editors: `vi`, `vim`, `emacs`
- All your scripts will be tested on Ubuntu 20.04 LTS
- All your files should end with a new line ([why?](https://unix.stackexchange.com/questions/18743/whats-the-point-in-adding-a-new-line-to-the-end-of-a-file/18789))
- The first line of all your files should be exactly `#!/bin/bash`
- A `README.md` file, at the root of the folder of the project, describing what each script is doing
- All your files must be executable
</details>

<!-- # More Info -->

# Tasks
<details>
<summary>

### 0. A library is not a luxury but one of the necessities of life
`mandatory`

File: [libdynamic.so](), [main.h]()
> `gcc -Wall -pedantic -Werror -Wextra -L. 0-main.c -ldynamic -o len` : <br>
   > - `-L.`: This flag specifies a directory where the linker should look for libraries. In this case, the dot (`.`) represents the current directory. So, `-L.` tells the linker to look for libraries in the current directory.<br>
   > - `-ldynamic`: This flag tells the linker to link against a library named `libdynamic.so.` The `-l` flag is used to specify a library name without the "lib" prefix and the ".so" extension.<br>
   > - So, the overall command is telling the compiler to compile `0-main.c`, link it against the `libdynamic.so` library (assuming it's in the current directory), and produce an executable named `len`.
</summary>

Create the dynamic library libdynamic.so containing all the functions listed below:
```c
int _putchar(char c);
int _islower(int c);
int _isalpha(int c);
int _abs(int n);
int _isupper(int c);
int _isdigit(int c);
int _strlen(char *s);
void _puts(char *s);
char *_strcpy(char *dest, char *src);
int _atoi(char *s);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
```
If you haven’t coded all of the above functions create empty ones, with the right prototype.
Don’t forget to push your `main.h` file in your repository, containing at least all the prototypes of the above functions.
```bash
julien@ubuntu:~/0x18. Dynamic libraries$ ls -la lib*
-rwxrwxr-x 1 julien julien 13632 Jan  7 06:25 libdynamic.so
julien@ubuntu:~/0x18. Dynamic libraries$ nm -D libdynamic.so 
0000000000000a90 T _abs
0000000000000aa9 T _atoi
0000000000202048 B __bss_start
                 w __cxa_finalize
0000000000202048 D _edata
0000000000202050 B _end
00000000000011f8 T _fini
                 w __gmon_start__
0000000000000900 T _init
0000000000000bd7 T _isalpha
0000000000000c04 T _isdigit
0000000000000c25 T _islower
0000000000000c46 T _isupper
                 w _ITM_deregisterTMCloneTable
                 w _ITM_registerTMCloneTable
                 w _Jv_RegisterClasses
0000000000000c67 T _memcpy
0000000000000caa T _memset
0000000000000ce9 T _putchar
0000000000000d0e T _puts
0000000000000d4a T _strcat
0000000000000dcf T _strchr
0000000000000e21 T _strcmp
0000000000000e89 T _strcpy
0000000000000eeb T _strlen
0000000000000f15 T _strncat
0000000000000fa5 T _strncpy
0000000000001029 T _strpbrk
000000000000109d T _strspn
0000000000001176 T _strstr
                 U write
julien@ubuntu:~/0x18. Dynamic libraries$ cat 0-main.c
#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    printf("%d\n", _strlen("My Dyn Lib"));
    return (EXIT_SUCCESS);
}
julien@ubuntu:~/0x18. Dynamic libraries$ gcc -Wall -pedantic -Werror -Wextra -L. 0-main.c -ldynamic -o len
julien@ubuntu:~/0x18. Dynamic libraries$ ldd len 
    linux-vdso.so.1 =>  (0x00007fff5d1d2000)
    libdynamic.so => not found
    libc.so.6 => /lib/x86_64-linux-gnu/libc.so.6 (0x00007f74c6bb9000)
    /lib64/ld-linux-x86-64.so.2 (0x0000556be5b82000)
julien@ubuntu:~/0x18. Dynamic libraries$ export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
julien@ubuntu:~/0x18. Dynamic libraries$ ldd len
    linux-vdso.so.1 =>  (0x00007fff41ae9000)
    libdynamic.so => ./libdynamic.so (0x00007fd4bf2d9000)
    libc.so.6 => /lib/x86_64-linux-gnu/libc.so.6 (0x00007fd4beef6000)
    /lib64/ld-linux-x86-64.so.2 (0x0000557566402000)
julien@ubuntu:~/0x18. Dynamic libraries$ ./len 
10
julien@ubuntu:~/0x18. Dynamic libraries$ 
```
</details>

<details>
<summary>

### 1. Without libraries what have we? We have no past and no future
`mandatory`

File: [1-create_dynamic_lib.sh]()
</summary>

Create a script that creates a dynamic library called `liball.so` from all the `.c` files that are in the current directory.
```bash
julien@ubuntu:~/0x18. Dynamic libraries$ ls *.c
abs.c   isalpha.c  islower.c  memcpy.c  putchar.c  strcat.c  strcmp.c  strlen.c   strncpy.c  strspn.c
atoi.c  isdigit.c  isupper.c  memset.c  puts.c     strchr.c  strcpy.c  strncat.c  strpbrk.c  strstr.c
julien@ubuntu:~/0x18. Dynamic libraries$ ./1-create_dynamic_lib.sh 
julien@ubuntu:~/0x18. Dynamic libraries$ nm -D --defined-only liball.so 
0000000000000a90 T _abs
0000000000000aa9 T _atoi
0000000000202048 B __bss_start
0000000000202048 D _edata
0000000000202050 B _end
00000000000011f8 T _fini
0000000000000900 T _init
0000000000000bd7 T _isalpha
0000000000000c04 T _isdigit
0000000000000c25 T _islower
0000000000000c46 T _isupper
0000000000000c67 T _memcpy
0000000000000caa T _memset
0000000000000ce9 T _putchar
0000000000000d0e T _puts
0000000000000d4a T _strcat
0000000000000dcf T _strchr
0000000000000e21 T _strcmp
0000000000000e89 T _strcpy
0000000000000eeb T _strlen
0000000000000f15 T _strncat
0000000000000fa5 T _strncpy
0000000000001029 T _strpbrk
000000000000109d T _strspn
0000000000001176 T _strstr
julien@ubuntu:~/0x18. Dynamic libraries$ 
```
</details>

<details>
<summary>

### 2. Let's call C functions from Python
`#advanced`

File: [100-operations.so]()
</summary>

I know, you’re missing C when coding in Python. So let’s fix that!

Create a dynamic library that contains C functions that can be called from Python. See example for more detail.
```bash
julien@ubuntu:~/0x18$ cat 100-tests.py
import random
import ctypes

cops = ctypes.CDLL('./100-operations.so')
a = random.randint(-111, 111)
b = random.randint(-111, 111)
print("{} + {} = {}".format(a, b, cops.add(a, b)))
print("{} - {} = {}".format(a, b, cops.sub(a, b)))
print("{} x {} = {}".format(a, b, cops.mul(a, b)))
print("{} / {} = {}".format(a, b, cops.div(a, b)))
print("{} % {} = {}".format(a, b, cops.mod(a, b)))
julien@ubuntu:~/0x16. Doubly linked lists$ python3 100-tests.py 
66 + -76 = -10
66 - -76 = 142
66 x -76 = -5016
66 / -76 = 0
66 % -76 = 66
julien@ubuntu:~/0x18$ python3 100-tests.py 
-34 + -57 = -91
-34 - -57 = 23
-34 x -57 = 1938
-34 / -57 = 0
-34 % -57 = -34
julien@ubuntu:~/0x18$ python3 100-tests.py 
-5 + -72 = -77
-5 - -72 = 67
-5 x -72 = 360
-5 / -72 = 0
-5 % -72 = -5
julien@ubuntu:~/0x18$ python3 100-tests.py 
39 + -62 = -23
39 - -62 = 101
39 x -62 = -2418
39 / -62 = 0
39 % -62 = 39
julien@ubuntu:~/0x18$ 
```
</details>

<details>
<summary>

### 3. Code injection: Win the Giga Millions!
`#advanced`

File: [101-make_me_win.sh]()
</summary>

I bought a ticket for the Giga Millions and chose these numbers: 9, 8, 10, 24, 75 + 9. If you could run two commands on the same server where the Giga Millions program runs, could you make me win the Jackpot?

- Our mole got us a copy of the program, you can download it [here](https://github.com/alx-tools/0x18.c). Our mole also gave us a piece of documentation:
```
/* Giga Millions program                                                                                    
  * Players may pick six numbers from two separate pools of numbers:                                                
  * - five different numbers from 1 to 75 and                                                                       
  * - one number from 1 to 15                                                                                       
  * You win the jackpot by matching all six winning numbers in a drawing.                                           
  * Your chances to win the jackpot is 1 in 258,890,850                                                             
  *                                                                                                                 
  * usage: ./gm n1 n2 n3 n4 n5 bonus
```
- You can’t modify the program `gm` itself as Master Sysadmin Sylvain (MSS) always checks its [MD5](https://github.com/alx-tools/0x18.c/blob/master/101-md5_gm) before running it
- The system is an `Linux Ubuntu 16.04`
- The server has internet access
- Our mole will be only able to run two commands from a shell script, without being detected by MSS
- Your shell script should be maximum 3 lines long. You are not allowed to use `;`, `&&`, `||`, `|`, ` (it would be detected by MSS), and have a maximum of two commands
- Our mole has only the authorization to upload one file on the server. It will be your shell script
- Our mole will run your shell script this way: `mss@gm_server$ . ./101-make_me_win.sh`
- Our mole will run your shell script from the same directory containing the program `gm`, exactly 98 seconds before MSS runs `gm` with my numbers: `./gm 9 8 10 24 75 9`
- MSS will use the same terminal and session than our mole
- Before running the `gm` program, MSS always check the content of the directory
- MSS always exit after running the program `gm`
- TL;DR; This is what is going to happen
```bash
mss@gm_server$ . ./101-make_me_win.sh
mss@gm_server$ rm 101-make_me_win.sh
mss@gm_server$ ls -la
. .. gm
mss@gm_server$ history -c
mss@gm_server$ clear
mss@gm_server$ ls -la
. .. gm
mss@gm_server$ md5sum gm
d52e6c18e0723f5b025a75dea19ef365  gm
mss@gm_server$ ./gm 9 8 10 24 75 9
--> Please make me win!
mss@gm_server$ exit
```
Tip: `LD_PRELOAD`
</details>

