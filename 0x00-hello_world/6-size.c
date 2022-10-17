#include <stdio.h>

/**
 * main - prints the size of various types on the computer it is compiled and run on.
 *
 * Return: Always 0
 */
int main(void)
{
char charType;
int intType;
long int longIntType;
long long int longLongIntType;
float floatType;

printf("Size of a char: %lu bytes\n", (unsigned long)sizeof(charType));
printf("Size of an int: %lu bytes\n", (unsigned long)sizeof(intType));
printf("Size of a long int: %lu bytes\n", (unsigned long)sizeof(longIntType));
printf("Size of a long long int: %lu bytes\n", (unsigned long)sizeof(longLongIntType));
printf("Size of a float: %lu bytes\n", (unsigned long)sizeof(floatType));

return (0);
}
