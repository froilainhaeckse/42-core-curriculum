/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr_spec.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkupler <tkupler@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 18:22:30 by tkupler           #+#    #+#             */
/*   Updated: 2024/05/06 15:07:29 by tkupler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_spec.h"

void	ft_substr_spec(void)
{
   // Test Create a substring from "Hello, world!" starting from index 7 with length 5
    char *str1 = "Hello, world!";
    char *substr1 = ft_substr(str1, 7, 5);
    assert(strcmp(substr1, "world") == 0);
    free(substr1);

	char *substr_empty = ft_substr("", 0, 0);
	assert(substr_empty == NULL);

	char *substr_out_of_bounds = ft_substr("hello", 10, 2);
	assert(substr_out_of_bounds == NULL);

	char *substr_out_of_bounds_len = ft_substr("hello", 3, 10);
	assert(strcmp(substr_out_of_bounds_len, "lo") == 0);
	free(substr_out_of_bounds_len);

	char *substr_start_equal_to_length = ft_substr("hello", 5, 2);
	assert(substr_start_equal_to_length == NULL);

    printf("ft_substr test passed!\n");
}