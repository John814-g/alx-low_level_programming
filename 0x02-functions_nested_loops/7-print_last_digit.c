#include <stdio.h>

/**
 * print_last_digit - Prints the last digit of a number
 *
 * @num: The number to find the last digit of
 *
 * Return: The value of the last digit
 */
int print_last_digit(int num)
{
    // Get the last digit of the number
    int last_digit = num % 10;
    // Print the last digit
    printf("The last digit of %d is %d\n", num, last_digit);
    // Return the last digit
    return last_digit;
}

/**
 * main - The entry point of the program
 *
 * Return: 0 if the program executes successfully
 */
int main(void)
{
    int num = 12345;
    int last_digit = print_last_digit(num);
    return 0;
}

