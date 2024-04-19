/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy_spec.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkupler <tkupler@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 22:28:59 by tkupler           #+#    #+#             */
/*   Updated: 2024/04/18 23:24:18 by tkupler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_spec.h"

void	ft_strlcpy_spec(void)
{
    char dest[10];

    assert(ft_strlcpy(dest, "", sizeof(dest)) == strlen("") && strcmp(dest, "") == 0);

    assert(ft_strlcpy(dest, "hello", 0) == strlen("hello") && strcmp(dest, "") == 0);

    assert(ft_strlcpy(dest, "hello", sizeof(dest)) == strlen("hello") && strcmp(dest, "hello") == 0);

    assert(ft_strlcpy(dest, "hello, world!", 6) == strlen("hello, world!") && strcmp(dest, "hello") == 0);

    printf("ft_strlcpy tests passed!\n");
}