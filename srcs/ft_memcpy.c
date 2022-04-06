/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maykman <maykman@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 00:38:50 by mykman            #+#    #+#             */
/*   Updated: 2022/04/06 18:40:47 by maykman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	while (n--)
	{
		printf("Copyingg char : %d (%c)\n", *((unsigned char *)src + n), *((unsigned char *)src + n));
		*((unsigned char *)dest + n) = *((unsigned char *)src + n);
	}
	return (dest);
}
