/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_ptr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aibro <aibro@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 13:19:38 by aibro             #+#    #+#             */
/*   Updated: 2025/11/10 17:40:40 by aibro            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_ptr_len(unsigned long n)
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

static void	ft_put_ptr(unsigned long n)
{
	if (n >= 16)
		ft_put_ptr(n / 16);
	ft_putchar_fd("0123456789abcdef"[n % 16], 1);
}

int	ft_printf_ptr(unsigned long ptr)
{
	int		len;

	if (!ptr)
		return (ft_printf_str("(nil)"));
	write(1, "0x", 2);
	len = ft_ptr_len(ptr);
	ft_put_ptr(ptr);
	return (len + 2);
}
