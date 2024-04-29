/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkupler <tkupler@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 22:27:19 by tkupler           #+#    #+#             */
/*   Updated: 2024/04/29 19:01:25 by tkupler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned const char	*str1;
	unsigned const char	*str2;
	size_t				i;

	str1 = (unsigned const char *)s1;
	str2 = (unsigned const char *)s2;
	i = 0;
	while (i < n && str1[i])
	{
		if (str1[i] != str2[i])
			return ((int)(str1[i] - str2[i]));
		i++;
	}
	if (n != 0 && i == n)
		return (str1[n - 1] - str2[n - 1]);
	else if (n == 0)
		return (0);
	return (str1[i] - str2[i]);
}
