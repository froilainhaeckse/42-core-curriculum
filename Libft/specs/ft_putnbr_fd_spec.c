/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd_spec.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkupler <tkupler@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/12 21:05:26 by tkupler           #+#    #+#             */
/*   Updated: 2024/05/13 10:12:37 by tkupler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_spec.h"
#include <fcntl.h>
#include <assert.h>
#include <string.h>

void putnbr_fd_cmp(char *expected, int n) {
    char buffer[100] = {0};
    int file_fd;

    // Write to file
    file_fd = open("output.txt", O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
    assert(file_fd != -1);
    ft_putnbr_fd(n, file_fd);
    close(file_fd);

    // Read the file and compare with expected output
    file_fd = open("output.txt", O_RDONLY);
    read(file_fd, buffer, strlen(expected));
    close(file_fd);
    assert(strcmp(buffer, expected) == 0);
}

void ft_putnbr_fd_spec(void) {
    // Test 1: Basic input
    putnbr_fd_cmp("123", 123);

    // Test 2: Negative number
    putnbr_fd_cmp("-123", -123);

    // Test 3: Zero
    putnbr_fd_cmp("0", 0);

    // Test 4: Maximum integer
    putnbr_fd_cmp("2147483647", 2147483647);

    // Test 5: Minimum integer
    putnbr_fd_cmp("-2147483648", -2147483648);

    printf("ft_putnbr_fd test passed!\n");
}