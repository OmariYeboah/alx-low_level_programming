#include<stdio.h>

/**
 * main - print the alphabet in lowercase and then in uppercase,
 * follwed by a new line
 * return: Always 0 (success)
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
