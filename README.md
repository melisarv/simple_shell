## **hsh** - simple Shell
----
!["Holberton Logo"](https://www.holbertonschool.com/holberton-logo-twitter-card.png)

## What is hsh(Simple shell)?
**hsh** is a simple UNIX command language interpreter that reads commands from either a file or standard input and executes them. written as part of the low-level programming at Holberton School.
 

See [Unix Shell](https://en.wikipedia.org/wiki/Unix_shell)

----
## Requirements
* All your files will be compiled on **Ubuntu 14.04 LTS**.
* Your C programs and functions will be compiled with **gcc 4.8.4** using the flags *-Wall -Werror -Wextra and -pedantic*.
* All your files should end with a new line.
* Your code should use the [Betty style](https://github.com/holbertonschool/Betty/wiki).
* No more than 5 functions per file.
* All your header files should be include guarded.
* Use system calls only when you need to.

----
## Files incluided in this repository
File |  Description
--------------------- | ------------------------------
README.md | README file
AUTHOR    | AUTHOR file
shell.c   | principal
shell.h	  | header
man_1_simple_shell.c  | man of the simple shell
lsh_red_line.c  |  read line
lsh_split_line.c  |  split the line into arguments
lsh_execute.c  | execute the arguments.
lsh_builtins.c  | builtns the shell
lsh_fbuiltins.c  | funtions the builtins
lsh_reallloc.c   | implementation function realloc
lsh_useful.c    |  implementation strcmp and strlen 


----
## Quick start

### Basic Installation
simple_shell is installed by running the following commands in your terminal.
```
    git clone https://github.com/melisarv/simple_shell.git
```
After that simple_shell can compile using
```
    gcc -Wall -Werror -Wextra -pedantic *.c -o hsh
```
To start, write the following:
```
    ./hsh
```
----
## Basic operation
When the shell reads the entry, it proceeds through a sequence of operations.
```
    ls -la
```
In general terms, the shell reads your entry and divides it into words and operators

ls | -la
------------ | -------------

The shell then analyzes these tokens in commands and other constructs, redirects the input and output as needed, executes the specified command, waits for the output state of the command, and makes that output status available. for further inspection or processing.

```
total 60
drwxrwxr-x  3 vagrant vagrant 4096 Apr 15 06:06 .
drwxr-xr-x 15 vagrant vagrant 4096 Apr 15 06:06 ..
-rw-rw-r--  1 vagrant vagrant  165 Apr  6 17:53 AUTHORS
drwxrwxr-x  8 vagrant vagrant 4096 Apr 15 05:18 .git
-rw-rw-r--  1 vagrant vagrant  562 Apr 15 05:18 lsh_builtins.c
-rw-rw-r--  1 vagrant vagrant  906 Apr 15 05:18 lsh_execute.c
-rw-rw-r--  1 vagrant vagrant 1410 Apr 15 05:18 lsh_fbuiltins.c
-rw-rw-r--  1 vagrant vagrant  279 Apr 15 05:18 lsh_read_line.c
-rw-rw-r--  1 vagrant vagrant 1103 Apr 15 05:18 lsh_realloc.c
-rw-rw-r--  1 vagrant vagrant  800 Apr 15 05:18 lsh_split_line.c
-rw-rw-r--  1 vagrant vagrant  613 Apr 15 05:18 lsh_useful.c
-rw-rw-r--  1 vagrant vagrant 1327 Apr 14 17:20 man_1_simple_shell
-rw-rw-r--  1 vagrant vagrant 2745 Apr  6 17:47 README.md
-rw-rw-r--  1 vagrant vagrant  668 Apr 15 05:18 shell.c
-rw-rw-r--  1 vagrant vagrant 1006 Apr 15 05:18 shell.h
```

----
## Builtin functions
Function | Description | Usage
------------ | ------------- | -------------
env | Show the environment variables |     To show the environment variables

----
## Examples
### Interactive Mode
```
    $ cat test_ls_2
    /bin/ls
    /bin/ls
```
### Non-Interactive Mode
```
    $ cat test_ls_2 | ./hsh
    hsh main.c shell.c test_ls_2
```
----
## Contributors
* [Manuel Condori](https://github.com/Manuel-condori)
* [Melisa Rojas](https://github.com/melisarv)
