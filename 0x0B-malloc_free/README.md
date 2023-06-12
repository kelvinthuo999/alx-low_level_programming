# NOTES
## Memory allocation

- Memory allocation refers to the process of reserving and managing memory space for variables and data structures.
- Two methods for memory allocation include:
	1. Automatic allocation
	2. Dynamic allocation

### Automatic Allocation

- Automatic allocation reserves memory during compile time.
- This process mainly manages memory for global variables, file scope variables, and other static variables.
- Automatic allocation makes use of stack section of the memory.
- In this type of allocation, one does not need to think about the process of handling memory spaces.
- Memory is only allocated at the start time of the program.

### Dynamic Allocation

- Dynamic allocation manages memory allocation during runtime.
- This type of allocation uses the heap section from the memory layout.
- Memory allocated dynamically has to be freed manually. Otherwise, the memory will remain in use
  and soon the program will run out of memory.
- stdlib header file contains prototypes of the functions used to handle memory dynamically.
- Function used in this type of allocation include:
	1. malloc()
	2. calloc()
	3. realloc()
	4. free()
- Dynamic allocation is preferred when handling linked lists.
- This process of allocation is slower than static allocation.
- Memory can be allocated at any moment when the program is running.

#### malloc()

- Allocates memory during runtime.
- This function initializes the memory with garbage values.
- malloc returns a pointer to the allocated memory.

#### calloc()

#### realloc()

#### free()

- Memory allocated dynamically has to be freed manually using free() function.
- free() function is used at the end of the program to avoid memory allocation.

# TASKS
