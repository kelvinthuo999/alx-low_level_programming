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

 
