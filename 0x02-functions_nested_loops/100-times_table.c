#include "main.h"

void print_times_table(int n)
{
if (n < 0 || n > 15)
{
return;
}
for (int i = 0; i <= n; i++)
{
for (int j = 0; j <= n; j++)
{
std::cout << i * j << "\t";
}
std::cout << std::endl;
}
}

