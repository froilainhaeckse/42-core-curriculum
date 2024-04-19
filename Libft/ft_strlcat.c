/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkupler <tkupler@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 22:27:19 by tkupler           #+#    #+#             */
/*   Updated: 2024/04/19 23:31:16 by tkupler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	total_len;
	size_t	i;

	dst_len = ft_strlen((char *) dst);
	src_len = ft_strlen((char *) src);
	total_len = dst_len + src_len;
	i = 0;
	if (size <= dst_len)
		return (src_len + size);
	while (src[i] != '\0' && (dst_len + i + 1) < size)
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	if (dst_len < size - 1)
		dst[dst_len + i] = '\0';
	return (total_len);
}
