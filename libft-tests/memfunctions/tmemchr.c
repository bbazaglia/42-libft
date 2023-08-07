// ok

#include <string.h>
#include <stdio.h>

// implement your ft_memchr here
void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr;
	size_t			i;

	ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (ptr[i] == (unsigned char)c)
			return (&ptr[i]);
		i++;
	}
	return (NULL);
}


int main(void)
{
    char	*str = "Hello World!";
    char	*str1 = "Hello World!";
    printf("test #1\n");
    str = memchr(str, 'W', strlen(str));
    printf("original function: %s\n", str);
    str1 = ft_memchr(str1, 'W', strlen(str1));
    printf("your function: %s\n\n", str1);

    char	*str2 = "Hello World!";
    char	*str3 = "Hello World!";
    printf("test #2\n");
    str2 = memchr(str2, 'W', 2);
    printf("original function: %s\n", str2);
    str3 = ft_memchr(str3, 'W', 2);
    printf("your function: %s\n\n", str3);


    char	*str4 = "Hello World!";
    char	*str5 = "Hello World!";
    printf("test #3\n");
    str4 = memchr(str4, 'W', 15);
    printf("original function: %s\n", str4);
    str5 = ft_memchr(str5, 'W', 15);
    printf("your function: %s\n\n", str5);

    char	*str6 = "Hello World!";
    char	*str7 = "Hello World!";
    printf("test #4\n");
    str6 = memchr(str6, 'b', 15);
    printf("original function: %s\n", str6);
    str7 = ft_memchr(str7, 'b', 15);
    printf("your function: %s\n\n", str7);

    return (0);
}