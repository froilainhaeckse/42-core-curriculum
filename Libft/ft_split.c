/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkupler <tkupler@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 18:31:28 by tkupler           #+#    #+#             */
/*   Updated: 2024/05/22 10:58:24 by tkupler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_free_and_null(char **word_list, size_t i)
{
	while (i > 0)
		free(word_list[--i]);
	free(word_list);
	return (NULL);
}

static void	ft_count_and_length(char const *s, char c,
	size_t *count, size_t *len)
{
	int	in_word;

	in_word = 0;
	*count = 0;
	*len = 0;
	while (*s)
	{
		if (*s != c && !in_word)
		{
			in_word = 1;
			(*count)++;
		}
		else if (*s == c)
			in_word = 0;
		if (in_word)
			(*len)++;
		s++;
	}
}

static char	**ft_split_helper(char const *s, char c,
	char **word_list, size_t words)
{
	size_t	i;
	size_t	len;

	i = 0;
	while (i < words)
	{
		while (*s == c)
			s++;
		len = 0;
		while (s[len] && s[len] != c)
			len++;
		word_list[i] = malloc((len + 1) * sizeof(char));
		if (!word_list[i])
			return (ft_free_and_null(word_list, i));
		ft_strlcpy(word_list[i], s, len + 1);
		s += len;
		while (*s == c)
			s++;
		i++;
	}
	word_list[i] = NULL;
	return (word_list);
}

char	**ft_split(char const *s, char c)
{
	char	**word_list;
	size_t	words;
	size_t	len;

	if (!s)
		return (NULL);
	ft_count_and_length(s, c, &words, &len);
	word_list = malloc((words + 1) * sizeof(char *));
	if (!word_list)
		return (NULL);
	return (ft_split_helper(s, c, word_list, words));
}
