#include <ctype.h>
#include <stdio.h>

// implement your own ft_isascii here:

int	main(void)
{
	char c;
	c = 128;
	printf("original function: %d\n", isascii(c));
	printf("your function: %d\n", ft_isascii(c));

	c = 130;
	printf("original function: %d\n", isascii(c));
	printf("your function: %d\n", ft_isascii(c));

	c = 0;
	printf("original function: %d\n", isascii(c));
	printf("your function: %d\n", ft_isascii(c));

    c = 7;
	printf("original function: %d\n", isascii(c));
	printf("your function: %d\n", ft_isascii(c));

	return (0);
}