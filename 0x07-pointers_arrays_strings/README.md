# NOTES
## Pointers to pointers
- Also known as double pointers.
- Double pointers are declared using double asterisk.
- Double pointer stores address of another pointer.
- Two indirectional operators are used to dereference a double pointer.
- To declare a three level pointer, you use three asterisk to declare the variable
  and three dereference operator to the access the value stored at the lowest level of all pointers.
- Double pointers occupy 8 bytes of memory space.

## Multidimensional arrays

- Defined as an array of arrays.
- Size of multidimensional array can be calculated by mutliplying the size of all the dimensions.
- Index starts from 0, similar to one dimensional array.
- Elements of a 2D array are printed using two nested for loops.
- Elements of a 3D array are printed using three nested for loops. 

## Standard library
- String.h header file include standard functions for string manipulation like copy, search,
  append, compare, splitting and many more functions.
- Some of the most common functions and their uses include:
	1. strlen(): Calculates the length of a string
	2. strnlen(): Returns the size of the string provided that the size is lesser than maxlen
	3. strcpy(): Copies a string to another string
	4. strncpy(): Copies first n characters of a string to another string
	5. strcat(): Concatenates (joins) two strings
	6. strncat(): Concatenates (joins) the first n characters of a string to another string
	7. strcmp(): Compares two string
	8. strncmp(): Compares the first n characters of a string with another string
	9. strcmpi(): Compares two string ignoring the case
	10. strnicmp(): Compares the first n characters of a string with another string ignoring the case
	11. strlwr(): Converts string to lowercase
	12. strupr(): Converts string to uppercase
	13. strdup(): Duplicates a string
	14. strchr(): Finds out the first occurrence of the string within a string
	15. strrchr(): finds out the last occurrence of the string
	16. strstr(): Gives the first occurrence of the string in a given string
	17. strset(): Sets the entire string to the specified string
	18. strnset(): Sets the first n characters of the given string to the specified string
	19. strrev(): Reverses the specified string

# TASKS

[0-memset.c](./0-memset.c)
```
- Main task is to fill memory with constant byte.
- Simple psuedocode:
	- Declare a POINTER to iterate over the memory area.
	- Use a WHILE loop to iterate over the memory area 
	  while filling every area with byte b.
	- Return pointer to the memory area.

```
[1-memcpy.c](./1-memcpy.c)

```
- Main task is to copy memory area.
- Simple psuedocode:
	- Store the address of the destination area.
	- Use a WHILE loop to iterate over the src and dest while incrementing at each point.
	- Return pointer to the dest memory area.
```
[2-strchr.c](./2-strchr.c)
```
- The main task is to create a function to locate a string.
-
```
[3-strspn.c](./3-strspn.c)
```

- The main task is to get the length of a prefix substring.

```
[4-strpbrk.c](./4-strpbrk.c)
```

- The function created is supposed to search a string for any of a set of bytes.

```
[5-strstr.c](./5-strstr.c)
```

- The main task is to create a function that locates a substring.

```
[7-print_chessboard.c](./7-print_chessboard.c)
```
- Main task is to develop a function that prints the cheeseboard.

```
[8-print_diagsums.c](./8-print_diagsums.c)
```

- Here is a function that prints the sum of the two diagonals of a square matrix of integers.
- Below is the psuedocode:
                                                                    


```
