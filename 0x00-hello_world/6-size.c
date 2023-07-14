#include<stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a;
	int q;
	long int c;
	long long int e;
	float g;
printf("size of a char: %lu byte(s)\n", (unsigned long)sizeof(a));
printf("size of an int: %lu byte(s)\n", (unsigned long)sizeof(q));
printf("size of a long int %lu byte(s)\n", (unsigned long)sizeof(c));
printf("size of a long long int %lu byte(s)\n", (unsigned long)sizeof(e));
printf("size of a float: %lu byte(s)\n", (unsigned long)sizeof(g));
return (0);
}
