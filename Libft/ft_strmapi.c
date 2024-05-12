/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkupler <tkupler@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 18:31:28 by tkupler           #+#    #+#             */
/*   Updated: 2024/05/12 17:07:43 by tkupler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*mapped_string;

	i = 0;
	mapped_string = malloc(ft_strlen(s) + 1);
	if (mapped_string == NULL)
		return (NULL);
	while (s[i])
	{
		mapped_string[i] = f(i, s[i]);
		i++;
	}
	mapped_string[i] = '\0';
	return (mapped_string);
}
