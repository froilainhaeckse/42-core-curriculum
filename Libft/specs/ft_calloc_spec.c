/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc_spec.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkupler <tkupler@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 18:22:30 by tkupler           #+#    #+#             */
/*   Updated: 2024/05/06 12:52:03 by tkupler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_spec.h"

void	ft_calloc_spec(void)
{
    // Test 1: Allocating 5 integers
    int *arr1 = ft_calloc(5, sizeof(int));
    for (int i = 0; i < 5; i++)
    {
        assert(arr1[i] == 0);
    }
    free(arr1);

    // Test 2: Allocating 10 characters
    char *str = ft_calloc(10, sizeof(char));
    for (int i = 0; i < 10; i++)
    {
        assert(str[i] == '\0');
    }
    free(str);

    // Test 3: Allocating 0 elements
    int *arr2 = ft_calloc(0, sizeof(int));
    assert(arr2 == NULL);

	// Test 4: Allocating 0 elements
    int *arr3 = ft_calloc(0, 0);
    assert(arr3 == NULL);

    printf("ft_calloc test passed!\n");
}