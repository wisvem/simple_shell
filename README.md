![](https://imgur.com/tBYOSbs.png)

### Description
simple_shell is a command line interpreter, or shell, in the tradition of the first Unix shell written by Ken Thompson in 1971. This shell is intentionally minimalistic, yet includes the basic functionality of a traditional Unix-like command line user interface.
Standard functions and system calls employed in simple_shell include:
   `access, execve, exit, fork, free, fstat, getline, malloc, perror, signal, stat, wait, write.`

### Environment
`simple_shell` has been tested on Ubuntu 14.04.6 and 18.04.3 LTS
Done and tested with VirtualBox on Ubuntu via Vagrant(2.2.10)

### Usage

`simple_shell` is designed to execute commands in similar fashion to `sh`, with some of its basic functionality. The development of this shell is ongoing. The below features will be checked as they become available (detailed usage information available on man page):


### Main Functionality
- [ ] uses the PATH
- [ ] implements builtins
- [ ] handles command line arguments
- [ ] custom strtok function
- [ ] uses exit status
- [ ] shell continues upon Crtl+C (**^C**)
- [ ] handles comments (#)
- [ ] handles **;**
- [ ] custom getline type function
- [ ] handles **&&** and **||**
- [ ] aliases
- [ ] variable replacement

### Builtins

- [ ] exit
- [ ] env
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
$ ls -al
```

## Authors
[Andres Lopez](https://github.com/andylopezr)-profesor.de.ingles@aol.com
[Wiston Venera](http://github.com/wisvem)-wisvem@hotmail.com
