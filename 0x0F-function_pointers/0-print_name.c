#include "function_pointers.h"
/**
 * print_name - function pointer that prints name in uppercase and lowercase
 * @name: name to pass to function
 * @f: function that will print name
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
