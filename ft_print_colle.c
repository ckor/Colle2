/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_colle.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wzafati <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/24 21:36:50 by wzafati           #+#    #+#             */
/*   Updated: 2016/07/24 21:45:28 by wzafati          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "colle.h"

void	ft_print_colle(int nb_line, int nb_colonne, char *nom_colle)
{
	ft_putchar('[');
	ft_putstr(nom_colle);
	ft_putstr("] [");
	ft_putnbr(nb_line);
	ft_putstr("] [");
	ft_putnbr(nb_colonne);
	ft_putstr("]");
}
