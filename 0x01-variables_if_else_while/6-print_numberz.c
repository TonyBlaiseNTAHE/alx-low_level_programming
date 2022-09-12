#include<stdio.h>
#include<time.h>
#include<stdlib.h>

/**
 * main - prints all single digit numbers of base 10 starting from 0
 *
 * Return:Always 0 (Success)
 */
int main(void)
{
int n, i;

srand(time(0));
n = rand() - RAND_MAX / 2;
for (i = 0; i < 10; i++)
{
putchar(i);
}
putchar('\n');
return (0);
}
