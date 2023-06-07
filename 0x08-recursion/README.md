# NOTES

## Recursion

- Recursion is the process a function calls itself directly or indirectly.
- Activation records of recursive functions are maintained in the stack memory.
- Process of writing a recursive function:
	1. Divide the problem into smaller subproblems.
	2. Write the base condition to stop the recursion.
- Base condition is stated using an if statement.
- The else statement states the recursive condition.
- Recursive functions are best useful in solving problems that might have many possible branches
  or too complex to use iterative approach.
- A good example to use recursion is when searching for a file in a file system.
- Trees and graphs are areas to use recursion.
- Other advantages of using recursion include:
	1. The code becomes shorter.
	2. The code reduces unnecessary calling of functions.
	3. Recursion helps to reduce the problems into smaller problems.
- One major downside of using recursion is the increased use of memory space. 
- In cases of limited storage space, it is advisable to avoid recursion.
- Other disadvantages of recursion include:
	1. Code becomes too complex to understand and analyze.
	2. Time and space complexity is increased.
	3. Recursion is generally slower than iteration.

# TASKS

[0-puts_recursion.c](./0-puts_recursion.c)
```
- puts_recursion is a function that prints a string, followed by a new line.
- A simple pseudocode to handle the task:
	1. Take INPUT as a pointer to a string.
	2. Set the BASE condition:
		- IF statement to check if the string only contains a NULL character.
	3. Set the recursive function:
		- ELSE statement to print the string recursively.
```
[1-print_rev_recursion.c](./1-print_rev_recursion.c)
```
- _print_rev_recursion is a recursive function to print a string in reverse.
- Below is the pseudocode used to implement the solution:
	1. Take a pointer the string as INPUT.
	2. Set the base condition:
		- IF statement make sure the string is not only made up of '\0'.
	3. Write the recursive function:
		- ELSE statement where the functions calls itself until it reaches the NULL character
		  and then starts printing the string from the end.
```
[2-strlen_recursion.c](./2-strlen_recursion.c)
```
- _strlen_recursion is a function to determine the length of a string.
- A simple pseudocode to implement the code:
	1. Take a pointer to a string as the INPUT.
	2. Set the base condition:
		- IF statement to RETURN 0 if the string is only the NULL character.
		- ELSE statement to call the function recursively until the NULL character is reached
		  while incrementing the value of the length with each function call.
``` 
