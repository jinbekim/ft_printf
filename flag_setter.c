/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flag_setter.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinbekim <jinbekim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 21:56:30 by jinbekim          #+#    #+#             */
/*   Updated: 2021/01/14 22:42:07 by jinbekim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_initializer(t_format *format)
{
	format->leftalign = false;
	format->zero = false;
	format->width = false;
	format->precision = false;
}

static void	ft_switch(char arg, t_format format, va_list ap)
{
	if (arg == 'c')
		put_char(format, va_arg(ap, int));
	// else if (arg == 'i' || arg == 'd')
	// 	put_nbr(format, va_arg(ap, int));
	// else if (arg == 'x' || arg == 'X')
	// 	put_hex(format, va_arg(ap, unsigned int));
	// else if (arg == 'u')
	// 	put_usigned(format, va_arg(ap, unsigned int));
	// else if (arg == 'p')
	// 	put_ptr(format, va_arg(ap, void *));
	// else if (arg == 's')
	// 	put_str(format, va_arg(ap, char *));
	// else if (arg == '%')
	// 	put_asterisk(format);
}

int			flag_setter(const char *arg, va_list ap)
{
	int			i;
	t_format	format;

	ft_initializer(&format);
	i = 1;
	while (is_minus(arg[i], &format) || is_zero(arg[i], &format))
		i++;
	while (is_width(arg[i], &format) || is_w_asterisk(arg[i], &format, ap))
		i++;
	if (arg[i] == '.')
		i++;
	while (is_precision(arg[i], &format) || is_p_asterisk(arg[i], &format, ap))
		i++;
	ft_switch(arg[i], format, ap);
	return (i + 1);
}
