0x15. C - File I/O
C
Syscall
 By: Julien Barbier
 Weight: 1
 Project will start Aug 22, 2022 6:00 AM, must end by Aug 23, 2022 6:00 AM
 was released at Aug 22, 2022 12:00 PM
 An auto review will be launched at the deadline

Learning Objectives
At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

General
Look for the right source of information online
How to create, open, close, read and write files
What are file descriptors
What are the 3 standard file descriptors, what are their purpose and what are their POSIX names
How to use the I/O system calls open, close, read and write
What are and how to use the flags O_RDONLY, O_WRONLY, O_RDWR
What are file permissions, and how to set them when creating a file with the open system call
What is a system call
What is the difference between a function and a system call

Tasks
0. Tread lightly, she is near
mandatory
Write a function that reads a text file and prints it to the POSIX standard output.

Prototype: ssize_t read_textfile(const char *filename, size_t letters);
where letters is the number of letters it should read and print
returns the actual number of letters it could read and print
if the file can not be opened or read, return 0
if filename is NULL return 0
if write fails or does not write the expected amount of bytes, return 0


