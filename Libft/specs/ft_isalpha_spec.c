/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha_spec.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkupler <tkupler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 13:34:38 by tkupler           #+#    #+#             */
/*   Updated: 2024/04/17 16:59:26 by tkupler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <assert.h>
#include <ctype.h>
#include "libft_spec.h"

void	ft_isalpha_spec(void)
{
	assert(ft_isalpha('a') == isalpha('a'));
	assert(ft_isalpha('B') == isalpha('B'));
	assert(ft_isalpha('1') == isalpha('1'));
	assert(ft_isalpha(',') == isalpha(','));
}
