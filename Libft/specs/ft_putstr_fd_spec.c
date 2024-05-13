/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd_spec.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkupler <tkupler@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/12 20:42:41 by tkupler           #+#    #+#             */
/*   Updated: 2024/05/13 10:08:19 by tkupler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_spec.h"
#include <fcntl.h>
#include <assert.h>
#include <string.h>

void ft_putstr_fd_spec(void) {
    char buffer[50] = {0};
    int fd;

    // Test 1: Output to file
    char *string1 = "Hello, world!";
    fd = open("output.txt", O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
    assert(fd != -1);
    ft_putstr_fd(string1, fd);
    close(fd);

    // Read the file and compare with expected output
    fd = open("output.txt", O_RDONLY);
    read(fd, buffer, strlen(string1));
    close(fd);
    assert(strcmp(buffer, string1) == 0);

    // Test 2: Output to another file
    char *string2 = "This is a test.";
    fd = open("output2.txt", O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
    assert(fd != -1);
    ft_putstr_fd(string2, fd);
    close(fd);

    // Read the file and compare with expected output
    fd = open("output2.txt", O_RDONLY);
    read(fd, buffer, strlen(string2));
    close(fd);
    assert(strcmp(buffer, string2) == 0);

    printf("ft_putstr_fd test passed!\n");
}