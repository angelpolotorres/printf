/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_nbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apolo-to <apolo-to@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 17:57:11 by apolo-to          #+#    #+#             */
/*   Updated: 2023/03/27 11:58:27 by apolo-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/**
 * This ft print a number and modify the num of chars printed by printf.
 * @param nbr The nbr to print.
 * @param *chars_printed The pointer to modify the num of chars printed.
 * @return Nothing
*/
void	ft_print_nbr(int nbr, int *chars_printed)
{
	if (nbr == INT_MIN)
	{
		ft_print_str("-2147483648", chars_printed);
		return ;
	}
	if (nbr < 0)
	{
		ft_print_char('-', chars_printed);
		ft_print_nbr((nbr * -1), chars_printed);
	}
	else
	{
		if (nbr > 9)
			ft_print_nbr((nbr / 10), chars_printed);
		ft_print_char(((nbr % 10) + '0'), chars_printed);
	}
}
