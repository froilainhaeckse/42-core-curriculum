/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup_spec.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkupler <tkupler@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 18:22:30 by tkupler           #+#    #+#             */
/*   Updated: 2024/05/09 10:00:35 by tkupler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_spec.h"

void	ft_strdup_spec(void)
{
	// Test 1: Empty String
    char *str1 = ft_strdup("");
    char *str2 = strdup("");

    assert(strcmp(str1, str2) == 0);

    free(str1);
    free(str2);

	// Test 2: String and null terminator
    const char *original = "hello";
    char *dup = ft_strdup(original);

    assert(strlen(dup) == strlen(original));

    size_t i;
    for (i = strlen(original); dup[i] != '\0'; i++)
    {
        assert(dup[i] == '\0');
    }
    free(dup);

    printf("ft_strdup test passed!\n");
}