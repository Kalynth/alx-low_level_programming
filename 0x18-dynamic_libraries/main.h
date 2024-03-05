#ifndef _MAIN_H_
#define _MAIN_H_

#include<string.h>
#include<stdlib.h>
#include<string.h>
#include<stdio.h>
int _putchar(char c);
int _islower(int c);
int _isalpha(int c);
int _abs(int n);
int _isupper(int c);
int _isdigit(int n);
int _strlen(char *s);
void _puts(char *s);
char *_strcpy(char *dest, char *src);
int _atoi(char *s);
char *my_strcat(char *dest, char *src, int n);
char *my_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
char *_memset(char *s, char b, unsigned int n);
char *my_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *my_strstr(char *haystack, char *needle);

#endif /* _MAIN_H_ */
