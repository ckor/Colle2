/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_colle.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldelbart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/24 18:20:10 by ldelbart          #+#    #+#             */
/*   Updated: 2016/07/24 23:03:26 by wzafati          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "colle.h"

int		ft_test_colle(char *str, char *set, char *nom_colle, int first_print)
{
	int		len;
	int		len_line;
	int		i;
	int		nb_line;

	i = 0;
	len = ft_strlen(str);
	while (str[i] != '\n' && str[i])
		i++;
	len_line = i + 1;
	if (len % len_line != 0)
		return (0);
	else
	{
		nb_line = len / len_line;
		if (ft_valid_input(str, set, nb_line))
		{
			if (first_print == 1)
				ft_putstr(" || ");
			ft_print_colle(nb_line, len_line - 1, nom_colle);
			return (1);
		}
	}
	return (0);
}
