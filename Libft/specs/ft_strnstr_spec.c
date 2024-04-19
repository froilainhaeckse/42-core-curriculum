/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr_spec.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkupler <tkupler@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 18:22:30 by tkupler           #+#    #+#             */
/*   Updated: 2024/04/19 18:29:02 by tkupler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_spec.h"

void	ft_strnstr_spec(void)
{
    const char haystack[] = "Hello, world!";
    const char *needle = "world";
    const char *result = ft_strnstr(haystack, needle, sizeof(haystack));

    assert(result == strnstr(haystack, needle, sizeof(haystack)));

    printf("ft_strnstr test passed!\n");
}

