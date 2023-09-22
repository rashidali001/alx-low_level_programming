#ifndef _MAIN_H
#define _MAIN_H


/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and error is set appropriately.
 */

int _putchar(char c);

/**
 * _isupper - Check for uppercase characters
 *
 * Return: 1 (Success) 0 (Otherwise)
 */

int _isupper(int c);

/**
 * _isdigit - Check for uppercase characters
 * @c: integer
 * Return: 1 (Success) 0 (Otherwise)
 */

int _isdigit(int c);

/**
 * mul - Entry point
 * @a: interger
 * @b: integer
 *
 * Return: a x b
 */
int mul(int a, int b);

/**
 * print_numbers - print 0 - 9
 *
 * Return: void
 */
void print_numbers(void);

/**
 * print_most_numbers - print 0 - 9 excluding 2 and 4
 *
 * Return: void
 */
void print_most_numbers(void);

/**
 * more_numbers - print 0 - 14
 *
 * Return: void
 */
void more_numbers(void);

/**
 * print_line - prints a line
 * @n: length
 *
 * Return: void
 */
void print_line(int n);

/**
 * print_diagonal - prints a line
 * @n: length
 *
 * Return: void
 */
void print_diagonal(int n);

/**
 * print_square - print a square pattern
 * @size: l
 * Return: void
 */
void print_square(int size);

/**
 * print_triangle - print a triangle pattern
 * @size: l
 * Return: void
 */
void print_triangle(int size);

/**
 * print_number - Print an integer number
 * @n: integer
 */
void print_number(int n);


#endif /* main.h */
