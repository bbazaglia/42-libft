#include <ctype.h>
#include <stdio.h>

// implement your own ft_isdigit here:

int	main(void)
{
	char c;
	c = '7';
	printf("original function: digit returns: %d\n", isdigit(c));
	printf("your function: digit returns: %d\n", ft_isdigit(c));

	c = '=';
	printf("original function: non digit returns: %d\n", isdigit(c));
	printf("your function: non digit returns: %d\n", ft_isdigit(c));
    
	return (0);
}