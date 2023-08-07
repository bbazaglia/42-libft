// ok

#include <stdio.h>
#include <string.h>

// implement your ft_memset here
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

int	main(void)
{
	printf("test #1\n");
	char s[12];
	char *str = memset(s, 'a', 12);
	printf("%s\n", str);
	char *str1 = ft_memset(s, 'a', 12);
	printf("%s\n\n", str1);

	printf("test #2\n");
	char src[10];
	src[0] = 'a';
	src[1] = 'a';
	src[2] = 'a';
	src[3] = 'a';
	ft_memset(&src[3], 'b', 3);
	printf("%s\n", src);
	
	char src1[10];
	src1[0] = 'a';
	src1[1] = 'a';
	src1[2] = 'a';
	src1[3] = 'a';
	memset(&src1[3], 'b', 3);
	printf("%s\n\n", src1);


	printf("test #3\n");
	char source[] = "aaaaaaa";
	ft_memset(&source[3], 'b', 3);
	int i = 0;
	while(i < 8)
	{
		printf("%c ", source[i]);
		i++;
	}
	printf("\n");
	char source1[] = "aaaaaaa";
	memset(&source1[3], 'b', 3);
	int j = 0;
	while(j < 8)
	{
		printf("%c ", source1[j]);
		j++;
	}
	printf("\n\n");

	printf("test #4\n");
	char w[6];
	w[0] = 'h';
	w[1] = 'e';
	w[2] = 'l';
	w[3] = 'l';
	w[4] = 'o';
	w[5] = '\0';

	ft_memset(&w[1], 'a', 3);
	int k = 0;
	while(k < 6)
	{
		printf("%c ", w[k]);
		k++;
	}
	printf("\n");
	
	char word[6];
	word[0] = 'h';
	word[1] = 'e';
	word[2] = 'l';
	word[3] = 'l';
	word[4] = 'o';
	word[5] = '\0';
	memset(&word[1], 'a', 3);
	k = 0;
	while(k < 6)
	{
		printf("%c ", word[k]);
		k++;
	}
	printf("\n");
}