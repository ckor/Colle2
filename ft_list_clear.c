/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wzafati <wzafati@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/19 12:30:17 by wzafati           #+#    #+#             */
/*   Updated: 2016/07/19 12:37:15 by wzafati          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_utils.h"
#include "ft_list.h"

void					ft_list_clear(t_list **begin_list)
{
	t_list		*head;
	t_list		*cursor;

	head = *begin_list;
	while ((cursor = head) != NULL)
	{
		head = head->next;
		free(cursor);
	}
	*begin_list = NULL;
}
