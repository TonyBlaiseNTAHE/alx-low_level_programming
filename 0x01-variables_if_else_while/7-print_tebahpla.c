#include<stdio.h>
#include<stdlib.h>
#include<time.h>

/**
 * main -prints the lowercase alphabet in reverse
 *
 * Return:Always 0 (Success)
 */
int main(void)
{
int i;	
char alp[26] = "abcdefghijklmnopqrtuvwxyz";
for (i = 26; i >= 0; i--)
{
putchar(alp[i]);
putchar('\n');
}
return (0);
}
