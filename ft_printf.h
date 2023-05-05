/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apolo-to <apolo-to@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 14:15:28 by apolo-to          #+#    #+#             */
/*   Updated: 2023/03/27 12:20:18 by apolo-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>
# include <limits.h>

int		ft_printf(char const *str, ...);
void	ft_print_char(char c, int *chars_printed);
void	ft_print_str(char *str, int *chars_printed);
void	ft_print_nbr(int nbr, int *chars_printed);
void	ft_print_nbr_unsgnd(unsigned int nbr, int *chars_printed);
void	ft_print_nbr_hex(unsigned int nbr, int *chars_printed, char typecase);
void	ft_print_ptr(uintptr_t ptr, int *chars_printed);

#endif