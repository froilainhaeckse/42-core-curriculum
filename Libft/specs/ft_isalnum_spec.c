/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum_spec.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkupler <tkupler@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 17:25:19 by tkupler           #+#    #+#             */
/*   Updated: 2024/04/18 15:40:00 by tkupler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_spec.h"

void	ft_isalnum_spec(void)
{
	assert(ft_isalnum('a') != 0);
    assert(ft_isalnum('B') != 0);
    assert(ft_isalnum('5') != 0);
    assert(ft_isalnum('A') != 0);
    assert(ft_isalnum('1') != 0);
    assert(ft_isalnum(',') == 0);
    assert(ft_isalnum(' ') == 0);
    assert(ft_isalnum('\n') == 0);
	printf("ft_isalnum test passed!\n");
}
