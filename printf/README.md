# Printf Project

This is an ALX project "printf" where we make our own printf funtion "_prinf".

## Description
In c, printf is a function, that is used to do formatted printing. It is included in the stdio.h library in c.

_printf produces an output depending on the format specified. This format can be selected using the same format specifiers one would use in a normal printf function. The function writes its output to the stdout stream.

Some of the available format specifiers for _printf are:
+ %c: prints a single character
+ %s: prints a string of characters
+ %d: prints an integer
+ %i: prints an integer

## Usage
+ Code is compiled this way: `$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c`
+ Main.c test files will be in a different directory
+ Our code is compiled in ubuntu 22.04 LTS

## Example

```
sam ❯ sapnu-puas ❯ ../printf ❯ main ❯ cat main.c
#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
    int len;
    int len2;

    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    _printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);
    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
    return (0);
}
sam ❯ sapnu-puas ❯ ../printf ❯ main ❯  gcc -Wall -Wextra -Werror -pedantic -std=gnu89 -Wno-format *.c
sam ❯ sapnu-puas ❯ ../printf ❯ main ❯  ./printf
Let's try to printf a simple sentence.
Let's try to printf a simple sentence.
Length:[39, 39]
Length:[39, 39]
Negative:[-762534]
Negative:[-762534]
Character:[H]
Character:[H]
String:[I am a string !]
String:[I am a string !]
sam ❯ sapnu-puas ❯ ../printf ❯ main ❯ 
