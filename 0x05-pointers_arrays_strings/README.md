## Introduction
This README file provides an overview of important concepts related to pointers, arrays, and strings in programming. It explains their definitions and key properties.

### Pointers
- A pointer is a variable that holds the memory address of another variable.
- A pointer that is not assigned any value is known as a NULL pointer.
- The ampersand (&) symbol is used to access the memory address of a variable.
- The dereference operator (*) is used to access the value stored at the address held by a pointer.

### Arrays
- An array is a collection of similar data types stored at contiguous memory locations.
- Each element in the array is of the same type and occupies equal memory space.
- You can access any element of an array using its index.
- Array indexing starts from zero.
- Once an array is declared, its size and type cannot be changed.

### Strings
- Strings are one-dimensional arrays of characters terminated by a null character ('\0').
- A string literal is a sequence of characters enclosed in double quotes.
- String literals cannot be assigned another set of characters.
- Adding "[^\n]" to the scanf function allows fetching space-separated strings.
- The string.h header file contains many functions for manipulating null-terminated strings.

## Tasks

[0-reset_to_98.c](./0-reset_to_98.c)
```
The main task is to update the value pointed to by a pointer to 98. This is achieved by first dereferencing the pointer. 
```
[1-swap.c](./1-swap.c)
```
- A new technique is used to swap values held two different variables.
- First, the value held in the first variable is updated by adding up both the values.
- Secondly, the value of the second variable is updated by deducting the original value of the second variable from the total sum
- of both values. This in essence updates the value of the second variable with the value of the first variable.
- Lastly, the value of the first variable is updated by deducting the new value of the second variable from the total sum of both values
which is currently held by the first variable.
```
[2-strlen.c](./2-strlen.c)
```
- The main task is to obtain the length of a string.
- This is achieved by declaring a new variable to stand in place of the index in the string array.
- A while loop is used to traverse the string until a null character is encountered while incrementing the index value.
- The last value of the index represents the lenght of the string.
```

[3-puts.c](./3-puts.c)
```
- First an index is declared to help traverse the string which is basically an array.
- A while loop is used to traverse the string while using the putchar function to print out every character encountered
until a null character is reached.
- A newline character is added to move the cursor to a new line.
```

[4-print_rev.c](./4-print_rev.c)
```
- Main task is to print a string in reverse.
- First, the length of the string is obtained.
- Secondly, a  while loop prints out every character to std output starting from the last character that is not the null character.
- Lastly, a newline character is added.
```

[5-rev_string.c](./5-rev_string.c)
```
- Main task is to reverse a string.
- The length of the string is determined.
- Another variable is declared to hold character as the are swapped from the first position
to the last.
- A newline character is added.
```

[6-puts2.c](./6-puts2.c)
```
- Main task is to print every other character of a string.
- A while loop is used to traverse the string while printing.
- An if statement is added to identify characters occupying the odd index in the string array.
- A newline character is added.
```

[7-puts_half.c](./7-puts_half.c)
```
- The main task is to print out the last half of a string.
- The length of the string is determined.
- An if statement is added to handle cases that strings have an odd number length.
- The length of the string is halved and the result is used as the starting index 
when using the while loop to traverse and print out the string.
```

[8-print_array.c](./8-print_array.c)
```
- Main task is to print every element of an array.
- A while loop is introduced to traverse the array while printing to the std output.
- A comma is added at every printout apart from the last iteration to space out the output.
- A newline character is added.
```

[9-strcpy.c](./9-strcpy.c)
```
- Main task is copy contents of one array to a new array.
- First, the length of the source array is determined.
- Secondly, a while loop is used to duplicate every element of the source array 
to the destination array.
- Finally, the destination array is returned to the calling function.
```
