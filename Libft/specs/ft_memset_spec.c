/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset_spec.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkupler <tkupler@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 11:39:40 by tkupler           #+#    #+#             */
/*   Updated: 2024/04/18 15:07:31 by tkupler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <assert.h>
#include <string.h>
#include "libft_spec.h"

void	ft_memset_spec(void)
{
	char	str1[10];
	char	str2[10];
	size_t		i;
	size_t		len;

	len = 5;
	i = 0;
	ft_memset(str1, 'A', len);
	memset(str2, 'A', len);

	while (i < len)
	{
		assert(str1[i] == str2[i]);
		i++;
	}
	printf("ft_memset test passed!\n");
}
