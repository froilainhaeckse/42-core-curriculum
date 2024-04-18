/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero_spec.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkupler <tkupler@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 12:19:12 by tkupler           #+#    #+#             */
/*   Updated: 2024/04/18 15:11:24 by tkupler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_spec.h"

void	ft_bzero_spec(void)
{
	char	str_ft[10];
	char	str_libc[10];

	ft_bzero(str_ft, 5);
	bzero(str_libc, 5);
	for (int i = 0; i < 5; i++)
	{
		assert(str_ft[i] == 0);
		assert(str_libc[i] == 0);
	}
	printf("ft_bzero test passed!\n");
}
