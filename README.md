# Get_next_line 📚

## Overview 🚀
This project, from the 42 school curriculum, challenges you to create a function that reads a text file line by line, returning each line including the terminating '\n' character (unless the end of the file is reached and it doesn't end with '\n'). The function prototype should be:

```c
char *get_next_line(int fd);
```
Where 'fd' is the file descriptor of the file you want to read.

## Project Constraints 📃
You are only allowed to use the following external functions:
- read(): To read data from the file descriptor.
- malloc(): To allocate memory for the read line.
- free(): To release memory when necessary.

## Usage 🖥️

To use this function in your own C programs, follow these steps:
- Include the "get_next_line.h" header file.
- Call get_next_line() with the file descriptor of the file you want to read.
- The function will return the next line from the file.
