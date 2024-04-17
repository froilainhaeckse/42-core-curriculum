/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint_spec.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkupler <tkupler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 17:48:23 by tkupler           #+#    #+#             */
/*   Updated: 2024/04/17 17:50:10 by tkupler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <assert.h>
#include <ctype.h>
#include "libft_spec.h"

void	ft_isprint_spec(void)
{
	assert(ft_isprint('a') == isprint('a'));
	assert(ft_isprint('B') == isprint('B'));
	assert(ft_isprint('1') == isprint('1'));
	assert(ft_isprint(',') == isprint(','));
	assert(ft_isprint(' ') == isprint(' '));
	assert(ft_isprint(233) == isprint(233));
}
