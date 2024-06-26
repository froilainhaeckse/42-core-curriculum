/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat_spec.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkupler <tkupler@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 22:28:59 by tkupler           #+#    #+#             */
/*   Updated: 2024/05/13 11:57:49 by tkupler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_spec.h"

void	ft_strlcat_spec(void)
{
    char dest[30] = "hello";
	char src[] = ", world!";

    assert(ft_strlcat(dest, "", sizeof(dest)) == strlen("hello") && strcmp(dest, "hello") == 0);

	assert(ft_strlcat(dest, src, 0) == strlen(", world!") && strcmp(dest, "hello") == 0);

    assert(ft_strlcat(dest, src, 14) == strlen("hello, world!") && strcmp(dest, "hello, world!") == 0);

    printf("ft_strlcat test passed!\n");
}