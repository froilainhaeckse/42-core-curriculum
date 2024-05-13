/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd_spec.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkupler <tkupler@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/12 20:47:02 by tkupler           #+#    #+#             */
/*   Updated: 2024/05/13 10:04:32 by tkupler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <assert.h>
#include <string.h>
#include "libft_spec.h"

void ft_putchar_fd_spec(void)
{
    char buffer[2] = {0};
    int fd;

    // Test 1: Output to file
    fd = open("output.txt", O_WRONLY | O_CREAT, 0644);
    ft_putchar_fd('A', fd);
    close(fd);

    // Read the file and compare with expected output
    fd = open("output.txt", O_RDONLY);
    read(fd, buffer, 1);
    close(fd);
    assert(strcmp(buffer, "A") == 0);

    // Test 2: Output to another file
    fd = open("output2.txt", O_WRONLY | O_CREAT, 0644);
    ft_putchar_fd('B', fd);
    close(fd);

    // Read the file and compare with expected output
    fd = open("output2.txt", O_RDONLY);
    read(fd, buffer, 1);
    close(fd);
    assert(strcmp(buffer, "B") == 0);

    printf("ft_putchar_fd test passed!\n");
}