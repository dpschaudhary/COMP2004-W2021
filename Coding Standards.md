# This is a DRAFT document.  More changes coming.

# Coding Standards

The standards here will be used in the rubrics for assignment submissions.  The rubric will be the final authority, not this document.

There are many coding standards, not just for C, but for most languages.  If your only exposure to languages is python, it can be said that most python follows PEP8 or it's replacement, and thus looks similar.

The rationale behind coding standards, is to make the code easier to read by all programmers following the standard.  For that reason, code must be formatted using the following sets of guidelines.

## Organisation and Structure

1. Documentation
   
   ```c
   /** <filename.c>
   * Submitted by:
   * Student #:
   *
   * This code is ... <solution to|performs|can be|etc.>
   *
   */
   ```

2. Include Statements
   
   ```c
   #include <stdio.h>
   #include <stdlib.h>
   #include <unistd.h>
   #include 'localfile.h'
   ```

3. Global Variables
   
   ```c
   int sum;
   float average;
   <type> <variable name>;
   ```

4. Function Prototypes
   
   ```c
   int calculate_average(int *numberlist, int number_values);
   int print_values(void);
   ```

5. Main function
   
   ```c
   int main(int argc, char *argv[]) {
     /* Body of main function (starts with declarations) */
   }
   ```

6. Function Bodies
   
   ```c
   int calculate_average(int *numberlist, int number_values) {
     /* Body of function */
     /* return statement */
   ```

## Formatting

Formatting should follow K&R style, sometimes called "one true brace style" or other names.  Of primary concern is that formatting be consistent, with consistent indenting for code in the same block.  Use of the format command in Visual Studio Code is highly recommended.  If you have access to 'clang-format', I would recommend setting it up in VS Code as the formatter.

##### Note in the following code example:

- Return type is on the same line as function name.

- Arguments are on the same line as function name

- Opening brace is on the same line as function name

- Closing brace is at the same level as return type for function
  
  ```c
  int main(int argc, char *argv[]) {
    /* Body of main function (starts with declarations) */
  }
  ```

##### Note in the following code example:

- Operators have spaces. For example:  ` = ` or ` + `

- if statement has an opening brace even for one statement

```c
int value = 3;
  value = value + 5;
  if (value == 8) {
    printf("Yay\n");
  } else {
    printf("Boo\n");
  }
```
