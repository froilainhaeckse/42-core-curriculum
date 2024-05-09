/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkupler <tkupler@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 18:31:28 by tkupler           #+#    #+#             */
/*   Updated: 2024/05/09 12:08:56 by tkupler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_str_count(char const *s, char c)
{
	size_t	count;
	int		in_word;

	count = 0;
	in_word = 0;
	while (*s)
	{
		if (*s != c && !in_word)
		{
			in_word = 1;
			count++;
		}
		else if (*s == c)
			in_word = 0;
		s++;
	}
	return (count);
}

static size_t	ft_word_len(char const *s, char c)
{
	size_t	len;

	len = 0;
	while (*s && *s != c)
	{
		len++;
		s++;
	}
	return (len);
}

char	**ft_split(char const *s, char c)
{
	size_t	words;
	size_t	i;
	size_t	word_len;
	char	**word_list;

	if (!s || !c)
		return (NULL);
	words = ft_str_count(s, c);
	word_list = malloc((words + 1) * sizeof(char *));
	if (!word_list)
		return (NULL);
	i = 0;
	while (*s)
	{
		if (*s == c)
			s++;
		else
		{
			word_len = ft_word_len(s, c);
			word_list[i] = malloc((word_len + 1) * sizeof(char));
			if (!word_list[i])
				return (NULL);
			ft_strlcpy(word_list[i], s, word_len + 1);
			i++;
			s += word_len;
		}
	}
	word_list[i] = NULL;
	return (word_list);
}
