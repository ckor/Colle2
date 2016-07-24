/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_liste_push_back.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wzafati <wzafati@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/19 12:30:17 by wzafati           #+#    #+#             */
/*   Updated: 2016/07/19 12:37:15 by wzafati          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_utils.h"
#include "ft_list.h"

void			ft_list_push_back(t_list **begin_list, void *data)
{
	t_list		*cursor;
	t_list		*back;

	cursor = *begin_list;
	back = ft_create_elem(data);
	while ((cursor) && (cursor->next) && (cursor = cursor->next));
	if (cursor)
		cursor->next = back;
	else
		*begin_list = back;
}
