/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint_spec.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkupler <tkupler@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 17:48:23 by tkupler           #+#    #+#             */
/*   Updated: 2024/04/18 13:45:49 by tkupler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_spec.h"

void	ft_isprint_spec(void)
{
	assert(ft_isprint('a') == isprint('a'));
	assert(ft_isprint('B') == isprint('B'));
	assert(ft_isprint('1') == isprint('1'));
	assert(ft_isprint(',') == isprint(','));
	assert(ft_isprint(' ') == isprint(' '));
	assert(ft_isprint(233) == isprint(233));
	printf("ft_isprint test passed!\n");
}
