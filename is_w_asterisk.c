/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_w_asterisk.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinbekim <jinbekim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 16:17:27 by jinbekim          #+#    #+#             */
/*   Updated: 2021/01/14 22:34:11 by jinbekim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_bool		is_w_asterisk(char arg, t_format *format, va_list ap)
{
	int	width;

	if (arg != '*')
		return (false);
	width = va_arg(ap, int);
	if (width < 0)
	{
		format->leftalign = true;
		format->width = width * -1;
	}
	else
	{
		format->width = width;
	}
	return (true);
}
