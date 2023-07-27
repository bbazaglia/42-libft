/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbazagli <bbazagli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 12:06:06 by bbazagli          #+#    #+#             */
/*   Updated: 2023/07/26 12:46:56 by bbazagli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* returns the array of new strings resulting from the split (or NULL if the allocation fails)
s: The string to be split
c: The delimiter character

- steps:
1) count the number of occurrences of the delimiter char (how many substrings we need to allocate space for)
2) allocate memory for the array of strings 
*check if memory allocation was successful
3) allocate memory for each substring
*check if memory allocation was successful
4) copy the content of the string to the substring
*/

#include "libft.h"
// #include <stdio.h>


int	ft_substr_count(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			count++;
			while (s[i] && s[i] != c)
				i++;
		}
		else 
			i++;
	}
	return (count);
}

char	*ft_strncpy(char *dest, const char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

void	ft_free_split(char **arr)
{
	int	i;

	i = 0;
	while (arr[i])
	{
		free(arr[i]);
		i++;
	}
	free(arr);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	int		i;
	int		j;
	int		s_len;
	int		substr_len;
	int		substr_start;
	
	// printf("count words: %d\n", ft_substr_count(s, c));
	arr = (char **)malloc(sizeof(char *) * (ft_substr_count(s, c) + 1));
	if (arr == NULL)
		return (NULL);
		
	s_len = ft_strlen(s);
	substr_start = 0;
	i = 0;
	j = 0;
	while (i < s_len)
	{
		if (s[i] != c)
		{
			substr_start = i;
			substr_len = 0;
			while (s[i] != c)
			{
				substr_len++;
				i++;
			}
			arr[j] = (char *)malloc(substr_len + 1);
			if (arr[j] == NULL)
			{
				ft_free_split(arr);
				return (NULL);
			}
			// printf("array indice j: %d\n", j);
			ft_strncpy(arr[j], (char *)&s[substr_start], substr_len);
			j++;
		}
		else
			i++;
	}
	// printf("NULL indice j: %d\n", j);
	arr[j] = NULL;
	return (arr);
}

// int main()
// {
// 	char **tabstr = ft_split("lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse lectus tortor, dignissim sit amet, adipiscing nec, ultricies sed, dolor. Cras elementum ultricies diam. Maecenas ligula massa, varius a, semper congue, euismod non, mi.", 'i');
// 	int i = 0;
//         while (tabstr[i] != NULL)
//         {
//             printf("%s\n", tabstr[i]);
//             i++;
//         }

// }