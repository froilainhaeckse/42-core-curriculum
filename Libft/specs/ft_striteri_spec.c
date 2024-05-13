/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri_spec.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkupler <tkupler@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 10:17:58 by tkupler           #+#    #+#             */
/*   Updated: 2024/05/13 10:37:00 by tkupler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <assert.h>
#include <string.h>
#include "libft_spec.h"

// Test function
void test_striteri(unsigned int index, char *c) {
    *c = *c + index;
}

void striteri_cmp(char *expected, char *s) {
    ft_striteri(s, test_striteri);
    assert(strcmp(s, expected) == 0);
}

void ft_striteri_spec(void) {
    // Test 1: Basic input with a string
    char string1[] = "Hello";
    striteri_cmp("Hfnos", string1);

    // // Test 2: Input with an empty string
    char string2[] = "";
    striteri_cmp("", string2);

    // // Test 6: Input with null character
    char string6[] = "Hello\0World";
    striteri_cmp("Hfnos\0Wpsme", string6);

    printf("ft_striteri test passed!\n");
}