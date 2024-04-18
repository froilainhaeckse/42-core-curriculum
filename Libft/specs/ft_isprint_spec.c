/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint_spec.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkupler <tkupler@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 17:48:23 by tkupler           #+#    #+#             */
/*   Updated: 2024/04/18 15:42:20 by tkupler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_spec.h"

void	ft_isprint_spec(void)
{
	assert(ft_isprint('a') != 0);
    assert(ft_isprint('B') != 0);
    assert(ft_isprint('z') != 0);
    assert(ft_isprint(',') != 0);
    assert(ft_isprint(' ') != 0);
    assert(ft_isprint(233) == 0);
	assert(ft_isprint(1) == 0);
    assert(ft_isprint(31) == 0);
	printf("ft_isprint test passed!\n");
}
