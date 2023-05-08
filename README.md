# get_next_line
The aim of this project is to create a function whose repeated calls (e.g., using a loop) should read the text file pointed to by the file descriptor,
one line at a time, and return the read line.
The returned line should include the terminating '\n' character, except if the end of the file was reached (and it doesn't end with a '\n').
The only external functions allowed are read(), malloc() and free().
The function prototype should be 'char *get_next_line(int fd);', 'fd' being the file descriptor of the file to be read.
