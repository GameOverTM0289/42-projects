/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aibro <aibro@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 18:51:16 by aibro             #+#    #+#             */
/*   Updated: 2025/10/24 14:02:10 by aibro            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_hex_len(unsigned int n)
{
	int	len;

	len = 1;
	while (n >= 16)
	{
		n /= 16;
		len++;
	}
	return (len);
}

int	ft_printf_hex(unsigned int n, int upcase)
{
	int		len;
	char	*base;	

	if (upcase)
		base = "0123456789ABCDEF";
	else
		base = "0123456789abcdef";
	len = ft_hex_len(n);
	if (n >= 16)
		ft_printf_hex(n / 16, upcase);
	ft_putchar_fd(base[n % 16], 1);
	return (len);
}
