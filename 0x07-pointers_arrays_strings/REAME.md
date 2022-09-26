#ifndef _MAIN_H
#define _MAIN_H

char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strpn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
int _putchar(char);
void printf_chessboard(char (*a)[8]);
void printf_diagsums(int *a, int size);
void set_string(char **s, char *to);

#endif
