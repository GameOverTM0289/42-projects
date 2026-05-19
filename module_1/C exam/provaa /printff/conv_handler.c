/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conv_handler.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aibro <aibro@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 14:02:51 by aibro             #+#    #+#             */
/*   Updated: 2025/11/09 15:13:10 by aibro            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_conv_handler(char specifier, va_list args)
{
	if (specifier == 'c')
		return (ft_printf_char(va_arg(args, int)));
	else if (specifier == 's')
		return (ft_printf_str(va_arg(args, char *)));
	else if (specifier == 'd' || specifier == 'i')
		return (ft_printf_nbr(va_arg(args, int)));
	else if (specifier == 'u')
		return (ft_printf_unsigned(va_arg(args, unsigned int)));
	else if (specifier == 'x')
		return (ft_printf_hex(va_arg(args, unsigned int), 0));
	else if (specifier == 'X')
		return (ft_printf_hex(va_arg(args, unsigned int), 1));
	else if (specifier == 'p')
		return (ft_printf_ptr(va_arg(args, unsigned long)));
	else if (specifier == '%')
		return (ft_printf_char('%'));
	return (0);
}
