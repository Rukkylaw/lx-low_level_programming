#include "main.h"
/**
 * print_last_digit-prints the last digit of an interger using main.h header file
 * int a - represents the int
 * Return:last digit.
 */
int print_last_digit(int a)
{
int last_digit;

last_digit = a %  10;
if (last_digit < 0)
{
last_digit = last_digit * -1;
}
_putchar(last_digit + '0');
return (last_digit);
}
