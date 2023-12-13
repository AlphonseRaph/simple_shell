#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <stddef.h>
extern char **environ;
char *_getenv(const char *name);
int _setenv(const char *name, const char *value, int overwrite);
char *get_line(void);
int inbuilt(char **tokens);
int forks(char **tokens);
char *_getenv(const char *name);
int _setenv(const char *name, const char *value, int overwrite);
char *_strcat(char *dest, const char *src);
int _strcmp(const char *s1, const char *s2);
char *str_cpy(char *dest, const char *src);
int str_len(const char *s);
int _strncmp(const char *s1, const char *s2, size_t n);
int put_char(char c);
#endif
