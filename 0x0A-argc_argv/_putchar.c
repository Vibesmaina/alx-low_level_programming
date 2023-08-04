<<<<<<< HEAD
#include <stdio.h>
#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c:Ther character to print
 *
 * Return: On success 1.
 * On error, -1 is returned and errno is set appropriately.
 */
int _putchar(char c)
{
return (write(1, &c, 1));
=======
nclude <stdio.h>
#include "main.h"

/**
* _putchar - writes the character c to stdout
* @c:Ther character to print
* Return: On success 1.
* On error, -1 is returned and errno is set appropriately.
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
>>>>>>> 7a4a88eeb1d5891467fc85715aa9b80d8670a26b
}
