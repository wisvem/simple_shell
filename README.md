![](https://imgur.com/tBYOSbs.png)

### Description
simple_shell is a command line interpreter, or shell, in the tradition of the first Unix shell written by Ken Thompson in 1971. This shell is intentionally minimalistic, yet includes the basic functionality of a traditional Unix-like command line user interface.
Standard functions and system calls employed in simple_shell include:
   `access, execve, exit, fork, free, fstat, getline, malloc, perror, signal, stat, wait, write.`
![](https://i.imgur.com/BKnmbt0.png)

### Environment
`simple_shell` has been tested on Ubuntu 14.04.6 and 18.04.3 LTS
Done and tested with VirtualBox on Ubuntu via Vagrant(2.2.10)

### Usage

`simple_shell` is designed to execute commands in similar fashion to `sh`, with some of its basic functionality. The development of this shell is ongoing. The below features will be checked as they become available (detailed usage information available on man page):


### Main Functionality
- [X] uses the PATH
- [X] implements builtins
- [X] handles command line arguments
- [ ] custom strtok function
- [ ] uses exit status
- [X] shell continues upon Crtl+C (**^C**)
- [ ] handles comments (#)
- [ ] handles **;**
- [ ] custom getline type function
- [ ] handles **&&** and **||**
- [ ] aliases
- [ ] variable replacement

### Builtins

- [X] exit
- [X] env
- [ ] setenv
- [ ] unsetenv
- [ ] cd
- [ ] help
- [ ] history

### Usage

Run the executable file in terminal after compiling:
```
$ ./hsh
$ # Start of our custom `simple_shell`
$ ls -la
total 120
drwxrwxr-x  4 vagrant vagrant 4096 Nov 26 03:58 .
drwxr-xr-x 18 vagrant vagrant 4096 Nov 25 22:24 ..
-rw-rw-r--  1 vagrant vagrant 1013 Nov 25 06:22 add_list.c
-rw-rw-r--  1 vagrant vagrant  232 Nov 25 00:38 AUTHORS
-rw-rw-r--  1 vagrant vagrant 2307 Nov 26 03:21 awshell.h
-rw-rw-r--  1 vagrant vagrant 3199 Nov 26 03:21 builtins.c
-rw-rw-r--  1 vagrant vagrant 1448 Nov 26 03:21 exec.c
-rw-rw-r--  1 vagrant vagrant 1737 Nov 25 06:24 free_hlp.c
-rw-rw-r--  1 vagrant vagrant 1231 Nov 26 03:21 get_builtins.c
-rw-rw-r--  1 vagrant vagrant  944 Nov 25 06:20 get_env.c
drwxrwxr-x  8 vagrant vagrant 4096 Nov 26 03:25 .git
-rw-rw-r--  1 vagrant vagrant  907 Nov 25 06:16 itos.c
-rwxrwxr-x  1 vagrant vagrant 2168 Nov 25 00:38 man_1_simple_shell
-rw-rw-r--  1 vagrant vagrant  311 Nov 25 06:17 _memcpy.c
-rw-rw-r--  1 vagrant vagrant 1102 Nov 25 06:23 path_list.c
-rw-rw-r--  1 vagrant vagrant 2089 Nov 26 03:21 print_helpers.c
-rw-rw-r--  1 vagrant vagrant 1675 Nov 26 03:58 README.md
-rw-rw-r--  1 vagrant vagrant 1562 Nov 26 03:21 shell.c
-rw-rw-r--  1 vagrant vagrant  605 Nov 25 06:23 signal.c
-rw-rw-r--  1 vagrant vagrant 1068 Nov 26 03:21 split_str.c
-rw-rw-r--  1 vagrant vagrant  391 Nov 25 06:22 _strcat.c
-rw-rw-r--  1 vagrant vagrant  732 Nov 25 06:18 _strchr.c
-rw-rw-r--  1 vagrant vagrant  680 Nov 25 06:20 _strcmp.c
-rw-rw-r--  1 vagrant vagrant  393 Nov 26 03:21 _strcspn.c
-rw-rw-r--  1 vagrant vagrant  852 Nov 25 06:19 _strdup.c
-rw-rw-r--  1 vagrant vagrant  202 Nov 25 06:22 _strlen.c
-rw-rw-r--  1 vagrant vagrant  425 Nov 25 17:34 _strspn.c
-rw-rw-r--  1 vagrant vagrant 1390 Nov 26 03:21 _strtok.c
-rw-rw-r--  1 vagrant vagrant 1366 Nov 26 03:21 _which.c
```

## Authors
[Andres Lopez](https://github.com/andylopezr)-profesor.de.ingles@aol.com
[Wiston Venera](http://github.com/wisvem)-wisvem@hotmail.com
