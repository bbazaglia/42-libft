// ok

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

// implement your ft_strdup here
char	*ft_strdup(const char *s)
{
	char *new;
    int i;
    
	new = (char *)malloc(sizeof(char) * strlen(s) + 1);
	if (new == NULL)
		return (NULL);
	i = 0;
    while (s[i])
    {
        new[i] = s[i];
        i++;
    }
    new[i] = '\0';
	return (new);
}

int main(void)
{
    char *s = "Hello World!";
    printf("strdup: %s\n", strdup(s));
    printf("ft_strdup: %s\n", ft_strdup(s));

    printf("strdup: %s\n", strdup("1"));
    printf("ft_strdup: %s\n", ft_strdup("1"));

    printf("strdup: %s\n", strdup(""));
    printf("ft_strdup: %s\n", ft_strdup(""));
}