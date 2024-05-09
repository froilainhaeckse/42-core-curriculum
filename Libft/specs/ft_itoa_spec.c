/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_spec.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkupler <tkupler@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 18:22:30 by tkupler           #+#    #+#             */
/*   Updated: 2024/05/09 13:35:20 by tkupler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_spec.h"

void ft_itoa_spec(void) {
    char *result1 = ft_itoa(1);
    char *expected1 = "1";
    assert(strcmp(result1, expected1) == 0);
    free(result1);

    char *result2 = ft_itoa(2233);
    char *expected2 = "2233";
    assert(strcmp(result2, expected2) == 0);
    free(result2);

    printf("ft_itoa test passed!\n");
}
