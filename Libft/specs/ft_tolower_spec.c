/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower_spec.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkupler <tkupler@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 18:22:30 by tkupler           #+#    #+#             */
/*   Updated: 2024/04/19 17:24:46 by tkupler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_spec.h"

void	ft_tolower_spec(void)
{
    assert(ft_tolower('a') == 'a');
    assert(ft_tolower('z') == 'z');
    
    assert(ft_tolower('A') == 'a');
    assert(ft_tolower('Z') == 'z');
    
    assert(ft_tolower('1') == '1');
    assert(ft_tolower('@') == '@');
    
    assert(ft_tolower(EOF) == EOF);
    printf("ft_tolower test passed!\n");
}
