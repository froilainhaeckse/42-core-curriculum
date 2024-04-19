/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr_spec.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkupler <tkupler@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 18:22:30 by tkupler           #+#    #+#             */
/*   Updated: 2024/04/19 17:41:03 by tkupler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_spec.h"

void	ft_strchr_spec(void)
{
    char str[] = "Hello, world!";
    
    assert(ft_strchr(str, 'H') == strchr(str, 'H'));
    assert(ft_strchr(str, 'o') == strchr(str, 'o'));
    assert(ft_strchr(str, '!') == strchr(str, '!'));
    assert(ft_strchr(str, '\0') == strchr(str, '\0'));
    assert(ft_strchr(str, 'z') == strchr(str, 'z'));
    assert(ft_strchr(str, '\0') == strchr(str, '\0'));
    
    printf("ft_strchr test passed!\n");
}
