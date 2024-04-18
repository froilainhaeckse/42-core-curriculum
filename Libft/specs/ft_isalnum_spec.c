/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum_spec.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkupler <tkupler@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 17:25:19 by tkupler           #+#    #+#             */
/*   Updated: 2024/04/18 13:44:41 by tkupler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <assert.h>
#include <ctype.h>
#include "libft_spec.h"

void	ft_isalnum_spec(void)
{
	assert(ft_isalnum('a') == isalnum('a'));
	assert(ft_isalnum('B') == isalnum('B'));
	assert(ft_isalnum('1') == isalnum('1'));
	assert(ft_isalnum(',') == isalnum(','));
	printf("ft_isalnum test passed!\n");
}
