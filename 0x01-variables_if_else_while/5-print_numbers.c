#include<stdio.h>
#include<stdlib.h>
#include<time.h>

/**
 * main - Print 10 digits starting from 0
 *
 * Return:Always 0 (Success)
 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
for (i = 0; i < 10; i++)
{
printf("%d", i);
}
return (0);
}

