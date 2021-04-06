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
------------ | -------------
README.md | README file
**Se completara al final los file que se agregaron.**


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
    total 88
    drwxrwxr-x  3 vagrant vagrant  4096 Apr 12 18:35 .
    drwxr-xr-x 10 vagrant vagrant  4096 Apr 12 18:35 ..
    drwxrwxr-x  8 vagrant vagrant  4096 Apr 12 18:35 .git
    -rw-rw-r--  1 vagrant vagrant     7 Apr  7 23:28 .gitignore~
    -rw-rw-r--  1 vagrant vagrant    28 Apr  7 23:07 README.md
    se agregran el resto al final...
```

----
## Builtin functions
Function | Description | Usage
------------ | ------------- | -------------
name funct | Show the environment variables |     To show the environment variables

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
