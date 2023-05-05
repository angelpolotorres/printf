/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_char.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apolo-to <apolo-to@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 18:01:28 by apolo-to          #+#    #+#             */
/*   Updated: 2023/03/28 11:11:47 by apolo-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/**
 * This ft print a char and modify the num of chars printed by printf.
 * @param c The char to print.
 * @param *chars_printed The pointer to modify the num of chars printed.
 * @return Nothing
*/
void	ft_print_char(char c, int *chars_printed)
{
	write(1, &c, 1);
	*chars_printed += 1;
}
