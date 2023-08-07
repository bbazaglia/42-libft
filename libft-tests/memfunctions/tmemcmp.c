// ok

#include <string.h>
#include <stdio.h>

// implement your ft_memcmp here
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*ptr1;
	const unsigned char	*ptr2;

	ptr1 = s1;
	ptr2 = s2;
	while (n > 0)
	{
		if (*ptr1 != *ptr2)
			return ((int)(*ptr1) - (int)(*ptr2));
		ptr1++;
		ptr2++;
		n--;
	}
	return (0);
}

int main(void)
{
    char	*str = "Hello World!";
    char	*str2 = "Hello Mates!";
    char	*str3 = "Hello World!";
    char	*str4 = "";
    

    printf("str vs. str2, checking all characters:\n");
    printf("memcmp: %d\n", memcmp(str, str2, 12));
    printf("ft_memcmp: %d\n\n", ft_memcmp(str, str2, 12));

    printf("str vs. str2, checking 6 characters:\n");
    printf("memcmp: %d\n", memcmp(str, str2, 6));
    printf("ft_memcmp: %d\n\n", ft_memcmp(str, str2, 6));

    printf("str vs. str3\n");
    printf("memcmp: %d\n", memcmp(str, str3, 12));
    printf("ft_memcmp: %d\n\n", ft_memcmp(str, str3, 12));

    printf("str vs. str4\n");
    printf("memcmp: %d\n", memcmp(str, str4, 12));
    printf("ft_memcmp: %d\n\n", ft_memcmp(str, str4, 12));

    printf("str4 vs. str4\n");
    printf("memcmp: %d\n", memcmp(str4, str4, 12));
    printf("ft_memcmp: %d\n\n", ft_memcmp(str4, str4, 12));

    return (0);
}