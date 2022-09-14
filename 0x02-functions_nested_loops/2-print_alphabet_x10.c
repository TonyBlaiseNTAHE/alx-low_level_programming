#include "main.h"
/**
 * main -printing 10 times alphabet.
 *
 * Return: 0
 */
int main(void)
{
char c;
int i;

for (i = 0; i < 9; i++)
{
for (c = 'a'; c <= 'z'; c++)
{
_putchar(c);
}
_putchar('\n');
}
return (0);
}
