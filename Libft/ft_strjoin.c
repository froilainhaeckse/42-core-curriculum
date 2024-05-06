/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkupler <tkupler@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 18:31:28 by tkupler           #+#    #+#             */
/*   Updated: 2024/05/06 15:51:26 by tkupler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1_len;
	size_t	s2_len;
	size_t	total_len;
	char	*joined_string;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	total_len = s1_len + s2_len;
	joined_string = malloc(total_len + 1);
	if (joined_string == NULL)
		return (NULL);
	ft_strlcpy(joined_string, s1, s1_len + 1);
	ft_strlcpy(joined_string + s1_len, s2, s2_len + 1);
	return (joined_string);
}
