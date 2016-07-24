/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldelbart <wzafati@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/24 15:18:13 by ldelbart          #+#    #+#             */
/*   Updated: 2016/07/24 23:40:32 by wzafati          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "colle.h"

int			valid_line(char *str, char begin, char mid, char end)
{
	int		i;

	i = 0;
	while (str[i] != '\n')
	{
		if (i == 0)
		{
			if (str[i] != begin)
				return (-1);
		}
		else if (str[i + 1] == '\n' && i != 0)
		{
			if (str[i] != end)
				return (-1);
		}
		else
		{
			if (str[i] != mid)
				return (-1);
		}
		i++;
	}
	return (i + 1);
}

int			ft_valid_input(char *str, char *set, int nb_lines)
{
	int		i;
	int		check_line;

	i = 0;
	check_line = 0;
	while (i < nb_lines)
	{
		if (*str != '\n')
		{
			if (i == 0)
				check_line = valid_line(str, set[0], set[1], set[2]);
			else if (i == nb_lines - 1)
				check_line = valid_line(str, set[4], set[5], set[6]);
			else
				check_line = valid_line(str, set[3], ' ', set[3]);
			if (check_line == -1)
				return (0);
			str += check_line;
			i++;
		}
	}
	return (1);
}

char		*concat(char *src, char *to_add)
{
	int		a;
	int		b;
	int		c;
	int		d;
	char	*str;

	a = (src) ? (ft_strlen(src)) : (0);
	b = ft_strlen(to_add);
	str = malloc(a + b + 1);
	if (str)
	{
		c = 0;
		d = 0;
		while (c < a + b)
		{
			if (c < a)
				str[c] = src[c];
			else
				str[c] = to_add[d++];
			c++;
		}
		str[c] = '\0';
	}
	free(src);
	return (str);
}

int			main(void)
{
	char	*str;
	int		first_print;
	int		ret;
	char	buffer[BUF_SIZE + 1];

	str = NULL;
	first_print = 0;
	while ((ret = read(0, buffer, BUF_SIZE)))
	{
		buffer[ret] = '\0';
		str = concat(str, buffer);
	}
	if (!str)
	{
		ft_putstr("aucune");
		return (0);
	}
	colle_verif(str, &first_print);
	write(1, "\n", 1);
	return (0);
}
