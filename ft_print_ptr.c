/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apolo-to <apolo-to@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 15:29:51 by apolo-to          #+#    #+#             */
/*   Updated: 2023/03/27 12:16:16 by apolo-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/**
 * This ft print the pointer in hexadecimal.
 * This ft is same as ft_print_nbr_hex but handle uintptr_t (data type) better.
 * @param ptr The pointer in uintptr_t.
 * @param *chars_printed The pointer to modify the num of chars printed.
 * @return Nothing
*/
static void	ft_print_ptr_hex(uintptr_t ptr, int *chars_printed)
{
	char	*base;

	base = "0123456789abcdef";
	if (ptr > 15)
		ft_print_ptr_hex((ptr / 16), chars_printed);
	ft_print_char(base[ptr % 16], chars_printed);
}

/**
 * This ft print the memory address of a pointer.
 * The ft print the prefix '0x' before the memory adress.
 * @param ptr The pointer.
 * @param *chars_printed The pointer to modify the num of chars printed.
 * @return Nothing
*/
void	ft_print_ptr(uintptr_t ptr, int *chars_printed)
{
	char	*ptr_prefix;

	ptr_prefix = "0x";
	ft_print_str(ptr_prefix, chars_printed);
	ft_print_ptr_hex(ptr, chars_printed);
}
