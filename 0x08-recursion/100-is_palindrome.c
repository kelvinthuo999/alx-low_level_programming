#include "main.h"

/**
 * _strlen - Get the length of a string
 * @s: Pointer to a string
 *
 * Return: Length of the string
 */
int _strlen(char *s)
{
    if (*s == '\0')
    {
        return 0;
    }
    return 1 + _strlen(s + 1);
}

/**
 * is_palindrome_recursive - Check if a string is a palindrome recursively
 * @s: Pointer to a string
 * @start: Start index of the string
 * @end: End index of the string
 *
 * Return: 1 if the string is a palindrome, 0 otherwise
 */
int is_palindrome_recursive(char *s, int start, int end)
{
    if (start >= end)
    {
        return 1; /* Palindrome */
    }

    if (s[start] != s[end])
    {
        return 0; /* Not a palindrome */
    }

    return is_palindrome_recursive(s, start + 1, end - 1);
}

/**
 * is_palindrome - Check if a string is a palindrome
 * @s: Pointer to a string
 *
 * Return: 1 if the string is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
    int length = _strlen(s);
    return is_palindrome_recursive(s, 0, length - 1);
}

