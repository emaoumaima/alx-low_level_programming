#include <unistd.h>
/**
 * _putchar - write the character c to stdout
 * @c : The charcter to print
 * Return: 0 if successfull else 1
 */
int _putchar(char c)
{
        return (write(1, &c, 1));
}
