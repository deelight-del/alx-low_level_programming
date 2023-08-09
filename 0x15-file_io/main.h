#ifndef MAIN_H
#define MAIN_H

#define BUFFER_SIZE 1024
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
int close_file(int fides);
int main(int argc, char **argv);
int copy_file(int fd_from, int fd_to);
int write_file(char *filename);
int read_file(char *filename);

#endif
