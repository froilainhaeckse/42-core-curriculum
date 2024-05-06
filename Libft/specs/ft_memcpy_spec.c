/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy_spec.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkupler <tkupler@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 12:41:56 by tkupler           #+#    #+#             */
/*   Updated: 2024/05/06 13:05:17 by tkupler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_spec.h"

void	ft_memcpy_spec(void)
{	
    // Test 1: Copying data from source to destination
    char src[] = "Hello";
    char dest[6];
    ft_memcpy(dest, src, 6);
    assert(strcmp(dest, src) == 0);

	// Test 2: Copying data when source pointer is NULL
    char *null_src = NULL;
    char dest2[6];
    ft_memcpy(dest2, null_src, 6);
    assert(memcmp(dest2, "\0\0\0\0\0\0", sizeof(dest2)) == 0);

    // Test 3: Copying data when destination pointer is NULL
    char src3[] = "Hello";
    char *null_dest = NULL;
    assert(ft_memcpy(null_dest, src3, 6) == NULL);
	printf("ft_memcpy test passed!\n");
}
