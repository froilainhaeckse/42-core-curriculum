/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr_spec.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkupler <tkupler@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 18:22:30 by tkupler           #+#    #+#             */
/*   Updated: 2024/05/01 19:11:25 by tkupler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_spec.h"

void	ft_strrchr_spec(void)
{
    char str[] = "Hello, world!";
    
    assert(ft_strrchr(str, 'H') == strrchr(str, 'H'));
    assert(ft_strrchr(str, 'o') == strrchr(str, 'o'));
    assert(ft_strrchr(str, '!') == strrchr(str, '!'));
    assert(ft_strrchr(str, '\0') == strrchr(str, '\0'));
    assert(ft_strrchr(str, 'z') == strrchr(str, 'z'));
    assert(ft_strrchr(str, '\0') == strrchr(str, '\0'));
    assert(ft_strrchr(str, '\0') == strrchr(str, '\0'));
    assert(ft_strrchr("teste", 'e') == strrchr("teste", 'e'));
    assert(ft_strrchr("teste", 'e') == &("teste"[4]));
    
    printf("ft_strrchr test passed!\n");
}
