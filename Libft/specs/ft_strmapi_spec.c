/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi_spec.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkupler <tkupler@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 18:22:30 by tkupler           #+#    #+#             */
/*   Updated: 2024/05/13 10:00:43 by tkupler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_spec.h"

char ft_strmapi_toupper(unsigned int i, char c)
{
    (void)i;
    if (c >= 'a' && c <= 'z')
        return (c - 32);
    return c;
}

char	ft_strmapi_tolower(unsigned int i, char c)
{
    (void)i;
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}

void ft_strmapi_spec(void)
{
    char str1[] = "Hello, World!";
    char *result;

    // Test 1: Convert to uppercase
    result = ft_strmapi(str1, &ft_strmapi_toupper);
    assert(strcmp(result, "HELLO, WORLD!") == 0);
    free(result);

    // Test 2: Convert to lowercase
    result = ft_strmapi(str1, &ft_strmapi_tolower);
    assert(strcmp(result, "hello, world!") == 0);
    free(result);

    // Test 4: Empty string
    result = ft_strmapi("", &ft_strmapi_tolower); // Pass appropriate function pointer
    assert(result != NULL && *result == '\0');
    free(result);

    printf("ft_strmapi test passed!\n");
}
