/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbazagli <bbazagli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 12:06:06 by bbazagli          #+#    #+#             */
/*   Updated: 2023/07/27 15:28:51 by bbazagli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* returns the array of new strings resulting from the split (or NULL if the allocation fails)
s: The string to be split
c: The delimiter character
*/

#include "libft.h"

int	ft_count_words(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		// the first char of a word won't be a delimiter  
		if (s[i] != c)
		{
			count++;
			// iterate through the string while it's a word (as we only want to find the start of a word)
			while (s[i] && s[i] != c)
				i++;
		}
		// iterate again to find the next word
		else 
			i++;
	}
	// count equals to how many times the first letter of a word was found (number of words itself)
	return (count);
}

/* Deallocate memory in case there's an error during memory allocation for the words array
When a function returns a pointer, it means that the function is providing the memory address where the data is stored rather than the actual data itself
As the 'free' function from the C standard library expects a void * as its argument, it's natural to use a void * return type */
void	*ft_free_split(char **arr)
{
	int	i;

	i = 0;
	while (arr[i])
	{
		/* free each word
		in a dynamic array of strings (array of pointers), each element of the array is a pointer that points to a memory block containing a string (word)
		these individual memory blocks are separate from the memory used to hold the array itself */
		free(arr[i]);
		i++;
	}
	/*free the array 
	if you only free the array (but not the words first), you will have a memory leak. 
	memory leak: the memory allocated for each word (ex: arr[0], arr[1], arr[2]) is still present in memory but cannot be accessed or freed */
	free(arr);
	return NULL;
}

/* allocate memory for each word and populate the words array*/
char	**ft_write_words(char **words, char const *s, char c)
{
	size_t	len;
	size_t	i;

	i = 0;
	while (*s)
	{
		len = 0;
		while (s[len] != c && s[len])
			len++;
		words[i] = (char *)malloc(len * sizeof(char) + 1);
		if (words[i] == NULL)
			return (ft_free_split(words));
		words[i][len] = '\0';
		while (len > 0)
		{
			words[i][len - 1] = s[len - 1];
			len--;
		}
		while (*s != c && *s)
			s++;
		while (*s == c && *s)
			s++;
		i++;
	}
	return (words);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	size_t	num_words;

	num_words = ft_count_words(s, c);
	arr = (char **)malloc(sizeof(char *) * (num_words + 1));
	if (arr == NULL)
		return (NULL);
	while (*s == c && *s)
		s++;
	arr = ft_write_words(arr, s, c);
	arr[num_words] = NULL;
	return (arr);
}
