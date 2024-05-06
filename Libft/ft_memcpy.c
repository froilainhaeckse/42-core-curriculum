/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkupler <tkupler@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 12:17:38 by tkupler           #+#    #+#             */
/*   Updated: 2024/05/06 14:17:18 by tkupler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *restrict dest, const void *restrict src, size_t n)
{
	char		*d;
	const char	*s;
	size_t		i;

	if (dest == NULL)
		return (NULL);
	if (n == 0)
		return (dest);
	i = 0;
	s = src;
	d = dest;
	while (i < n)
	{
		if (src == NULL)
			d[i] = '\0';
		else
			d[i] = s[i];
		i++;
	}
	return (dest);
}
