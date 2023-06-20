# NOTES
## C - Variables, if, else, while

- Variables are containers for storing values.
- if() and  else if() are used in C to make decision to determine which block of code is to be executed.
- A while loop is used to perform a certain task until the set conditions become false.

# TASKS
[0-positive_or_negative.c](./0-positive_or_negative.c)
```
- The end program at the end of this task determines if the value n provided during runtime is less than, 
  equal to, or greater than zero.
- The predefined part of the source code produces random and an if statement is used to make a decision.
- A simple pseudocode to complete the task:
BEGIN
    DECLARE n AS INTEGER

    SET n TO random number between -(RAND_MAX / 2) and RAND_MAX / 2

    IF n > 0 THEN
        PRINT n, "is positive"
    ELSE IF n == 0 THEN
        PRINT n, "is zero"
    ELSE
        PRINT n, "is negative"
    END IF

   RETURN 0
END
```
