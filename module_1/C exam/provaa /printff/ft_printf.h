/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aibro <aibro@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 14:57:14 by aibro             #+#    #+#             */
/*   Updated: 2025/11/09 14:57:28 by aibro            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include "../Common-Core---Libft-6200b580-59cb-4c1d-8944-57e84a5237c2/libft.h"

int		ft_printf(const char *format, ...);
int		ft_conv_handler(char specifier, va_list args);
int		ft_printf_char(char c);
int		ft_printf_str(char *s);
int		ft_printf_nbr(int n);
int		ft_printf_unsigned(unsigned int n);
int		ft_printf_hex(unsigned int n, int uppercase);
int		ft_printf_ptr(unsigned long ptr);

#endif
