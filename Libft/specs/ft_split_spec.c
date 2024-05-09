/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_spec.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkupler <tkupler@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 18:22:30 by tkupler           #+#    #+#             */
/*   Updated: 2024/05/09 11:12:44 by tkupler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_spec.h"

void split_cmp_array(char **expected, char **result) {
    for (int i = 0; expected[i] != NULL || result[i] != NULL; i++) {
        assert(strcmp(expected[i], result[i]) == 0);
    }
}

void ft_split_spec(void) {
    // Test 1: Basic input with multiple words separated by spaces
    char *string1 = "      split       this for   me  !       ";
    char **expected1 = ((char*[6]){"split", "this", "for", "me", "!", NULL});
    char **result1 = ft_split(string1, ' ');
    split_cmp_array(expected1, result1);
    free(result1);

    // Test 2: Input with one word
    char *string2 = "                  olol";
    char **expected2 = ((char*[2]){"olol", NULL});
    char **result2 = ft_split(string2, ' ');
    split_cmp_array(expected2, result2);
    free(result2);

    // Test 3: Input with multiple delimiters
    char *string3 = "this***is*a**test";
    char **expected3 = ((char*[5]){"this", "is", "a", "test", NULL});
    char **result3 = ft_split(string3, '*');
    split_cmp_array(expected3, result3);
    free(result3);

    // Test 4: Input with no delimiters
    char *string4 = "nodelimittershere";
    char **expected4 = ((char*[2]){"nodelimittershere", NULL});
    char **result4 = ft_split(string4, '*');
    split_cmp_array(expected4, result4);
    free(result4);

    // TO DO: CHECK THIS AGAIN:
    // char *string5 = "aa\0bbb";
    // char **expected5 = ((char*[4]){"aa", "bbb", NULL});
    // char **result5 = ft_split(string5, '\0');
    // split_cmp_array(expected5, result5);
    // free(result5);

    printf("ft_split test passed!\n");
}
