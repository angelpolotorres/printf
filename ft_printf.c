/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apolo-to <apolo-to@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 12:29:45 by apolo-to          #+#    #+#             */
/*   Updated: 2023/03/28 14:34:44 by apolo-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/**
 * This ft decides which print function to use according to the data type.
 * @param format The data format to print
 * @param *args The content to print
 * @param *chars_printed The num of chars printed.
*/
static void	ft_print_with_format(char format, va_list *args,
	int *chars_printed, int *i)
{
	if (format == 'c')
		ft_print_char(va_arg(*args, int), chars_printed);
	else if (format == 's')
		ft_print_str(va_arg(*args, char *), chars_printed);
	else if (format == 'i' || format == 'd')
		ft_print_nbr(va_arg(*args, int), chars_printed);
	else if (format == 'u')
		ft_print_nbr_unsgnd(va_arg(*args, unsigned int), chars_printed);
	else if (format == 'x' || format == 'X')
		ft_print_nbr_hex(va_arg(*args, unsigned long), chars_printed, format);
	else if (format == 'p')
		ft_print_ptr(va_arg(*args, unsigned long), chars_printed);
	else if (format == '%')
		ft_print_char('%', chars_printed);
	else
		*i -= 1;
}

/**
 * This ft print the data passed by params
 * This ft is a copy of printf from <stdio.h>
 * @param *str A string format defining the type of data that has been passed
 * @param ... The data to print
 * @return The number of caracters printed except the final null.
*/
int	ft_printf(char const *str, ...)
{
	va_list	args;
	int		i;
	int		chars_printed;

	if (!str)
		return (-1);
	i = 0;
	chars_printed = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			i ++;
			ft_print_with_format(str[i], &args, &chars_printed, &i);
			i ++;
		}
		else
		{
			ft_print_char((char)str[i], &chars_printed);
			i++;
		}
	}
	va_end(args);
	return (chars_printed);
}

// int	main(void)
// {
// 	char	*str;

// 	str = "hola";
// 	ft_printf("\nchar: %c", 'h');
// 	ft_printf("\nstring: %s", "hola mundo");
// 	ft_printf("\nnumber: %i", -5);
// 	ft_printf("\nunsgnd num: %u", 4);
// 	ft_printf("\nhex num: %x", -461);
// 	ft_printf("\nhex num: %X", 215);
// 	ft_printf("\nptr: %p", str);
// 	ft_printf("\nporcentaje: %%%%%");
// 	ft_printf("\nhola %s\n como estas", "angel");
// 	return (0);
// }
