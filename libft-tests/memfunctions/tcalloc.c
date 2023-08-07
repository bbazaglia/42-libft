// is that it ?

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

// implement your ft_calloc here
void	*ft_memset(void *str, int c, size_t n)
{
	unsigned char	*p;

	p = (unsigned char *)str;
	while (n > 0)
	{
		*p = (unsigned char)c;
		p++;
		n--;
	}
	return (str);
}

void	*ft_calloc(size_t nelem, size_t elsize)
{
	void	*ptr;
	size_t	total_size;

	if (nelem == '\0' || elsize == '\0')
        return (malloc(0));
	total_size = nelem * elsize;
	if ((total_size > 2147483647) || (total_size / elsize != nelem))
		return (NULL);
	ptr = malloc(total_size);
	if (ptr == NULL)
		return (NULL);
	ft_memset(ptr, 0, total_size);
	return (ptr);
}

int main(void)
{
    char *s = "Hello World!";
    char *str = ft_calloc(1, 1);
    char *str1 = calloc(1, 1);
   
    printf("%s\n", str);
    printf("%s\n", str1);
    printf("%s\n", s);

    free(str);
}