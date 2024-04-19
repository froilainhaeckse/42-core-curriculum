/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp_spec.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkupler <tkupler@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 18:22:30 by tkupler           #+#    #+#             */
/*   Updated: 2024/04/19 18:08:12 by tkupler          ###   ########.fr       */
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

	printf("ft_strncmp test passed!\n");
}
