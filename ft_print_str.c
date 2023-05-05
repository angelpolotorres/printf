/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apolo-to <apolo-to@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 18:03:27 by apolo-to          #+#    #+#             */
/*   Updated: 2023/03/27 12:02:08 by apolo-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/**
 * This ft print a string and modify the num of chars printed by printf.
 * @param *str The string to print.
 * @param *chars_printed The pointer to modify the num of chars printed.
 * @return Nothing
*/
void	ft_print_str(char *str, int *chars_printed)
{
	int	i;

	i = 0;
	if (!str)
	{
		write(1, "(null)", 6);
		*chars_printed += 6;
		return ;
	}
	while (str[i])
	{
		ft_print_char(str[i], chars_printed);
		i++;
	}
}
