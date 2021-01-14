/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_precision.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinbekim <jinbekim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 18:18:06 by jinbekim          #+#    #+#             */
/*   Updated: 2021/01/14 18:32:14 by jinbekim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_bool		is_precision(int arg, t_format *format)
{
	if (ft_isdigit(arg))
	{
		format->precision = (format->precision * 10) + (arg - '0');
		return (true);
	}
	return (false);
}
