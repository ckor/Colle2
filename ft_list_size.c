/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_liste_size.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wzafati <wzafati@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/19 12:30:17 by wzafati           #+#    #+#             */
/*   Updated: 2016/07/19 12:37:15 by wzafati          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_utils.h"
#include "ft_list.h"

int				ft_list_size(t_list *begin_list)
{
	t_list		*cursor;
	int			len;

	len = 0;
	cursor = begin_list;
	while (cursor && (++len))
		cursor = cursor->next;
	return (len);
}
