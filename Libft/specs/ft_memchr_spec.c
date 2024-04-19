/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr_spec.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkupler <tkupler@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 18:22:30 by tkupler           #+#    #+#             */
/*   Updated: 2024/04/19 18:13:02 by tkupler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_spec.h"

void	ft_memchr_spec(void)
{
    char str[] = "Hello, world!";
    
    assert(ft_memchr(str, 'H', strlen(str)) == memchr(str, 'H', strlen(str)));
    assert(ft_memchr(str, 'o', strlen(str)) == memchr(str, 'o', strlen(str)));
    assert(ft_memchr(str, '!', strlen(str)) == memchr(str, '!', strlen(str)));
    assert(ft_memchr(str, '\0', strlen(str)) == memchr(str, '\0', strlen(str)));
    assert(ft_memchr(str, 'z', strlen(str)) == memchr(str, 'z', strlen(str)));
    
    printf("ft_memchr test passed!\n");
}
