/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit_spec.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkupler <tkupler@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 16:43:56 by tkupler           #+#    #+#             */
/*   Updated: 2024/04/18 11:32:33 by tkupler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <assert.h>
#include <ctype.h>
#include "libft_spec.h"

void	ft_isdigit_spec(void)
{
	assert(ft_isdigit('a') == isdigit('a'));
	assert(ft_isdigit('B') == isdigit('B'));
	assert(ft_isdigit('1') == isdigit('1'));
	assert(ft_isdigit(',') == isdigit(','));
}
