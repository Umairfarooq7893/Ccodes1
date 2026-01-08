// TOKENS
// The smallest units , of code that complier can understand , in order to compile.

/* Keywords
o Reserved words in C that have special meanings and cannot be used as identifiers.
  (e.g., int, return, if, while,char,case,break,switch,union,sizeof,signed,typedef)
o Keywords define the syntax and structure of the language.

*/

/* Identifiers
o Names given to an entity such as constants, variables,
  structures, functions, etc.
=> Identifier names are unique.
=> Cannot use a keyword as identifier.
=> Identifies has to begin with a letter or underscore(_).
=> It should not contain white space.
(In programming, white space refers to any non-printable character that is used to separate tokens
(words, symbols, numbers, etc.) and improve readability in code).
=> Special characters are not allowed.
=> Identifiers can consists of only letters, digits, or underscore
=> Only 31 characters are significant.
*/

/* Constants 
o Are like normal variable, but the difference is: the values can not be modified by
  the program once they are defined.
=> Constants refer to fixed values. They are also called as literals
=> Constants may be belonging to any of the data type
 ✔ Integer
 ✔ Real or Floating point constant
 ✔ Octal & Hexadecimal constants
 ✔ Character constants
 ✔ String constants
 ✔ Backslash character constants 
*/

/*Operators
o Symbols that perform operations on variables and values, like arithmetic (+, -, *, /),
  relational (<, >, ==),
  logical (&&, ||),
  assignment operators (=),
  Conditional operator/ternary (?:),
  address (&),pointer to variable(*),
  structure membership (.),
  sizeof()
o Operators are used to manipulate data and variables within expressions.
*/

/* Special Symbols (Punctuation)
o Symbols that have special syntactical meaning in C,
;  = (statement terminator)
,  = (separator)
{} = (block delimiters)
() = (function call)
[] = (array subscript)
o These symbols help structure the code and define boundaries. */

#include <stdio.h>    // #include and <> are special symbols

int main() {          // 'int' = keyword, 'main' = identifier, '()' = special symbols
    int a = 10;       // 'int' = keyword, 'a' = identifier, '=' = operator, '10' = constant, ';' = special symbol
    int b = 20;       // 'int' keyword, 'b' identifier, '=' operator, '20' constant

    int sum = a + b;  // 'sum' identifier, '=' and '+' operators

    // printf is a function name (identifier)
    printf("Sum = %d\n", sum);  // "Sum = %d\n" is a string literal

    return 0;         // 'return' keyword, '0' constant, ';' special symbol
}
