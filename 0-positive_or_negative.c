#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	char *str = "";

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n < 0)
		str = "negative";
	else if (n > 0)
		str = "positive";
	else
		str = "zero";

	printf("%d is %s\n", n, str);

	return (0);
}
