# NOTES
## VARIADIC FUNCTIONS

- C language require functions to be declared using definite number of arguments of a specific type.
- Variadic function help overcome this challenge when there is an indifinite number of arguments 
  to be passed to a function.
- stdarg.h contains macros and prototypes used to declare variadic functions.
- Some of the macros used include:
	* va_list is used for argument pointer variables.
	* va_start is used to initialize the argument pointer variable ap to point to the first optional
	  argument of the current function.
	* va_arg returns the value of the next optional argument.
	* va_end ends the use of ap.
	* va_copy allows copying of objects of type va_list even if this is not an integral type.
- const keyword is used to declare a variable whose value cannot be changed throughout the program.
- A const keyword is place immediately before the pointer name to the make the pointer constant throughtout.
 
