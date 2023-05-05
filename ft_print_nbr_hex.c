/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_nbr_hex.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apolo-to <apolo-to@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 14:46:02 by apolo-to          #+#    #+#             */
/*   Updated: 2023/03/27 12:13:46 by apolo-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/**
 * This ft print a num transformed on hexadecimal.
 * Also modify the num of chars printed by printf.
 * The typecase define bewteen uppercase or lowercase hexadecimal.
 * @param nbr The nbr to print.
 * @param *chars_printed The pointer to modify the num of chars printed.
 * @param typecase x for lowercasse or X for uppercase hexadecimal.
 * @return Nothing
*/
void	ft_print_nbr_hex(unsigned int nbr, int *chars_printed, char typecase)
{
	char	*base;

	if (typecase == 'x')
		base = "0123456789abcdef";
	if (typecase == 'X')
		base = "0123456789ABCDEF";
	if (nbr > 15)
		ft_print_nbr_hex((nbr / 16), chars_printed, typecase);
	ft_print_char(base[nbr % 16], chars_printed);
}
