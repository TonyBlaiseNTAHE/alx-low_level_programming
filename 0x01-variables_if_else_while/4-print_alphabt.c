#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Print alphablet expect q and e.
 *
 * Return:Always 0 (success)
 */
int main(void)
{
char alp[26] = "abcdefghijklmnopqrstuvwxyz";
int i;
for (i = 0; i < 26; i++)
{
if (i != 5 && i != 17)
{
putchar(alp[i]);
}
}
putchar('\n');
return (0);
}
