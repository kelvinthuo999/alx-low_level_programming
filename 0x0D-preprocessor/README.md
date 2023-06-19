# NOTES
## PREPROCESSOR

- Preprocessor is a program to process the code before compilation.
- The program performs three tasks:
	* handling directives
	* handling constants
	* handling macros
- #include gives directives to the preprocessor to grab text from the mentioned header file
  and place into the current file.
- The #include guard is a construct used to avoid problems of double inclusion.
- Constants are value that cannot be changed.
- Macros are small pieces of code that can be executed with a single command.
- All preprocessor directives begin with pound sign (#).
- Preprocessor directives can be placed anywhere in the code.
- Macros make the code more readable.
- Macros can be used as a function but this is not advisable.
- Comments are removed during the preprocessing of code.
- Every #if directive should end with #endif directive.
- Some popular preprocessor directives include:
	* #define: Substitutes a preprocessor macro.
	* #include: Inserts a particular header from another file.
	* #ifdef: Returns true if this macro is defined.
	* #ifndef: Returns true if this macro is undefined.
	* #error: Prints error message to stderr and halts the program.
- __FILE__ is a macro that expands to the name of the current input file.
- __LINE__ is a macro that expands to the current input number.

# TASKS
[0-object_like_macro.h](./0-object_like_macro.h)
```
- The main objective of this task was to create a header file to define a macro.
- Simple pseudocode is as follows:
	1. Create a header file.
	2. Add a include guard
	3. Define SIZE as a macro.
	4. End the file.
```
[1-pi.h](./1-pi.h)
```
- The aim of this task was to develop a header file that define PI as a macro.
- A similar pseudocode to the one used in task one can be used to handle this task.
```
[2-main.c](./2-main.c)
```
- Task 3 involved developing a file that contains a source code to print its own name.
- A simple pseudocode to handle the task above is as follows:
	1. Create a simple C file.
	2. Include a std library to help use printf function.
	3. Use __FILE__ macro to print the file name.
	4. Compile and test the code.
```
[3-function_like_macro.h](./3-function_like_macro.h)
```
- This task involved creating a macro to evaluate the absolute value of a number.
- Here are the steps to take to handle the above objective:
	1. Created the header file.
	2. Added include guard to avoid double inclusion.
	3. Developed a simple function to evaluate if the number is less than or greater than 0.
	4. If the value is less than 0, the macro evaluates the absolute value.
	5. If the value is greater than 0, the value remains the same.
```
[4-sum.h](./4-sum.h)
```
- This was a simple task to evaluate the sum of two values.
- Pseudocode to achieve the objective of the above task:
	1. Create a header file.
	2. Add include guard.
	3. Define a macro with a function to add the two numbers.
```
