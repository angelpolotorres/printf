/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_nbr_unsgnd.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apolo-to <apolo-to@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 11:52:14 by apolo-to          #+#    #+#             */
/*   Updated: 2023/03/27 12:05:26 by apolo-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/**
 * This ft print an unsigned num and modify the num of chars printed by printf.
 * If you pass a negative number the ft interprate as
 * 4294967296(max unsigned int) - nbr(absolute value).
 * @param nbr The unsigned number to print.
 * @param *chars_printed The pointer to modify the num of chars printed.
 * @return Nothing
*/
void	ft_print_nbr_unsgnd(unsigned int nbr, int *chars_printed)
{
	if (nbr > 9)
		ft_print_nbr_unsgnd((nbr / 10), chars_printed);
	ft_print_char(((nbr % 10) + '0'), chars_printed);
}
