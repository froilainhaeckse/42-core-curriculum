/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp_spec.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkupler <tkupler@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 18:22:30 by tkupler           #+#    #+#             */
/*   Updated: 2024/04/29 15:58:35 by tkupler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_spec.h"

void	ft_strncmp_spec(void)
{
	char str1[] = "Hello, world!";
	char str2[] = "Hello, everyone!";
	char str3[] = "Hello, world!";

	assert(ft_strncmp(str1, str2, 6) == strncmp(str1, str2, 6));
	assert(ft_strncmp(str1, str2, 8) == strncmp(str1, str2, 8));
	assert(ft_strncmp(str1, str2, 12) == strncmp(str1, str2, 12));
	assert(ft_strncmp(str1, str3, 13) == strncmp(str1, str3, 13));
	assert(ft_strncmp("abcdef", "abc\375xx", 5) < 0);

	printf("ft_strncmp test passed!\n");
}
