/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maykman <maykman@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 19:12:51 by mykman            #+#    #+#             */
/*   Updated: 2022/04/23 19:34:48 by maykman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*cpy;

	if (!s)
		return (NULL);
	cpy = ft_calloc(ft_strlen(s) + 1, sizeof(*cpy));
	if (!cpy)
		return (NULL);
	return (ft_memcpy(cpy, s, ft_strlen(s)));
}
