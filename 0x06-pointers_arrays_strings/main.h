#ifndef PTRS_H
#define PTRS_H

#include <stdio.h>
char *_strcat(char *dest, char *str);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
void reverse_array(int *a, int n);
char *string_toupper(char *);
char *cap_string(char *);
char *leet(char *);
char *rot13(char *);
void print_number(int n);
int num_digit(int n);
int pwr(int, int);

#endif
