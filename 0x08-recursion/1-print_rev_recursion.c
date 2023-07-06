#include "main.h"

/**
 * _print_rev_recursion - prints string in reverse
 * @s: pointer to string
 * Return: string in reverse
 */
void _print_rev_recursion(char *s)
{
        if (s == '\0')
                return (0);
        _print_rev_recursion(--*s);
        _putchar(--s);
}
