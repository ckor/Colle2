/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wzafati <wzafati@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/19 12:30:17 by wzafati           #+#    #+#             */
/*   Updated: 2016/07/19 12:37:15 by wzafati          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_utils.h"
#include "ft_list.h"

t_list		*ft_list_push_params(int ac, char **av)
{
	t_list	**list;
	int		i;

	i = 1;
	if ((list = ft_list_new(ac)) == NULL)
		return (NULL);
	while (i < ac && av[i])
		ft_list_push_back(list, av[i++]);
	ft_list_push_back(list, av[0]);
	return (*list);
}
