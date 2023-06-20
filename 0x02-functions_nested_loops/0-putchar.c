ssh-rsa AAAAB3NzaC1yc2EAAAADAQABAAABAQDBV9J4Zd4qw20TY7Id7xq9SCnpQwcR9ThavuW7Ox/Bu/FZjHFQkIBL9bBRmjb/dxK6RBYAgZI8vRrxaZfpz0DzIcGgV+eJXm1BXDFo4ixRGE+TTJARuZeuyxj5M7TzNmbiCVfBXmiWdwsK8ROjxP+WJlOaYydDHYRIG5CTB1SHYN0rLw/m6lIjONc0/eApSt0k1OJezG0kbufAFLUZr0S4AnTYVnGKfzWIZ+bDh2N1renKSwzn3Jd4A0NiQK8YdG/8Y+4Oxa0Ur+gP4p9+1dxt5e3Qph6N1jSgfJIyiurfwB5h5nzW9zQBIP9BMSuEuxY4YSn8LZGbYnt/MLKYCy0j vagrant@vagrant-ubuntu-trusty-64
#include <unistd.h>
#include "holberton.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
