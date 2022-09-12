#include<stdio.h>
#include<sdtlib.h>
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
for (i = 26; i > 1; i--)
{
putchar(i);
putchar('\n');
}
return (0);
}
