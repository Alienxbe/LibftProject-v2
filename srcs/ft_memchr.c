/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maykman <maykman@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 01:08:35 by mykman            #+#    #+#             */
/*   Updated: 2022/04/23 19:30:48 by maykman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	if (s)
		while (n--)
			if (*(unsigned char *)s++ == (unsigned char)c)
				return ((unsigned char *)s - 1);
	return (NULL);
}
