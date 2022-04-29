/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maykman <maykman@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 23:48:31 by maykman           #+#    #+#             */
/*   Updated: 2022/04/23 23:49:03 by maykman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_intsize(long n)
{
	if (n < 0)
		return (ft_intsize(-n) + 1);
	if (n < 10)
		return (1);
	return (ft_intsize(n / 10) + 1);
}