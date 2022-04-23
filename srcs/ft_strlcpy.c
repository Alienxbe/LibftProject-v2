/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maykman <maykman@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 17:49:46 by maykman           #+#    #+#             */
/*   Updated: 2022/04/23 19:36:36 by maykman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	srclen;

	if (!dst || !src)
		return (0);
	srclen = ft_strlen(src);
	if (srclen > dstsize - 1)
	{
		ft_memcpy(dst, src, dstsize - 1);
		dst[dstsize - 1] = 0;
	}
	else if (dstsize)
		ft_memcpy(dst, src, ft_strlen(src) + 1);
	return (srclen);
}
