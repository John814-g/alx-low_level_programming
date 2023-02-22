#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from n to 98, separated by a comma
 *               and a space, followed by a new line
 *
 * @n: starting number
 */
void print_to_98(int n)
{
int i;

if (n <= 98)
{
for (i = n; i < 98; i++)
{
printf("%d, ", i);
}
}
else
{
for (i = n; i > 98; i--)
{
printf("%d, ", i);
}
}
printf("98\n");
}

