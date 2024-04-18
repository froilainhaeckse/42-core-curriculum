/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii_spec.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkupler <tkupler@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 17:35:50 by tkupler           #+#    #+#             */
/*   Updated: 2024/04/18 13:45:17 by tkupler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_spec.h"

void	ft_isascii_spec(void)
{
	assert(ft_isascii('a') == isascii('a'));
	assert(ft_isascii('B') == isascii('B'));
	assert(ft_isascii(233) == isascii(233));
	assert(ft_isascii(-1) == isascii(-1));
	assert(ft_isascii(',') == isascii(','));
	printf("ft_isascii test passed!\n");
}
