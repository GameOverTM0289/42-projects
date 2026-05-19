/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_unsigned.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aibro <aibro@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 18:36:48 by aibro             #+#    #+#             */
/*   Updated: 2025/11/09 17:02:44 by aibro            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_unsigned_len(unsigned int n)
{
	int	len;

	len = 1;
	while (n >= 10)
	{
		n /= 10;
		len++;
	}
	return (len);
}

int	ft_printf_unsigned(unsigned int n)
{
	char	c;
	int		len;

	len = ft_unsigned_len(n);
	if (n >= 10)
		ft_printf_unsigned(n / 10);
	c = (n % 10) + '0';
	ft_putchar_fd(c, 1);
	return (len);
}
