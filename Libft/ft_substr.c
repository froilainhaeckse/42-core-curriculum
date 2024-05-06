/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkupler <tkupler@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 18:31:28 by tkupler           #+#    #+#             */
/*   Updated: 2024/05/06 15:09:22 by tkupler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_substr(char const *s, unsigned int start,
size_t len)
{
	char	*substring;
	size_t	i;
	size_t	remaining_len;

	if (s == NULL || start >= (unsigned)ft_strlen(s))
		return (NULL);
	remaining_len = ft_strlen(s + start);
	if (len > remaining_len)
		len = remaining_len;
	substring = malloc(len + 1);
	if (substring == NULL)
		return (NULL);
	i = 0;
	while (s[i] && i < len)
	{
		substring[i] = s[i + start];
		i++;
	}
	substring[len] = '\0';
	return (substring);
}
