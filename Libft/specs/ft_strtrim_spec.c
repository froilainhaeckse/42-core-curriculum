/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim_spec.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkupler <tkupler@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 18:22:30 by tkupler           #+#    #+#             */
/*   Updated: 2024/05/06 16:34:23 by tkupler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_spec.h"

void	ft_strtrim_spec(void)
{
    char *str1 = "Hellohell";
    char *set1 = "hell";
    char *trimmed_str1 = ft_strtrim(str1, set1);
    assert(trimmed_str1 != NULL && strcmp(trimmed_str1, "Hello") == 0);
    free(trimmed_str1);

    // Test case 3: No characters to trim
    char *str3 = "Hello, World!";
    char *set3 = "xyz";
    char *trimmed_str3 = ft_strtrim(str3, set3);
    assert(trimmed_str3 != NULL && strcmp(trimmed_str3, "Hello, World!") == 0);
    free(trimmed_str3);

    // Test case 4: Empty input string
    char *str4 = "";
    char *set4 = ", World!";
    char *trimmed_str4 = ft_strtrim(str4, set4);
    assert(trimmed_str4 != NULL && strcmp(trimmed_str4, "") == 0);
    free(trimmed_str4);

    // Test case 5: NULL input
    char *trimmed_str5 = ft_strtrim(NULL, ", World!");
    assert(trimmed_str5 == NULL);

    char *trimmed_str6 = ft_strtrim("Hello, World!", NULL);
    assert(trimmed_str6 == NULL);

    printf("ft_strtrim test passed!\n");
}