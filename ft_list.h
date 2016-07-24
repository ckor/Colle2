/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wzafati <wzafati@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/19 12:20:19 by wzafati           #+#    #+#             */
/*   Updated: 2016/07/19 12:20:21 by wzafati          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
# define FT_LIST_H
# include <stdlib.h>
# include "ft_utils.h"

typedef struct			s_list
{
	struct s_list		*next;
	void				*data;
}						t_list;
t_list					**ft_list_new(unsigned int size);
t_list					*ft_create_elem(void *data);
void					ft_list_clear(t_list **begin_list);
void					ft_list_delete(t_list **list);
void					ft_list_print_all(t_list *list);
void					ft_list_push_back(t_list **begin_list, void *data);
int						ft_list_size(t_list *begin_list);
t_list					*ft_list_push_params(int ac, char **av);
#endif
