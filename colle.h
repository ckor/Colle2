/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldelbart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/24 15:44:08 by ldelbart          #+#    #+#             */
/*   Updated: 2016/07/24 22:20:06 by wzafati          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef COLLE_H
# define COLLE_H
# include <stdio.h>
# include <unistd.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# define BUF_SIZE 1

int		ft_putstr(char *str);
int		ft_strlen(char *str);
int		ft_strcmp(char *s1, char *s2);
int		ft_test_colle(char *str, char *set, char *nom_colle, int first_print);
void	ft_putnbr(int nb);
void	ft_putmaxmin(char *str);
void	ft_putchar(char c);
char	*ft_strcpy(char *dest, char *src);
int		ft_valid_input(char *str, char *set, int nb_lines);
void	ft_print_colle(int nb_line, int nb_colonne, char *nom_colle);
int		colle_verif(char *str, int *first_print);
#endif
