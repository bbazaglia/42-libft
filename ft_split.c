/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbazagli <bbazagli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 12:06:06 by bbazagli          #+#    #+#             */
/*   Updated: 2023/07/28 09:26:55 by bbazagli         ###   ########.fr       */
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
	// iterates over the string until it reaches the null terminator
	while (s[i])
	{
		/* if the current character is not a delimiter `c`, it means it is part of a word
    	increment `count` to indicate that we found a word */
		if (s[i] != c)
		{
			count++;
			// advance the index `i` until we reach the end of the word
			while (s[i] && s[i] != c)
				i++;
		}
		// move on to the next character in the string to find the next word
		else 
			i++;
	}
	// return the total count of words
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
	// keep track of the length of each word
	size_t	len;
	// keep track of the index of the words array 
	size_t	i;

	i = 0;
	// iterates over the string 's' until it reaches the null terminator
	while (*s)
	{
		len = 0;
		// counts the number of characters in s until it encounters the delimiter c or the null terminator (end of 's')
		while (s[len] != c && s[len])
			len++;
		// allocate memory for the current word
		words[i] = (char *)malloc(len * sizeof(char) + 1);
		// check if the memory allocation was successful
		if (words[i] == NULL)
			return (ft_free_split(words));
		// add a null terminator at the end of the current word 
		words[i][len] = '\0';
		// copy the charactersCopy the characters of the current word from the string 's' to the memory block allocated for the word, in reverse order from the input string s to the memory block allocated for the word, in reverse order
		while (len > 0)
		{
			words[i][len - 1] = s[len - 1];
			len--;
		}
		// move the pointer to the beginning of the next word in the string, skipping the delimiter c
		while (*s != c && *s)
			s++;
		// skip over any consecutive delimiters that might be present in the string
		while (*s == c && *s)
			s++;
		// move to the next index in the words array to store the next word
		i++;
	}
	// return the words array, now containing the individual words as separate strings
	return (words);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	size_t	num_words;

	num_words = ft_count_words(s, c);
	// allocate memory for the 'arr' array
	arr = (char **)malloc(sizeof(char *) * (num_words + 1));
	// check if the memory allocation was successful
	if (arr == NULL)
		return (NULL);
	// skip any delimiters at the beginning of the string 
	while (*s == c && *s)
		s++;
	// call function to split the string into individual words and populate the array with pointers to these words
	arr = ft_write_words(arr, s, c);
	// set the last element of the arr array to NULL
	arr[num_words] = NULL;
	// Note that '**words' handle the intermediate storage of individual words during word extraction, while '**arr' represents the final array of strings (words)
	return (arr);
}
