/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove_spec.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkupler <tkupler@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 16:04:03 by tkupler           #+#    #+#             */
/*   Updated: 2024/04/18 21:55:27 by tkupler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_spec.h"

void	ft_memmove_spec(void)
{

	char s[] = {65, 66, 67, 68, 69, 0, 45};
    char s0[] = {0, 0, 0, 0, 0, 0, 0};
    char sCpy[] = {65, 66, 67, 68, 69, 0, 45};
    char sResult[] = {67, 68, 67, 68, 69, 0, 45};
    char sResult2[] = {67, 67, 68, 68, 69, 0, 45};

    assert(ft_memmove(s0, s, 7) == s0 && memcmp(s, s0, 7) == 0);

    assert(ft_memmove(s, s + 2, 0) && memcmp(s, sCpy, 7) == 0);

    assert(ft_memmove(s, s + 2, 2) == s && memcmp(s, sResult, 7) == 0);

    assert(ft_memmove(sResult + 1, sResult, 2) == sResult + 1 && memcmp(sResult, sResult2, 7) == 0);
	// Non-overlapping memory regions
    {
        char s[] = "Hello, World!";
        char s0[sizeof(s)] = {0};
        assert(ft_memmove(s0, s, strlen(s)) == s0 && memcmp(s, s0, strlen(s)) == 0);
    }

    // Overlapping memory regions (src < dest)
    {
        char s[] = "Hello, World!";
        assert(ft_memmove(s + 2, s, strlen(s) - 2) == s + 2 && memcmp(s, "HeHello, World!", strlen(s)) == 0);
    }

    printf("ft_memmove tests passed!\n");
}