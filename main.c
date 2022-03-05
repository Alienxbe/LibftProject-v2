/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <mykman@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 21:14:32 by mykman            #+#    #+#             */
/*   Updated: 2022/03/05 04:04:50 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void	ft_ctype_tester(void)
{
	int		(*ft_ctype[])(int) = {&ft_isalnum, &ft_isalpha, &ft_isascii, &ft_isdigit, &ft_isprint, &ft_toupper, &ft_tolower};
	int		(*ctype[])(int) = {&isalnum, &isalpha, &isascii, &isdigit, &isprint, &toupper, &tolower};
	char	*f_name[] = {"ft_isalnum", "ft_isalpha", "ft_isascii", "ft_isdigit", "ft_isprint", "ft_toupper", "ft_tolower"};

	for (int i = 0; i < 7; i++)
		for (int c = 0; c <= UCHAR_MAX; c++)
			if ((i < 5 && !ft_ctype[i](c) != !ctype[i](c)) || (i >= 5 && ft_ctype[i](c) != ctype[i](c)) )
				printf("Error on function %s with character : `%d` (Original : `%d`, yours : `%d`)\n", f_name[i], c, !!ctype[i](c), !!ft_ctype[i](c));
}

int main(void)
{
	ft_ctype_tester();
	return (0);
}