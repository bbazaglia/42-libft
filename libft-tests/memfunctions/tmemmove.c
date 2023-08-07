// is that it ?

#include <string.h>
#include <stdio.h>

// implement your ft_memmove here
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	if (dest == NULL && src == NULL)
		return (NULL);
	if (dest < src)
	{
		i = 0;
		while (i < n)
		{
			((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
			i++;
		}
	}
	else
	{
		i = n;
		while (i > 0)
		{
			((char *)dest)[i - 1] = ((char *)src)[i - 1];
			i--;
		}
	}
	return (dest);
}

int	main(void)
{
	printf("test #1\n");
	char src[] = "copy this";
	char dest[100];
	char *dest_ptr = memmove(dest, src, strlen(src) + 1);
	char *dest_ptr2 = ft_memmove(dest, src, strlen(src) + 1);
	printf("%s\n", dest_ptr);
	printf("%s\n\n", dest_ptr2);

	// undefined behavior	
	printf("test #2\n");
	char a[] = "copy this";
	char b[9];
	char *p1 = memmove(b, a, 9);
	char *p2 = ft_memmove(b, a, 9);
	printf("%s\n", p1);
	printf("%s\n\n", p2);

	printf("test #3\n");
	char *dest3 = NULL;
	char *src3 = NULL;
	char *p = ft_memmove(dest3, src3, 2);
	char *pp = ft_memmove(dest3, src3, 2);
	printf("%s\n",p);
	printf("%s\n\n",pp);

	// seg fault 
	printf("test #4\n");
	char dest1[10];
	char *src1 = NULL;
	char *ptr = memmove(dest1, src1, 2); 
	char *ptrr = ft_memmove(dest1, src1, 2);
	printf("%s\n",ptr);
	printf("%s\n\n",ptrr);

	// seg fault  
	printf("test #5\n");
	char *str = "Hello World!";
	char str2[5];
	char *pstr = memmove(str, str2, 12);
	printf("%s\n", pstr);
	char *pstr2 = ft_memmove(str, str2, 12);
	printf("%s\n", pstr2);
}