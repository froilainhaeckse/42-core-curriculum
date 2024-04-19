/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp_spec.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkupler <tkupler@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 12:41:56 by tkupler           #+#    #+#             */
/*   Updated: 2024/04/19 18:20:02 by tkupler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_spec.h"

void	ft_memcmp_spec(void)
{
	char	str1[] = "Hello, world!";
	char	str2[] = "Hello, world!";
	char	str3[] = "Hello, worle!";
	char	str4[] = "Hello, wrld!";

	assert(ft_memcmp(str1, str2, sizeof(str1)) == memcmp(str1, str2, sizeof(str1)));
	assert(ft_memcmp(str1, str3, sizeof(str1)) == memcmp(str1, str3, sizeof(str1)));
	assert(ft_memcmp(str1, str4, sizeof(str1)) == memcmp(str1, str4, sizeof(str1)));

	printf("ft_memcmp test passed!\n");
}