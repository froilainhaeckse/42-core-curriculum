/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen_spec.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkupler <tkupler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 18:22:30 by tkupler           #+#    #+#             */
/*   Updated: 2024/04/17 18:36:06 by tkupler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <assert.h>
#include <string.h>
#include "libft_spec.h"

void	ft_strlen_spec(void)
{
	assert(ft_strlen("a") == strlen("a"));
	assert(ft_strlen("abc") == strlen("abc"));
	assert(ft_strlen(" ") == strlen(" "));
	assert(ft_strlen("hello") == strlen("hello"));
}
