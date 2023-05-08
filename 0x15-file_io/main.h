#ifndef MAIN_H
#define MAIN_H
#define BUFFER_SIZE 1024
#define ERR 98


#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <elf.h>

	
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

void close_files(int fd_from, int fd_to);
void copy_file(int fd_from, int fd_to, char **argv);
void open_files(char **argv, int *fd_from, int *fd_to);

#endif
