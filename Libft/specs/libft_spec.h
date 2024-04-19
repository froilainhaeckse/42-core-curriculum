/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_spec.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkupler <tkupler@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 13:38:37 by tkupler           #+#    #+#             */
/*   Updated: 2024/04/19 23:40:59 by tkupler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_SPEC_H
# define LIBFT_SPEC_H

# include "../libft.h"
# include "stdio.h"
# include "assert.h"
# include "ctype.h"
# include <stdlib.h>

# ifdef __APPLE__
// Include macOS-specific headers
#  include <string.h>
# else
// Include Linux-specific headers
#  include <bsd/string.h>
# endif

void	ft_isalpha_spec(void);
void	ft_isdigit_spec(void);
void	ft_isalnum_spec(void);
void	ft_isascii_spec(void);
void	ft_isprint_spec(void);
void	ft_strlen_spec(void);
void	ft_memset_spec(void);
void	ft_bzero_spec(void);
void	ft_memcpy_spec(void);
void	ft_memmove_spec(void);
void	ft_strlcpy_spec(void);
void	ft_strlcat_spec(void);
void	ft_toupper_spec(void);
void	ft_tolower_spec(void);
void	ft_strchr_spec(void);
void	ft_strrchr_spec(void);
void	ft_strncmp_spec(void);
void	ft_memchr_spec(void);
void	ft_memcmp_spec(void);
void	ft_strnstr_spec(void);
void	ft_atoi_spec(void);


#endif