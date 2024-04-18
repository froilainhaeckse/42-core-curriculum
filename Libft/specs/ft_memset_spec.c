/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset_spec.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkupler <tkupler@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 11:39:40 by tkupler           #+#    #+#             */
/*   Updated: 2024/04/18 11:54:58 by tkupler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <assert.h>
#include <string.h>
#include "libft_spec.h"

void	ft_memset_spec(void)
{
	char	str[10];

	assert(ft_memset(str, 'A', 5) == memset(str, 'A', 5));
	assert(ft_memset(str, 'A', 0) == memset(str, 'A', 0));
}
