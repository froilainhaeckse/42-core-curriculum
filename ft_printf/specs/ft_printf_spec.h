/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_spec.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkupler <tkupler@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 13:38:37 by tkupler           #+#    #+#             */
/*   Updated: 2024/05/13 14:09:28 by tkupler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_SPEC_H
# define FT_PRINTF_SPEC_H

# include "../ft_printf.h"
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

void	ft_printf_spec(void);



#endif