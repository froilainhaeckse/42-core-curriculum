/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper_spec.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkupler <tkupler@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 18:22:30 by tkupler           #+#    #+#             */
/*   Updated: 2024/04/19 17:21:41 by tkupler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_spec.h"

void	ft_toupper_spec(void)
{
    assert(ft_toupper('a') == 'A');
    assert(ft_toupper('z') == 'Z');
    
    assert(ft_toupper('A') == 'A');
    assert(ft_toupper('Z') == 'Z');
    
    assert(ft_toupper('1') == '1');
    assert(ft_toupper('@') == '@');
    
    assert(ft_toupper(EOF) == EOF);
    
    printf("ft_toupper test passed!\n");
}
