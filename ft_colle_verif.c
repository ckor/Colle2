/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_colle_verif.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wzafati <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/24 21:37:51 by wzafati           #+#    #+#             */
/*   Updated: 2016/07/24 23:05:03 by wzafati          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "colle.h"

int		colle_verif(char *str, int *first_print)
{
	if (str[0] == 'o' || str[0] == '/' || str[0] == 'A')
	{
		if (str[0] == 'o')
			if (ft_test_colle(str, "o-o|o-o", "colle-00", *first_print))
				*first_print = 1;
		if (str[0] == '/')
			if (ft_test_colle(str, "/*\\*\\*/", "colle-01", *first_print))
				*first_print = 1;
		if (str[0] == 'A')
		{
			if (ft_test_colle(str, "ABABCBC", "colle-02", *first_print))
				*first_print = 1;
			if (ft_test_colle(str, "ABCBABC", "colle-03", *first_print))
				*first_print = 1;
			if (ft_test_colle(str, "ABCBCBA", "colle-04", *first_print))
				*first_print = 1;
			ft_putnbr(*first_print);
			ft_putchar('\n');
		}
	}
	if (*first_print == 0)
		ft_putstr("aucune");
	return (0);
}
