#include <ctype.h>
#include <stdio.h>

// implement your own ft_isprint here:

int	main(void)
{
	char c;
	c = '7';
	printf("original function: %d\n", isprint(c));
	printf("your function: %d\n", ft_isprint(c));

	c = '=';
	printf("original function: %d\n", isprint(c));
	printf("your function: %d\n", ft_isprint(c));

	c = ' ';
	printf("original function: %d\n", isprint(c));
	printf("your function: %d\n", ft_isprint(c));

    c = '\n';
	printf("original function: %d\n", isprint(c));
	printf("your function: %d\n", ft_isprint(c));

	return (0);
}