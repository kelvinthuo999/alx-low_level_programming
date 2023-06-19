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
 
