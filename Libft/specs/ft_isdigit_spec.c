/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit_spec.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkupler <tkupler@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 16:43:56 by tkupler           #+#    #+#             */
/*   Updated: 2024/04/18 15:38:45 by tkupler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_spec.h"

void	ft_isdigit_spec(void)
{
	assert(ft_isdigit('0') != 0);
    assert(ft_isdigit('2') != 0);
    assert(ft_isdigit('4') != 0);
    assert(ft_isdigit('9') != 0);
    assert(ft_isdigit('c') == 0);
    assert(ft_isdigit(',') == 0);
    assert(ft_isdigit(' ') == 0);
    assert(ft_isdigit('\n') == 0);
	printf("ft_isdigit test passed!\n");
}
