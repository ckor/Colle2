/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wzafati <wzafati@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/19 12:30:17 by wzafati           #+#    #+#             */
/*   Updated: 2016/07/19 12:37:15 by wzafati          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_utils.h"
#include "ft_list.h"

t_list			*ft_create_elem(void *data)
{
	t_list		*ret;

	ret = NULL;
	if ((ret = malloc(sizeof(*ret))) != NULL)
	{
		ret->data = data;
		ret->next = NULL;
	}
	return (ret);
}
