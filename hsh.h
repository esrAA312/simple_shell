#ifndef HSH_H
#define HSH_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <sys/wait.h>

#define BUFFER_SIZE 1024
#define EXPECTED_DELIM " \t\r\n\a\\"

char *replaceVariables(char *input);
int _putchar(char c);
void _puts(char *str);
int _strlen(char *s);
int _strcmp(char *str1, char *str2);
char **str_tok(char str[BUFFER_SIZE], char separate);
void error_ex(char *arg_v);
char *it_oa(int num, char str[], int base);
void reverse(char str[], int length);
int _atoi(char *s);
void active(void);
void none_active(void);
int cd(char **arg);
int _strncmp(char *str1, char *str2, int n);
char *re(void);
char **split(char *line);
int exec(char **arg);
int proc(char **args);
char *get_line(void);
int env(char **arg);
extern char **environ;
int ex_it(char **exit_args);
#endif
