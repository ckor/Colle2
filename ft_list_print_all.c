/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_print_all.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wzafati <wzafati@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/18 10:38:16 by wzafati           #+#    #+#             */
/*   Updated: 2016/07/18 10:38:18 by wzafati          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void		ft_list_print_all(t_list *list)
{
	t_list	*cursor;
	char	*str;

	cursor = list;
	while (cursor)
	{
		str = cursor->data;
		ft_putstr(str);
		ft_putchar('\n');
		cursor = cursor->next;
	}
}
