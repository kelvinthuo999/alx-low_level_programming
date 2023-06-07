#include "main.h"

/**
 * _sqrt_recursion - computes the square root of a number
 * @n: the number to compute the square root of
 * Return: the square root of n, or -1 if it does not have a natural square root
 */
int sqrt_helper(int n, int start, int end);
int _sqrt_recursion(int n)
{
    if (n < 0)
        return -1;

    return sqrt_helper(n, 0, n);
}

/**
 * sqrt_helper - helper function for computing the square root recursively
 * @n: the number to compute the square root of
 * @start: the starting point for the search
 * @end: the ending point for the search
 * Return: the square root of n, or -1 if it does not have a natural square root
 */
int sqrt_helper(int n, int start, int end)
{
    int mid = start + (end - start) / 2;
    int square = mid * mid;
    if (start > end)
        return -1;
    
    if (square == n)
        return mid;
    else if (square < n)
        return sqrt_helper(n, mid + 1, end);
    else
        return sqrt_helper(n, start, mid - 1);
}
