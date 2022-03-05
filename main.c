/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <mykman@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 21:14:32 by mykman            #+#    #+#             */
/*   Updated: 2022/03/03 21:14:32 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void	ft_ctype_tester(void)
{
	int	(*ft_ctype[])(int) = {&ft_isalnum, &ft_isalpha, &ft_isascii,
		&ft_isdigit, ft_isprint};
	int	(*ctype[])(int) = {&isalnum, &isalpha, &isascii, &isdigit, &isprint};

	for (int i = 0; i < 5; i++)
		for (int c = CHAR_MIN; c <= CHAR_MAX; c++)
			if (ft_ctype[i](c) != ctype[i](c))
				printf("Error on function %d with character : `%d`\n", i, c);
}

int main(void)
{
	ft_ctype_tester();
	return (0);
}