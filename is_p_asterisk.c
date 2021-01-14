/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_p.asterisk.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinbekim <jinbekim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 18:32:40 by jinbekim          #+#    #+#             */
/*   Updated: 2021/01/14 22:34:16 by jinbekim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_bool		is_p_asterisk(int arg, t_format *format, va_list ap)
{
	int	precision;

	if (arg != '*')
		return (false);
	precision = va_arg(ap, int);
	if (precision < 0)
	{
		format->precision = 0;
		return (true);
	}
	format->precision = precision;
	return (true);
}
