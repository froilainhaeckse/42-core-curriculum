/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy_spec.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkupler <tkupler@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 12:41:56 by tkupler           #+#    #+#             */
/*   Updated: 2024/05/01 19:34:53 by tkupler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_spec.h"

void	ft_memcpy_spec(void)
{
	assert(ft_memcpy(((void *)0), ((void *)0), 3) == memcpy(((void *)0), ((void *)0), 3));
	
	char src[] = "Hello, world!";
	char dest1[20];
	char dest2[20];

	ft_memcpy(dest1, src, strlen(src) + 1);
	memcpy(dest2, src, strlen(src) + 1);

	size_t i = 0;
	while (src[i]) {
		assert(dest1[i] == dest2[i]);
		assert(dest1[i] == src[i]);
		i++;
	}
	printf("ft_memcpy test passed!\n");
}
