/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd_spec.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkupler <tkupler@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/12 21:05:26 by tkupler           #+#    #+#             */
/*   Updated: 2024/05/13 10:11:24 by tkupler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_spec.h"
#include <fcntl.h>
#include <assert.h>
#include <string.h>

void putendl_fd_cmp(char *expected, char *s) {
    char buffer[100] = {0};
    int file_fd;

    // Write to file
    file_fd = open("output.txt", O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
    assert(file_fd != -1);
    ft_putendl_fd(s, file_fd);
    close(file_fd);

    // Read the file and compare with expected output
    file_fd = open("output.txt", O_RDONLY);
    read(file_fd, buffer, strlen(expected));
    close(file_fd);
    assert(strcmp(buffer, expected) == 0);
}

void ft_putendl_fd_spec(void) {
    // Test 1: Basic input
    char *string1 = "Hello, world!\n";
    putendl_fd_cmp(string1, string1);

    // Test 2: Empty string
    char *string2 = "\n";
    putendl_fd_cmp(string2, string2);

    // Test 3: String with newline character
    char *string3 = "This is a\nmultiline string\n";
    putendl_fd_cmp(string3, string3);

    // Test 4: String with special characters
    char *string4 = "Special characters: \t\n\r\n";
    putendl_fd_cmp(string4, string4);

    printf("ft_putendl_fd test passed!\n");
}