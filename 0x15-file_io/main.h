#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <errno.h>

#define BUFF_SIZE	1024

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

/********* 3-cp.c ********/
void error_close(ssize_t fd);
void error_read_open(char *msg, char *filename);
void error_write_open(char *msg, char *filename, char *buff, ssize_t rd_fd);
void error_read_write(char *msg, char *filename, char *buff, ssize_t rd_fd,
		ssize_t wr_fd, char mode);

#endif /* for _MAIN_H_ */
