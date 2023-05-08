#ifndef MAIN_H
#define MAIN_H
#define BUFFER_SIZE 1024

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
int check_args(int argc);
int open_files(char *file_from, char *file_to);
int copy_file(int fd_from, int fd_to);
void close_files(int fd_from, int fd_to);

#endif
