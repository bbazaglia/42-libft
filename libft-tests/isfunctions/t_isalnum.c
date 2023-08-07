#include <ctype.h>
#include <stdio.h>

// implement your own ft_isalpha here:

int	main(void)
{
	char c;
	c = 'I';
	printf("original function: uppercase letter returns: %d\n", isalpha(c));
	printf("your function: uppercase letter returns: %d\n", ft_isalpha(c));

	c = 'i';
	printf("original function: lowercase letter returns: %d\n", isalpha(c));
	printf("your function: lowercase letter returns: %d\n", ft_isalpha(c));

	c = '2';
	printf("original function: number returns: %d\n", isalpha(c));
	printf("your function: number returns: %d\n", ft_isalpha(c));

	c = ',';
	printf("original function: char not included in the alphabet returns: %d\n", isalpha(c));
	printf("your function: char not included in the alphabet returns: %d\n", ft_isalpha(c));

	return (0);
}