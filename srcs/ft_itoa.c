/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maykman <maykman@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 06:09:27 by mykman            #+#    #+#             */
/*   Updated: 2022/04/23 23:48:49 by maykman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char			*s;
	size_t			nsize;
	unsigned int	un;

	nsize = ft_intsize(n);
	s = ft_calloc(nsize + 1, sizeof(*s));
	if (!s)
		return (NULL);
	s[0] = '0';
	un = n;
	if (n < 0)
	{
		un = -n;
		s[0] = '-';
	}
	while (un)
	{
		s[--nsize] = '0' + un % 10;
		un /= 10;
	}
	return (s);
}
