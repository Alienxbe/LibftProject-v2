/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <mykman@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 21:14:32 by mykman            #+#    #+#             */
/*   Updated: 2022/03/19 17:32:30 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
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

void	ft_memory_tester(void)
{
	char	string[] = "Bonjour a tous les amis !";
	char	s1[10];
	char	s2[10];

	// ft_memset
	memset(s1, 1, 10);
	memset(s2, 1, 10);
	memset(s1 + 1, 'a', 4);
	ft_memset(s2 + 1, 'a', 4);
	if (memcmp(s1, s2, 10))
		printf("Error on function ft_memset\n");
	// ft_bzero
	memset(s1, 1, 10);
	memset(s2, 1, 10);
	bzero(s1 + 1, 4);
	ft_bzero(s2 + 1, 4);
	if (memcmp(s1, s2, 10))
		printf("Error on function ft_bzero\n");
	// ft_memcpy
	memset(s1, 1, 10);
	memset(s2, 1, 10);
	memcpy(s1 + 1, string, 4);
	ft_memcpy(s2 + 1, string, 4);
	if (memcmp(s1, s2, 10))
		printf("Error on function ft_memcpy\n");
}

int main(void)
{
	ft_putnbr_fd(INT_MAX, STDOUT_FILENO);
	ft_putchar_fd('\n', STDOUT_FILENO);
	return (0);
}
