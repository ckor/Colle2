/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wzafati <wzafati@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/18 10:38:16 by wzafati           #+#    #+#             */
/*   Updated: 2016/07/18 10:38:18 by wzafati          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int			main(int ac, char **av)
{
	t_list	*list;
	int		len;

	if ((list = ft_list_push_params(ac, av)) == NULL)
		return (0);

	if (ac != 2)
	{
		ft_putstr("Error:\nUsage: ");
		ft_putstr(av[0]);
		ft_putstr(" [Arg 1] [Arg ...]\n");
		return (0);
	}

	ft_list_print_all(list);
	len = ft_list_size(list);
	ft_list_clear(&list);
	ft_putchar('\n');
	ft_putstr("list length: ");
	ft_putnbr(len);
	ft_putchar('\n');

	ft_list_delete(&list);
	return (0);
}
