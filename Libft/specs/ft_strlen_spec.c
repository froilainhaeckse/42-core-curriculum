/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen_spec.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkupler <tkupler@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 18:22:30 by tkupler           #+#    #+#             */
/*   Updated: 2024/04/18 13:46:16 by tkupler          ###   ########.fr       */
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
	printf("ft_strlen test passed!\n");
}
