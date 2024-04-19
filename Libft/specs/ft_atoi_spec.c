/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_spec.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkupler <tkupler@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 18:22:30 by tkupler           #+#    #+#             */
/*   Updated: 2024/04/19 18:37:03 by tkupler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_spec.h"

void	ft_atoi_spec(void)
{
    assert(ft_atoi("123") == atoi("123"));
    assert(ft_atoi("-456") == atoi("-456"));
    assert(ft_atoi("0") == atoi("0"));
    assert(ft_atoi("42 is the answer") == atoi("42 is the answer"));
    assert(ft_atoi("   789") == atoi("   789"));
    assert(ft_atoi("abc123") == atoi("abc123"));
    
    printf("ft_atoi test passed!\n");
}
