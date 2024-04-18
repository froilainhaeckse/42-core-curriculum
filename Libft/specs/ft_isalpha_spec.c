/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha_spec.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkupler <tkupler@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 13:34:38 by tkupler           #+#    #+#             */
/*   Updated: 2024/04/18 15:36:13 by tkupler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_spec.h"

void	ft_isalpha_spec(void)
{
	assert(ft_isalpha('a') != 0);
    assert(ft_isalpha('B') != 0);
    assert(ft_isalpha('z') != 0);
    assert(ft_isalpha('A') != 0);
    assert(ft_isalpha('1') == 0);
    assert(ft_isalpha(',') == 0);
    assert(ft_isalpha(' ') == 0);
    assert(ft_isalpha('\n') == 0);
	printf("ft_isalpha test passed!\n");
}
