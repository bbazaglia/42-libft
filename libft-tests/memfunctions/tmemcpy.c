// ok

#include <stdio.h>
#include <string.h>

// implement your ft_memcpy here
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (dest == NULL && src == NULL)
		return (NULL);
	while (i < n)
	{
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dest);
}

/*	
printf("%s\n", dest_ptr) - prints string
printf("%p\n", dest_ptr) - prints address
*/


int	main(void)
{
	printf("test #1\n");
	char src[] = "copy this";
	char dest[100];
	char *dest_ptr = memcpy(dest, src, strlen(src) + 1);
	char *dest_ptr2 = ft_memcpy(dest, src, strlen(src) + 1);
	printf("%s\n", dest_ptr);
	printf("%s\n\n", dest_ptr2);

	// undefined behavior	
	printf("test #2\n");
	char a[] = "copy this";
	char b[9];
	char *p1 = memcpy(b, a, 9);
	char *p2 = ft_memcpy(b, a, 9);
	printf("%s\n", p1);
	printf("%s\n\n", p2);

	printf("test #3\n");
	char *dest3 = NULL;
	char *src3 = NULL;
	char *p = ft_memcpy(dest3, src3, 2);
	char *pp = ft_memcpy(dest3, src3, 2);
	printf("%s\n",p);
	printf("%s\n\n",pp);

	// seg fault 
	printf("test #4\n");
	char dest1[10];
	char *src1 = NULL;
	char *ptr = memcpy(dest1, src1, 2); 
	char *ptrr = ft_memcpy(dest1, src1, 2);
	printf("%s\n",ptr);
	printf("%s\n\n",ptrr);

	// seg fault  
	printf("test #5\n");
	char *str = "Hello World!";
	char str2[5];
	char *pstr = memcpy(str, str2, 12);
	printf("%s\n", pstr);
	char *pstr2 = ft_memcpy(str, str2, 12);
	printf("%s\n", pstr2);
}
