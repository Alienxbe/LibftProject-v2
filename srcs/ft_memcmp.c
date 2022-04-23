/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maykman <maykman@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 01:20:43 by mykman            #+#    #+#             */
/*   Updated: 2022/04/23 19:31:42 by maykman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = -1;
	if (s1 && s2)
		while (++i < n)
			if (((unsigned char *)s1)[i] != ((unsigned char *)s2)[i])
				return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
	return (0);
}
