# NOTES

## Static libraries

- A library is a file containing several object files, that can be used as single entities
  in the linking phase of complitalion.
- Static libraries are object files only used during the compile time and are not used during runtime.
- Dynamic libraries(shared libraries) are used both during the compilation time and runtime.
- A dynamic loader loads the library into the program and attaches them to a copy of the program.
- 'ar'(archiver) is a tool to make static libraries.
- 'ar' is combined with flag:
	- 'c' to create a library if it does not exist.
	- 'r' to replace older object files with new ones.
- ranlib is used to index the library to speed up symbol-lookup.

# TASKS

[libmy.a](./libmy.a)
```

- Main task involved creating a static library and index the library.
- Steps taken to achieve the above task:
	1. Create source files with appropriate prototypes.
	2. Generate object code from the source files.
	3. Use the archiver to generate a static library.
	4. Index the library.
	5. Test the library using the main function provided.
```

[create_static_lib.sh](./create_static_lib.sh)
```
- This task involved creating an executable file to create library from all C source files
  under the present directory.
- Two simple steps were taken to complete the task:
	1. Create a script that include all commands to create a static library.
	2. Make the script executable.
``` 
