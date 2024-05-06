/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_spec.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkupler <tkupler@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 18:22:30 by tkupler           #+#    #+#             */
/*   Updated: 2024/05/06 15:43:35 by tkupler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_spec.h"

void	ft_strjoin_spec(void)
{
    char *str1 = "Hello, ";
	char *str2 = "World!";
    char *joined_str1 = ft_strjoin(str1, str2);
    assert(strcmp(joined_str1, "Hello, World!") == 0);
    free(joined_str1);

	char *str3 = "";
	char *str4 = "";
    char *joined_str2 = ft_strjoin(str3, str4);
	assert(strcmp(joined_str2, "") == 0);
	free(joined_str2);

	char *str5 = "Hello";
	char *str6 = "";
    char *joined_str3 = ft_strjoin(str5, str6);
	assert(strcmp(joined_str3, "Hello") == 0);
	free(joined_str3);

	char *str7 = "";
	char *str8 = "World";
    char *joined_str4 = ft_strjoin(str7, str8);
	assert(strcmp(joined_str4, "World") == 0);
	free(joined_str4);

	char *str9 = NULL;
	char *str10 = "World";
    char *joined_str5 = ft_strjoin(str9, str10);
	assert(joined_str5 == NULL);

	char *str11 = NULL;
	char *str12 = NULL;
    char *joined_str6 = ft_strjoin(str11, str12);
	assert(joined_str6 == NULL);

    printf("ft_strjoin test passed!\n");
}