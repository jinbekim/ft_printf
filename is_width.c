/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_width.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinbekim <jinbekim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 03:58:53 by jinbekim          #+#    #+#             */
/*   Updated: 2021/01/14 22:43:29 by jinbekim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_bool		is_width(int arg, t_format *format)
{
	if (ft_isdigit(arg))
	{
		format->width = (format->width * 10) + (arg - '0');
		return (true);
	}
	return (false);
}
